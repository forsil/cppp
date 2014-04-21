#include <iostream>
#include "Sales_item.h"

int main()
{
		Sales_item item, t;
		int num;
		std::cin >> t;
		num = 1;
		while(std::cin >> item)
		{
				if(item.isbn() == t.isbn())
						num++;
				else{
						std::cout << t.isbn() << " " << num << std::endl;
						t = item;
						num = 1;
				}
		}
		std::cout << t.isbn() << " " << num << std::endl;
}
