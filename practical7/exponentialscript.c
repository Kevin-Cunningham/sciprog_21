#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
	double x, *r;
	int order, i;
	int factorial(int n);

	//Set x = 1 to estimate e
	x = 1.0;
	
	//Question asks for 15th order
	order = 15;

	r = (double *) malloc((order+1) * sizeof(int));
	
	for(i=1; i<order; i++){
	//	r[i] = pow(x,i)/factorial(i);
		printf("factorial(%d) = %d\n",i,factorial(i));
	}
}


int factorial(int n){
	int j, prod=1;
	if(n==0){
		return 1;
	}
	else{
		for(j=1; j<=n; j++){
			prod = prod*j;
		}
	}
	return prod;
}
