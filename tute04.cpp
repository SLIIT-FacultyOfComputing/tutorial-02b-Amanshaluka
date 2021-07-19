/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}
long Factorial(int no)
{
	int fac = 1;
	
	for (int n = no; n >= 1; n--) 
	{
		fac = fac * n;
	}

  	return fac;
}

long nCr(int n, int r)
{
	int result = 0;
	
	result = Factorial(n) / (Factorial(r) * Factorial(n-r));
	
	return result;
}