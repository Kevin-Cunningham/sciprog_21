#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main(){
	int *allocatearray(int n);
	void fillwithones(int *p, int n);
	void printarray(int *p, int n);
	int i, j,*r;

	r = allocatearray(5);
		
	fillwithones(r,5);

	printarray(r,5);

}

int *allocatearray(int n){
	int *alloc;
	alloc = (int *) malloc(n*sizeof(int));
	return alloc;
}

//Fill with ones needs the length of the array, as sizeof won't work on a dynamically allocated array
void fillwithones(int *p, int n){
	int i;
	for(i=0; i<n; i++){
		p[i]=1;
	}
}

void printarray(int *p, int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d\n", p[i]);
	}
}
