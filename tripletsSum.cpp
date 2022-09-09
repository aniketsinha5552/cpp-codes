#include <bits/stdc++.h>
using namespace std;

int triplet(int arr[],int n,int x){
	unordered_set <int> s;
	int sum=0;
	int count=0;
	for(int i=0;i<n-2;i++){
		for(int j=i+1;j<n-1;j++){
			for(int k=j+1+1;k<n;k++){
				
					sum=arr[i]+arr[j]+arr[k];
					if(sum==x) count++;
				}
			}
		}
		return count;
	}



int main(){
	int n,x;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>x;
	cout<<triplet(arr,n,x);
}
