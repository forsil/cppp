#include <iostream>
int main()
{
	int i, sum=0;
	while(std::cin >> i)
	{
			sum+= i;
	}
	std::cout << "The sum of integers inupt is " << sum << std::endl;
	return 0;
}
