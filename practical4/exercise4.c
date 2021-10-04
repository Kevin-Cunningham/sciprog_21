#include <stdio.h>
#include <math.h>

float degtorad(float x);
float results[13], pi = M_PI;


int main(void)	{
	int i;
	for(i=0; i<13; i++){
		results[i] = tan( degtorad(  ((float) 5.0)*i  ) );
		printf("%f \n",results[i]);
	}
	
}

float degtorad(float x){
	return x*pi/180;
}
