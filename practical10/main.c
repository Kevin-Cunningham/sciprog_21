#include <stdio.h>

void sort(int n, int start, int inter, int end);

void main(){
	int k;
	printf("What is the size of the stack?\n");
	scanf("%d", &k);
	sort(k,1,2,3);

	printf("\n");
}

void sort(int n, int start, int inter, int end){
	
	if(n==1){
		printf("%d -> %d\n", start, end);
	}
	else{
		sort(n-1,start, end, inter);
		printf("%d -> %d\n",start, end);
		sort(n-1,inter, start, end);
	}
}

