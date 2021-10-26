// Define C as A times B
void matmult(int n, int p, int q, double A[n][p], double B[p][q], double C[n][q]){
	int i,j,k;
	double temp;
	for(i=0; i<n; i++){
		for(j=0; j<q; j++){
			temp=0.0;
			for(k=0; k<p; k++){
				temp += A[i][k]*B[k][j];
			}
			C[i][j]= temp;
		}
	} 
}
