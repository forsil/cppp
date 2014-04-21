#include <iostream>
int main()
{
		int i,sum=0;
		i=50;
		while( i<= 100)
		{
				sum+= i++;
		}
		std::cout << "The sum of numbers from 50 to 1oo is :" << sum << std::endl;
}

