#include <stdio.h>
#include <math.h>

//Constants
#define u0 4*M_PI*1e-7
#define f 1.0
#define h0 1.0
#define Hc 20.0

//Function prototypes
double brandt_eq1 (double J, double B, double T);
double brandt_eq2 (double J0, double U0, double T, double B, double n);

int main () {
	//Variables
	double J, B, T;
	double J0, U0, n;
	
	//Read in variables
	printf("Enter current density (J): \n");
	scanf("%lf", &J);
	printf("Enter magnetic field (B): \n");
	scanf("%lf", &B);
	printf("Enter temperature (T): \n");
	scanf("%lf", &T);
	printf("Enter prefactor (J0): \n");
	scanf("%lf", &J0);
	printf("Enter pinning energy (U0): \n");
	scanf("%lf", &U0);
	printf("Enter flux creep exponent (n): \n");
	scanf("%lf", &n);
	
	//Calculate equations
	double res1 = brandt_eq1 (J, B, T);
	double res2 = brandt_eq2 (J0, U0, T, B, n);
	
	//Output results
	printf("Result 1: %lf\n", res1);
	printf("Result 2: %lf\n", res2);
	
	return 0;
}

//Function definitions
double brandt_eq1 (double J, double B, double T) {
	double result;
	result = (4 * M_PI * u0 * pow(f, 2) * h0 * Hc * (2 * Hc / H0 * log(cosh(h0 / Hc)) - tanh(h0 / Hc)));
	return result;
}

double brandt_eq2 (double J0, double U0, double T, double B, double n) {
	double result;
	result = J0 * exp(-(U0 / (M_PI * k_B * T) * (1 - (B / B_c2)^n)));
	return result;
}
