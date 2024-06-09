
/*Find a duplicate element in the given array of integers. There will be only a single duplicate element in the array.
Note: Do not use any inbuilt functions/libraries for your main logic.

#include<iostream>
#include<unordered_map>
#include<vector>


using namespace std;
int main(){
    int n;
    cin>>n;
 unordered_map<int,int> m1;
 vector<int>v(n);

 bool flag=false;
 int a;
    for (int i = 0; i <n; i++)
    {
        cin>>v[i];
    }

   for(int nums:v){
    if (m1.find(nums) !=m1.end()){
        cout<<nums<<endl;
        flag=true;
        break;
    }
    else{
        m1[nums]=1;
    }
   
   }
    
    if(!flag){
        cout<<"duplicate element not found"<<endl;

    }
}

*/

/*You are given an array of N elements. All elements of the array are in range 1 to N-2.
 All elements occur once except two numbers, which occur twice. Your task is to find the two repeating numbers.
#include<iostream>
#include<unordered_map>
#include<vector>

#include<algorithm>

using namespace std;
int main(){

    int t;
    cin>>t;

    while (t>0)
    {
        
    
    int n;
    cin>>n;


 unordered_map<int,int> m1;
 vector<int>v(n);
 vector<int>b;

 bool flag=false;
 int a=1;


    for (int i = 0; i <n; i++)
    {
        cin>>v[i];
    }



    for(int nums: v)
    {
        m1[nums]++;
    }
    for(const auto& nums: m1)
    {
        if(nums.second>=2){
            b.push_back(nums.first);
        }
         
         
  
    }
    sort(b.begin(),b.end());

    for(int nums:b){
        cout<<nums<<" ";
    }
  cout<<endl;

t--;
    }

}*/ 


#include<iostream>
#include<unordered_map>
#include<vector>

#include<algorithm>

using namespace std;
int main(){
 int n;
    cin>>n;


 unordered_map<int,int> m1;
 vector<int>v(n);
  vector<int>b;



    for (int i = 0; i <n; i++)
    {
        cin>>v[i];
    }
   

   for(auto nums:v){
    m1[nums]++;
   }

   for(int nums :v)
    {
        if(m1[nums]==1){
          cout<<nums<<" ";

          m1[nums]=-1;
        }
         
         
  
    }
    
  
     cout<<endl;
   
    }
   
    
  

