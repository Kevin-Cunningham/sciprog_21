#include <stdio.h>
#include <string.h>

void main(){
 	FILE *f;
	//n is the size of the square matrix, i,j are indexing variables, temp is a temporary variable 
	int n,i,j,temp;
	char filename[20];
	printf("What should this matrix be saved as?\n");
	scanf("%s",filename);
	strcat(filename,".txt");	
	//Get the size of the square matrix
	printf("Size (n) of square matrix:\n");
	scanf("%d",&n);
	
	//intialise square matrix of size n
	int Mat[n][n];
	
	//Take in values of square matrix
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			printf("Enter the integer value for row %d, column %d \n", i+1, j+1);
			scanf("%d", &temp);
			Mat[i][j]=temp;
		}

	}
	//Prints out square matrix to be checked
	for(i=0; i<n; i++){
		for(j=0;j<n;j++){
			printf("%d  ",Mat[i][j]);
		}
		printf("\n");
	}	
	
	//open file
 	f = fopen(filename,"w");
       	
	//print matrix size to file
	fprintf(f, "%d ", n);
	
	//Add matrix to file as a sequence of numbers separated by 
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			fprintf(f,"%d ",Mat[i][j]);
		}
	}

	fclose(f);	

}

