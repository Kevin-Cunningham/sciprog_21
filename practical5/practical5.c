#include <stdio.h>
int main(void){
	/*n to be scanned in, i is an index for the later loop*/
	int n, i, j;
	printf("Enter an integer n, and I will calculate the n-th value of the Fibonacci series.\n");
	scanf("%d",&n);
	printf("You entered %d.\n", n);

	int FibSeries[n+1];
	FibSeries[0]=0;
	FibSeries[1]=1;
	for (i=2; i<=n; i++){

		FibSeries[i]= i;
	}
	for (j=0; j<=n; j++){
		printf("%d \n",FibSeries[j]);
	}
}
