#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main(){
	int *allocatearray(int n);
	void fillwithones(int *p, int n);
	int i, j,*r;

	r = allocatearray(5);
		
	fillwithones(r,5);

	for (j=0;j<5;j++){
		printf("r[%d] = %d\n",j, r[j]);
	}

}

int *allocatearray(int n){
	int *alloc;
	alloc = (int *) malloc(n*sizeof(int));
	return alloc;
}

void fillwithones(int *p, int n){
	int i;
	for(i=0; i<n; i++){
		p[i]=1;
	}
}
