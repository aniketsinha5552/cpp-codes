#include <bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int res=0;
		int sum=0;
		for(int i=0;i<n;i++){
		   for(int j=i+1;i<n;j++){
			  for(int k=j+1;i<n;k++){
	                  sum=arr[i]+arr[j]+arr[k];
					  if(sum%10==3) {
					  	res=1;
					  }	
		        }
		      }   
		}
		if(res==1) cout<<"YES";
		else cout<<"NO";
		
	}
}