#include <iostream>

using namespace std;

class Temperature
{
	int celsius;
	public:
		Temperature()
		{
			celsius = 0;
		}
		friend int temp( Temperature );   // declaring friend function
};

int temp( Temperature t )     // friend function definition
{
	t.celsius = 40;
	return t.celsius;
}

int main()
{
	Temperature tm;
	cout << "Temperature in celsius : " << temp( tm ) << endl;
	return 0;
}