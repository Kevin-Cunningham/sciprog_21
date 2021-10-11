#include <stdio.h>
#include <math.h>

int main(void){

	double artanhl(double x, double delta);
	double artanh2(double x);
	double MacLaurin[181], LogApprox[181];
	double delta;
	int i, j;

	printf("Enter the required tolerance.\n");
	scanf("%lf", &delta);

	
	for (j=0; j<=180; j++){
		MacLaurin[j]=artanhl( ((double) .01)*j - ((double) .9)  , delta );
		LogApprox[j]=artanh2( ((double) .01)*j - ((double) .9) );
		printf("n=%d, x=%lf, MacLaurin=%lf, Log approximation=%lf\n", j, ((double) .01)*j-((double) .9), MacLaurin[j], LogApprox[j]);
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
