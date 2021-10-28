#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
	double x, *r;
	int order, i, j;
	double factorial(int n);

	//Set x = 1 to estimate e
	x = 1.0;
	
	//Question asks for 15th order
	order = 15;

	r = (double *) malloc((order+1) * sizeof(double));
	
	printf("1/10! = %.20lf\n",1.0/ factorial(10));

	for(i=0; i<=order; i++){
		r[i] = pow(x, i)/factorial(i);
	}

	for(j=0; j<=order; j++){
		printf("r[%d] = %.20lf\n",j,r[j]);
	}
}


double factorial(int n){
	int j;
	double fact=1.0;
	if(n==0){
		return 1.0;
	}
	else{
		for(j=1; j<=n; j++){
			fact = fact*j;		
		}
		return fact;	
	}
}
