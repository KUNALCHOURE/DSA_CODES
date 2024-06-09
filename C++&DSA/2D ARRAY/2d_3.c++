#include<iostream>
#include<vector>
using namespace std;

  /*  vector<int> v1; //1 d vector
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    vector<int> v2;
    v2.push_back(4);
      v2.push_back(5);
        v2.push_back(6);

     vector<int> v3;
     v3.push_back(7);
     v3.push_back(8);
     v3.push_back(9);*/

//2 d vectors
/*
vector<vector<int>> v(3,vector<int>(4,2)); //2d vector will store 3 vectors and each 1 d vector is of 4 size and each element is 2
 //printing vector
 for (int i = 0; i <v.size(); i++)
 {
    for (int j = 0; j <v[0].size(); j++)
    {
       cout<<v[i][j];
    }
    cout<<endl;
    
 }
  
*/



/*
vector<vector<int>> pasacal(int n){
   vector<vector<int>> v;
   for (int i =1; i <=n; i++)
{
   vector<int>a(i);
   v.push_back(a);   //5 alag vector push ho jayenge alag size ke 

}
//generate
for (int i = 0; i <n; i++)
{
   for (int j = 0; j <=i; j++){
       if (j==0|| j==i)
       {
          v[i][j]=1;

       }
       else{
         v[i][j]=v[i-1][j]+v[i-1][j-1];
       }
       
   }

}
return v;
}


int main(){
int n;
cout<<"enter number of rows";
cin>>n;

vector<vector<int>> v=pasacal(n);

//printing vector;
for (int i = 0; i <n; i++)
{
   for (int j = 0; j <=i; j++){
      cout<<v[i][j]<<" ";

       
   }
   cout<<endl;
   

}
}*/



// find a element in 2d vector efficiently;
#include<iostream>
using namespace std;
int main(){
   vector<vector<int>> v;
   int ;
}