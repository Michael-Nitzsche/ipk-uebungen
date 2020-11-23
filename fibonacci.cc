#include <iostream>

int fibonacci (long number)
{
	long f1, f2, f3;
	f1 = 0;
	f2 = 1;
	f3 = 0;
	for(long i = 0; i <= number; i++)
	{
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
		std::cout << f3 << std::endl;
	}
return f3;
}
int main()
{
	long number;
	std::cout << "Wähle N!" << std::endl;
	std::cin >> number;
	std::cout << "Fibonacci bis N!" << std::endl;
	fibonacci(number);
}
	
