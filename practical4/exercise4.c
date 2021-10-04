#include <stdio.h>
#include <math.h>

double degtorad(double x);
double trap(int numPoints);
double results[13], pi = M_PI;


int main(void)	{
	int i;
	for(i=0; i<13; i++){
		results[i] = tan( degtorad(  ((double) 5.0)*i  ) );
		printf("%lf \n",results[i]);
	}

	printf("The result of integration is %lf \n",trap((int) 12));
}

double degtorad(double x){
	return x*pi/180;
}

double trap(int numPoints){
	double area=0, sum=0, stepsize = (60.0 - 0.0)/numPoints;
	
	sum = tan( degtorad((double) 0) ) + tan( degtorad ((double) 60) );
	
	int j;
	for(j=1; j<numPoints; j++){
		sum += tan(degtorad( j*stepsize ));
	}	
	area = ((double) .5)*stepsize*sum;
	return area;
}

