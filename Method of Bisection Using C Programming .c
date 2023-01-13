// C++ program for implementation of Bisection Method for
// solving equations
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define EPSILON 0.000001

// An example function whose solution is determined using
// Bisection Method. The function is x^3 - x^2 + 2
double func(double x)
{
	return (x*log(x))-1.2;
}

// Prints root of func(x) with error of EPSILON
void bisection(double a, double b)
{
	if (func(a) * func(b) >= 0)
	{
		printf("You have not assumed right a and b\n");
		return;
	}
 
	double c = a;
	while ((b-a) >= EPSILON)
	{
		// Find middle point
		c = (a+b)/2;

		// Check if middle point is root
		if (func(c) == 0.0)
			break;

		// Decide the side to repeat the steps
		else if (func(c)*func(a) < 0)
			b = c;
		else
			a = c;
	}
	printf("The value of root is : %f",c);
}

// Driver program to test above function
int main()
{
	// Initial values assumed
	double a =1, b = 300;
	bisection(a, b);
	return 0;
}

