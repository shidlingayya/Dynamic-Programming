#include <iostream>
void printFibonacci(int n) 
{
    static int n1 = 0, n2 = 1, n3;
    if (n > 0) {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        std::cout << n3 << " ";
        printFibonacci(n - 1);
    }
}

int main() 
{
    printFibonacci(9);
	return 0;
}
