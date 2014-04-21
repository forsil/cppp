#include <iostream>

using namespace std;
int fact(int n)
{
	if(n == 1)
	{
	return 1;
	}
	else 
	{
	return n * fact(n - 1);
	}
}

int main()
{
cout << "Please input integer n: " << endl;
int n;
cin >> n;
cout << "The fact is " << fact(n) << endl;
}
