#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(){

	FILE *f;
	int size, i;
	char delim[] = "%d ";
	char shape[100];
	

	f = fopen("matrix1.txt","r");

	if (f==NULL){
	printf("!! Can't open file!!\n");
	exit(1);
	}	

	fscanf(f, "%d", &size);
	printf("The matrix is of size %d", size);
	
	for (i = 0; i< size*size; i++){
		shape = strcpy(shape,delim);
	}
	printf("%s",shape);

}
