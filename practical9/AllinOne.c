#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "magic_square.h"

void main(){
	
	
	int** matpoint;
	int size, i,j, Bool, temp;
	
    printf("What size of matrix do you want to check?\n");
    scanf("%d", &size);
	//intialise square matrix of size n
	int matrix[size][size];
	
	//Take in values of square matrix
	for (i=0; i<size; i++){
		for (j=0; j<size; j++){
			printf("Enter the integer value for row %d, column %d \n", i+1, j+1);
			scanf("%d", &temp);
			matrix[i][j]=temp;
		}

	}
	printf("\n");
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
 
	matpoint = &rowpoint[0];
	//printf("\nCheck that pointer to matrix works\n");
	//for(i=0;i<size;i++){
	//	for (j=0;j<size;j++){
	//		printf("%d ",matpoint[i][j]);
	//	}
	//	printf("\n");
	//}
	printf("\n");
        //Call the isMagicSquare function on our matrix
	Bool = isMagicSquare(matpoint, size);
	//If the function returns True (1), then the code prints that the matrix is magic, otherwise it prints that it is not magic
	if (Bool == 1){
		printf("The matrix IS magic!\n");
	}
	else{
		printf("The matrix is NOT magic!\n");
	}

}