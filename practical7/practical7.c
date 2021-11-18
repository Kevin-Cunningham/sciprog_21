#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main(){
	int *allocatearray(int n);
	void fillwithones(int *p, int n);
	void printarray(int *p, int n);
	void freealloctint *p);
	int i, j,*r,*q;

	r = allocatearray(5);
	fillwithones(r,5);
	printarray(r,5);
	freealloc(r);

	q = allocatearray(3);
	fillwithones(q,3);
	printarray(q,3);
	freealloc(q);
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

//Function to free allocated memory, Not sure why this is a quation, as this function already exists
void freealloc(int *p){
	free(p);
}
