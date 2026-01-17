#include <iostream>
using namespace std;

float sumFunc(float , float);
float power(float);
float multiply(float, float);

int main()
{
	cout << sumFunc(0.1, 0.2) << endl;
	cout << power( power(2) ) << endl;
	cout << multiply(3, 9.7) << endl;

	if(std::pow(9, -2) > 0)
	{
		cout << "Hello world" << endl;
	}
}

float sumFunc(float x, float y)
{
	return x + y;
}

float power(float x)
{
	return x * x;
}

float multiply(float x, float y)
{
	return x * y;
}



