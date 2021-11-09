#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "magic_square.h"

void main(){

	FILE *f;
	int size, i,j;
	char delim[] = "%d ", filename[20];
	printf("What file contains the matrix you want to check?\n");
	scanf("%s",filename);
	strcat(filename,".txt");
	f = fopen(filename,"r");

	if (f==NULL){
	printf("!! Can't open file!!\n");
	exit(1);
	}	

	fscanf(f, "%d ", &size);
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
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}

	int* rowpoint[size]; 
	for(i=0;i<size;i++){
		rowpoint[i] = &matrix[i][0];
	}
  	int **matpoint;
	matpoint = &rowpoint[0];
	printf("\nCheck that pointer to matrix works\n");
	for(i=0;i<size;i++){
		for (j=0;j<size;j++){
			printf("%d ",matpoint[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	int Bool;
        Bool = isMagicSquare(matpoint, size);
	if (Bool == 1){
		printf("The matrix IS magic!\n");
	}
	else{
		printf("The matrix is NOT magic!\n");
	}

}
