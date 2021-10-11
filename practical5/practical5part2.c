#include <stdio.h>
#include <math.h>
int main(void){
	double artanhl(double x, double delta);
	double x;
	double delta;
	printf("Enter the value x, and required tolerance.\n");
	scanf("%lf %lf", &x, &delta);
	printf("arctanh is %lf \n", artanhl(x,delta));
}
double artanhl(double x, double delta){
	int n = 0;
	double sum=0.0;
	/*First term in the series is x*/
	double term = x;
	
	while(term>delta){
		sum += term;
		n+=1;
		term = (pow(x,((float) (2*n + 1))))/((float) (2*n+1));
	}
	return sum;
}
