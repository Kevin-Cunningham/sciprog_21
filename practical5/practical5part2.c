#include <stdio.h>
#include <math.h>

int main(void){

	double artanhl(double x, double delta);
	double artanh2(double x);
	double x[181];
	double delta;
	int i, j;
	for (i=0; i<=180; i++){
		x[i] = ((double) .01)*i -((double) .9);
	}
	for (j=0; j<=180; j++){
	printf("n=%d, x=%lf\n",j,x[j]);

	}
	printf("Enter the required tolerance.\n");
	scanf("%lf", &delta);
	
}


double artanhl(double x, double delta){
	int n = 0;
	double sum=0.0;
	/*First term in the series is x*/
	double term = x;
	
	while(term>delta){
		sum += term;
		n+=1;
		term = (pow(x,((double) (2*n + 1))))/((double) (2*n+1));
	}
	return sum;
}


double artanh2(double x){
	return ((double) 0.5)*(log(1+x)-log(1-x));
}
