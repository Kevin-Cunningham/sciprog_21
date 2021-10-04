#include <stdio.h>
#include <math.h>

/*deg to rad converts degrees to radians*/
/*trap using the trapezoidal rule to integrate from 0 degrees to 60 degrees in N columns*/
/*results holdsthe results of tan(x) as x varies from 0 deg to 60 deg  in steps of 5 deg*/
double degtorad(double x);
double trap(int numPoints);
double results[13], pi = M_PI;


int main(void)	{
	int i;
	for(i=0; i<13; i++){
		/*assign each entry of results*/
		results[i] = tan( degtorad(  ((double) 5.0)*i  ) );
		/*print each entry as it's added to be checked*/	
		printf("%lf \n",results[i]);
	}
	/*print the result of trapezoidal integration*/
	printf("The result of integration is %lf \n",trap((int) 12));
}

double degtorad(double x){
	return x*pi/180;
}

double trap(int numPoints){
	/*area will be the final result*/
	/*sum will be the height of each point being included*/
	/*stepsize is the distance between points*/
	double area=0, sum=0, stepsize = (60.0 - 0.0)/numPoints;
	
	/*initialise sum with the endpoints as in practical 3*/
	sum = tan( degtorad((double) 0) ) + tan( degtorad ((double) 60) );
	
	/*update sum to include intermediate points */
	int j;
	for(j=1; j<numPoints; j++){
		sum +=((int) 2)*tan(degtorad( j*stepsize ));
	}	
	/*multiply sum by width for final result*/
	/*note stepsize must be changed from degs to rads*/
	area = ((double) .5)*degtorad( stepsize )*sum;
	return area;
}

