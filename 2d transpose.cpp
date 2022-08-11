#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int array[n][n];
	// array input
	for (int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>array[i][j];
		}
	}
	// array print
	cout<<"The matrix entered is"<<endl;
	for (int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<array[i][j]<<" ";
		}
		cout<<endl;
	}
	// transpose array print
	cout<<"The transpose of the matrix is"<<endl;
	for (int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<array[j][i]<<" ";
		}
		cout<<endl;
	}
}