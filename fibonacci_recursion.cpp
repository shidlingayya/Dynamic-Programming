#include <iostream>
#include <vector>

int factorial(int number)
{
	int* num = new int[number];
	num[0] = 1;
	for (auto i = 1; i <= number; i++)
	{
		num[i] = i * num[i - 1];
	}
	int result  = num[number];
	delete[] num;
	return result;
}

int main() 
{
	std::cout << "factorial of 4 " << factorial(4) << std::endl;
	return 0;
}
