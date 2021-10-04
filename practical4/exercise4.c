#include <stdio.h>
#include <math.h>

float degtorad(float x);
float xdeg[13], xrad[13], pi = M_PI;


int main(void)	{
	printf("180 degrees is %f radians \n",degtorad(180));

}

float degtorad(float x){
	return x*pi/180;
}
