#include <stdio.h>

//The sort function takes the size of the stack, n, and needs to know the starting rod, ending rod and intermediary rod
//It needs the start, intermediary and end to be useful for recursion.
void sort(int n, int start, int inter, int end);

void main(){
	//k will be the size of the stack
	int k;
	printf("What is the size of the stack?\n");
	scanf("%d", &k);
	sort(k,1,2,3);

	printf("\n");
}

void sort(int n, int start, int inter, int end){
	//if n=1, just put the one disk on the target rod
	if(n==1){
		printf("%d -> %d\n", start, end);
	}
	//If n>1, move the n-1 disks above it from the start to the intermediary (using the other available rod)
	//The move the largest disk to the final rod
	//Then move the stack left on the intermediary to the final rod
	else{
		sort(n-1,start, end, inter);
		printf("%d -> %d\n",start, end);
		sort(n-1,inter, start, end);
	}
}

