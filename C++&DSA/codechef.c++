#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
//	while(t>0){
	    int n,k,x;
	    cin>>n;
	    int sum=0;
	   int pre[n];
	    pre[0]=1;
	    int j=2;
	   for(int i=1;i<n;i++){
	      pre[i]=pre[i-1]+j;
	      j++;
	   }
	   
	      for(int i=0;i<n;i++){
	      cout<<pre[i];
	   }
	   
//	    t--;
//	}

}