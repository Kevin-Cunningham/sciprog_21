#include <stdio.h>

int main(void){
	int n=5, p=3, q=4, i, j;
	double A[n][p], B[p][q], C[n][q];
	
	for(i=0; i<n; i++){
		for(j=0; j<p; j++){
			C[i][j]=0.0;
			printf("%d, %d, %lf\n",i,j,C[i][j]);
		}
	}
}
