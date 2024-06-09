 #include<bits/stdc++.h>
using namespace std;

int priority(char c)
{
    if(c=='*'||c=='/'){
        return 2;
    }
    else if(c=='-'||c=='+'){
        return 1;
    }
    else return 0;
}

int solve(int v1,char c,int v2){
     if(c=='+') return v1+v2;
     if(c=='*') return v1*v2;
     if(c=='/') return v1/v2;
     if(c=='-') return v1-v2;

}
int main(){
    string s="(7+9)*4/8-3";
    stack<int>val;
    stack<char>op;
    for(int i=0;i<s.length();i++){
        if(s[i]>=48 && s[i]<=57){
            val.push(s[i]-48);
        }

        else{
            if(op.size()==0 ){
                op.push(s[i]);
            }
            else if(s[i]=='(') op.push('(');
            else if(op.top()=='(') op.push(s[i]);
            else if(s[i]==')'){
                   while(op.top()!='('){
                    char ch=op.top();
                    op.pop();
                    int val2=val.top();
                    val.pop();
                    int val1=val.top();
                    val.pop();

                    int ans=solve(val1 ,ch ,val2);
                    val.push(ans);
                }
                op.pop();


            }
            else if( priority(s[i])>priority(op.top())){
                op.push(s[i]);
            }
            else{
                while(op.size()>0 && priority(op.top())>=priority(s[i])){
                    char ch=op.top();
                    op.pop();
                    int val2=val.top();
                    val.pop();
                    int val1=val.top();
                    val.pop();

                    int ans=solve(val1 ,ch ,val2);
                    val.push(ans);
                }
                op.push(s[i]);
            }
            
        }
    }

    //operator stack may havevalue so make it empty
    while(op.size()>0){
     //work
                    char ch=op.top();
                    op.pop();
                    int val2=val.top();
                    val.pop();
                    int val1=val.top();
                    val.pop();

                    int ans=solve(val1 ,ch ,val2);
                    val.push(ans);
                }

                cout<<val.top();
    }


