#include <stdio.h>
#include <math.h>

int main(void){

	double artanhl(double x, double delta);
	double artanh2(double x);
	double MacLaurin[181], MacLaurin10[181], LogApprox[181];
	double delta, accuracy=pow(10,-10);
	int i, j;

	printf("Enter the required tolerance.\n");
	scanf("%lf", &delta);

	
	for (j=0; j<=180; j++){
		MacLaurin[j]=artanhl( ((double) .01)*j - ((double) .9)  , delta );
		MacLaurin10[j] = artanhl( ((double) .01)*j - ((double) .9) ,accuracy );
		LogApprox[j]=artanh2( ((double) .01)*j - ((double) .9) );
	}

	printf("The difference between the two methods is:\n");

	for (i=0; i<=180; i++){
		printf("x = %lf, MacLaurin - (Log Approximaiton)=%0.10lf \n",((double) .01)*i-((double) .9),MacLaurin10[i]-LogApprox[i] );

	}
	
	
}

double myAbs(double y){
	if(y>=0){
		return y;}
	else{
		return -y;}	
}


double artanhl(double x, double delta){
	double myAbs(double y);
	int n = 0;
	double sum=0.0;
	/*First term in the series is x*/
	double term = x;
	
	while(myAbs(term)>delta){
		sum += term;
		n+=1;
		term = (pow(x,((double) (2*n + 1))))/((double) (2*n+1));
	}
	return sum;
}


double artanh2(double x){
	return ((double) 0.5)*(log(1+x)-log(1-x));
}
