#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "magic_square.h"
#include <time.h>
void main(){
	//f will hold the file that the matrix is stored in
	FILE *f;
	//Size is the size of the square matrix, e.g. size=3 => 3x3 matrix
	//i,j are inidces
	int size, i,j;
	char delim[] = "%d ", filename[20];
	
	//Ask the User what file they want to check
	printf("What file contains the matrix you want to check?\n");
	scanf("%s",filename);
	strcat(filename,".txt");
	f = fopen(filename,"r");
	
	//Error statement in case the file cant be opened
	if (f==NULL){
	printf("!! Can't open file!!\n");
	exit(1);
	}	
	
	//Read in the size of the matrix
	fscanf(f, "%d ", &size);
	printf("\nThe matrix is %d x %d\n", size, size);
		
	int matrix[size][size]; 
	
	//Create the matrix in an array
	for(i=0;i<size;i++){
		for(j=0; j<size;j++){
			fscanf(f,delim,&matrix[i][j]);
		}
	}

	fclose(f);
	
	
	//Print the matrix so the user can check that it is the correct one
	printf("The matrix looks like:\n\n");
	for (i=0; i<size; i++){
		for (j=0;j<size;j++){
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	
	//Create an array of pointers which each point to a row in the matrix
	int* rowpoint[size]; 
	for(i=0;i<size;i++){
		rowpoint[i] = &matrix[i][0];
	}
	//Create a pointer to pointers in the previous array
  	int **matpoint;
	matpoint = &rowpoint[0];
	//printf("\nCheck that pointer to matrix works\n");
	//for(i=0;i<size;i++){
	//	for (j=0;j<size;j++){
	//		printf("%d ",matpoint[i][j]);
	//	}
	//	printf("\n");
	//}
	printf("\n");
	
	time_t tstart, tend;
	tstart=time(0);

	for (i=0;i<1000000000;i++){
		isMagicSquare(matpoint,size);
	}	
	tend = time(0);
	printf("Time taken = %lf\n",difftime(tend,tstart));
	//timing isMagicSquare acting on nxn sqaure matrices full of ones I found that
	//n=2 takes 9s
	//n=3 takes 11s
	//n=4 takes 13s
	//n=5 takes 15s
	//n=6 takes 18s
	//
	//The timing is roughly of order Theta(n)
}
