#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(){

	FILE *f;
	int size, i,j;
	char delim[] = "%d ";
	
	f = fopen("matrix1.txt","r");

	if (f==NULL){
	printf("!! Can't open file!!\n");
	exit(1);
	}	

	fscanf(f, "%d", &size);
	printf("The matrix is %d x %d\n", size, size);
	
	int matrix[size][size]; 
	
	for(i=0;i<size;i++){
		for(j=0; j<size;j++){
		fscanf(f,delim,&matrix[i][j]);
		}
	}

	fclose(f);
	
	printf("The matrix looks like:\n");
	for (i=0; i<size; i++){
		for (j=0;j<size;j++){
		printf("%d  ",matrix[i][j]);
		}
		printf("\n");
	}
	
}
