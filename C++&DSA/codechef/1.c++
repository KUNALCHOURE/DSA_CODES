#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    
    while(t>0){
        int n;
        cin>>n;
        
        vector<int>atta(n);
        vector<int>defa(n);
        vector<int>attp(n);
        vector<int>defp(n);
        for(int i=0;i<n;i++){
            cin>>atta[i];
        
        }
         for(int i=0;i<n;i++){
            cin>>defa[i];
        
        }
         for(int i=0;i<n;i++){
            cin>>attp[i];
        
        }
         for(int i=0;i<n;i++){
            cin>>defp[i];
        
        }
        
        int attas=0;
        int defas=0;
        int attps=0;
        int defps=0;

     
        attas=accumulate(atta.begin(),atta.end(),attas);
        defas=accumulate(defa.begin(),defa.end(),defas);
        defps=accumulate(defp.begin(),defp.end(),defps);
        attps=accumulate(attp.begin(),attp.end(),attps);

        if(attas>attps && defas>defps){
            cout<<"A"<<endl;

        }
        else if(attps>attas && defps>defas){
            cout<<"P"<<endl;
        }
        else{
            cout<<"DRAW"<<endl;
        }
        t--;
    }
}
