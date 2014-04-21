#include <iostream>
int main()
{
	int a, b, i;
	std::cout << "Please input two integers: a & b" << std::endl;
	std::cin >> a >> b;
	if( a > b)
	{
			i=b;
			b=a;
			a=i;
	}
	i= a;
	std::cout << "The number between " << a << " and " << b << " is: ";
	while( i<= b)
	{
			std::cout << i++ <<" ";
	}
	std::cout << std::endl;
}

