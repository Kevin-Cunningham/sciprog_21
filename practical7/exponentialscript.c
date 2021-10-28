//Compile using
// gcc -o exp exponentialscript.c -lm

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
	double x, *r;
	int order, i, j, k;
	double factorial(int n);

	//Set x = 1 to estimate e
	x = 1.0;
	
	//Question asks for 15th order
	order = 15;

	//Dynamically allocate memory for an array
	r = (double *) malloc((order+1) * sizeof(double));
	
	//Assign a term in the sum to each cell in the array
	for(i=0; i<=order; i++){
		r[i] = pow(x, i)/factorial(i);
	}
	
	//printing all the terms in the sum
	for(j=0; j<=order; j++){
		printf("r[%d] = %.20lf\n",j,r[j]);
	}
	
	printf("\n\n\n");
	
	double sum=0.0;
	//Evaluating at each order up to 15 (as set out in the question)
	for(k=0; k<=order; k++){
		sum += r[k];
		printf("The first %d terms sum to %.20lf \n",k,sum);
	}
	//The approximaion gets worse if we go to too high of an order, as numerical error accumulates

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
