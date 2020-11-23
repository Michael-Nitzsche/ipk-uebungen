#include <iostream>

void collatz(long number)
{
	while( (number != 1)  and (number != 0) and (number != -1) and (number != -5) and (number != -17))
	{
		if((number % 2) == 0)
		{
			number = (number / 2);
			std::cout << number << std::endl;
		}
		else if((number % 2) != 0)
		{
			number = (number * 3 + 1);
			std::cout << number << std::endl;
		}
		
	}
}
//ab hier raff ichs net
int main()
{
	long number;
	std::cout << "Gib eine Zahl ein!" << std::endl;
	std::cin >> number;
	collatz(number);
	
}
