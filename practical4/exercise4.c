#include <stdio.h>
#include <math.h>

float degtorad(float x);
float xdeg[13], xrad[13], pi = M_PI;


int main(void)	{
	int i, j;
	for(i=0; i<13; i++){
		xdeg[i] = i*((float) 5);
		printf("%f \n",xdeg[i]);
	}
	for(j=0; j<13; j++){
		xrad[j] = degtorad( xdeg[j] );
		printf("%f \n", xrad[j]);
	}

}

float degtorad(float x){
	return x*pi/180;
}
