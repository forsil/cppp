#include <iostream>
int main()
{
	int i,sum=0;
	i=10;
	while( i>= 0)
	{
			sum+= i--;
	}	
	std::cout << "The sum of numbers from 10 to 0 is :" << sum << std::endl;
}
