#include <stdio.h>

int main(void){
	int n=5, p=3, q=4, i, j, k;
	double A[n][p], B[p][q], C[n][q],temp=0.0;
	
	for(i=0; i<n; i++){
		for(j=0; j<q; j++){
			C[i][j]=0.0;
		}
	}

	for(i=0; i<n; i++){
		for(j=0; j<p; j++){
			A[i][j]=i+j;
		}
	}

	for(i=0; i<p; i++){
		for(j=0; j<q; j++){
			B[i][j]=i-j;
		}
	}

	for(i=0; i<n; i++){
		for(j=0; j<q; j++){
			temp=0.0;
			for(k=0; k<p; k++){
				temp += A[i][k]*B[k][j];
			}
			C[i][j]= temp;
		}
	} 

	printf("Print out of A:\n");
	for(i=0; i<n; i++){
		for(j=0; j<p; j++){
			printf("%lf ", A[i][j]);
		}
		printf("\n");
	}

	printf("Print out of B: \n");
	for(i=0; i<p; i++){
		for(j=0; j<q; j++){
			printf("%lf ", B[i][j]);
		}
		printf("\n");
	}

	printf("Print out of C: \n");
	for(i=0; i<n; i++){
		for(j=0; j<q; j++){
			printf("%lf ", C[i][j]);
		}
		printf("\n");
	}
	
}
