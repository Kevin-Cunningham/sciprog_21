#include <stdio.h>
#include <math.h>
int main(void){
	double artanhl(double x, double delta);
	double artanh2(double x);
	double x;
	double delta;
	printf("Enter the value x, and required tolerance.\n");
	scanf("%lf %lf", &x, &delta);
	printf("The approximation to arctanh is %lf, while the log approximation is %lf \n", artanhl(x,delta), artanh2(x));
}
double artanhl(double x, double delta){
	int n = 0;
	double sum=0.0;
	/*First term in the series is x*/
	double term = x;
	
	while(term>delta){
		sum += term;
		n+=1;
		term = (pow(x,((double) (2*n + 1))))/((double) (2*n+1));
	}
	return sum;
}
double artanh2(double x){
	return ((double) 0.5)*(log(1+x)-log(1-x));
}
