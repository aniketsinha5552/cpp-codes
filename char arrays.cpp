#include <iostream>
using namespace std;
int main(){
	char c[1000];
	c[0]=1;
	c[1]=2;
	int l= sizeof(c);
	cout<<l;
}