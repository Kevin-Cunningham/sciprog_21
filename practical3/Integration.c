#include <stdio.h>
#include <math.h>

int main(void) {

	/*Initialise variables*/
	int i=0, N=12;
	double a=0, b=M_PI/3.0;
	
	/*Define width of trapezoids*/
	double update = (b-a)/N;	
	
	/*Initialise sum*/
	double sum = tan(a)+tan(b);
	
	/*Sum from x_1 to x_11*/
	for(i=1; i<N; i++){
	   sum += 2*tan(i*update);	
	}

	/*Multiply sum by (1/2)update */
	double answer = ((double) 0.5)*update*sum;

	printf("The integration yields %4lf", answer);
}
