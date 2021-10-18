#include <stdio.h>

int main(void){
	int n=5, p=3, q=4, i, j, k;
	double A[n][p], B[p][q], C[n][q],temp=0.0;

	// Initialise C as a matrix of zeroes	
	for(i=0; i<n; i++){
		for(j=0; j<q; j++){
			C[i][j]=0.0;
		}
	}
	
	// Initialise A as defined in the instructions
	for(i=0; i<n; i++){
		for(j=0; j<p; j++){
			A[i][j]=i+j;
		}
	}
	
	// Initialise B as defined int he instructions
	for(i=0; i<p; i++){
		for(j=0; j<q; j++){
			B[i][j]=i-j;
		}
	}
	
	// Define C as A times B
	for(i=0; i<n; i++){
		for(j=0; j<q; j++){
			temp=0.0;
			for(k=0; k<p; k++){
				temp += A[i][k]*B[k][j];
			}
			C[i][j]= temp;
		}
	} 
	
	// Print out A
	printf("Print out of A:\n");
	for(i=0; i<n; i++){
		for(j=0; j<p; j++){
			printf("%lf ", A[i][j]);
		}
		printf("\n");
	}

	// Print out B
	printf("Print out of B: \n");
	for(i=0; i<p; i++){
		for(j=0; j<q; j++){
			printf("%lf ", B[i][j]);
		}
		printf("\n");
	}
	
	// Print out C
	printf("Print out of C: \n");
	for(i=0; i<n; i++){
		for(j=0; j<q; j++){
			printf("%lf ", C[i][j]);
		}
		printf("\n");
	}
	
}
