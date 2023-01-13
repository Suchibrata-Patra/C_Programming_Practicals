#include <stdio.h>
#include <math.h>

float function(float);
float derivative(float);

int main() {
	float x; // x: approximation
	unsigned short i = 1, n; // n: number of iterations

	printf("FIRST APPROXIMATION: ");
	scanf("%f", &x);

	printf("ITERATIONS: ");
	scanf("%hu", &n);

	while(i <= n) {
		x = x - function(x)/derivative(x);
		i++;
	}
    
	printf("APPROXIMATE ROOT: %f \n", x);
	return 0;
}

float function(float x) { // f(x)
	return pow(x,3) - 3*x*x -3*x -4;
}

float derivative(float x) { // f'(x)
	return 3*x*x - 6*x -3 ;
}
