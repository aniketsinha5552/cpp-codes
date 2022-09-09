#include <iostream>
using namespace std;

int main() {
	int num,originalNum,n=0;
	cin>> num;
	originalNum= num;
	while(originalNum>=1000)
	{
		int r1= originalNum/1000;
		cout<< r1 <<" x "<<1000<<"\n";
		originalNum=originalNum%1000;
		break;
	}
	while(originalNum>=500)
	{
	    int r2= originalNum/500;
		cout<< r2 <<" x "<<500<<"\n";
		originalNum=originalNum%500;
		break;
	}
	while(originalNum>=100)
	{
		int r3= originalNum/100;
		cout<< r3 <<" x "<<100<<"\n";
		originalNum=originalNum%100;
		break;
	}
	while(originalNum>=50)
	{
		int r4= originalNum/50;
		cout<< r4 <<" x "<<50<<"\n";
		originalNum=originalNum%50;
		break;
	}
	while(originalNum>=20)
	{
		int r5= originalNum/20;
		cout<< r5 <<" x "<<20<<"\n";
		originalNum=originalNum%20;
		break;
	}
	while(originalNum>=10)
	{
		int r6= originalNum/10;
		cout<< r6 <<" x "<<10<<"\n";
		originalNum=originalNum%10;
		break;
	}
	while(originalNum>=5)
	{
		int r7= originalNum/5;
		cout<< r7 <<" x "<<5<<"\n";
		originalNum=originalNum%5;
		break;
	}
	while(originalNum>=2)
	{
		int r8= originalNum/2;
		cout<< r8 <<" x "<<2<<"\n";
		originalNum=originalNum%2;
		break;
	}
	while(originalNum>=1)
	{
		int r9= originalNum/1;
		cout<< r9 <<" x "<<1<<"\n";
		originalNum=originalNum%1;
		break;
	}
	return 0;
}