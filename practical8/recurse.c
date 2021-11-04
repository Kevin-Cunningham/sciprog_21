//compile as
//gcc -o recu recurse.c
#include <stdio.h>
//intialise function
int GCD(int a, int b);

void main(){
	//Print out a few examples
	printf("The GCD of 8 and 12 is %d\n",  GCD(8,12));
	printf("The GCD of 18 and 27 is %d\n", GCD(18,27));
	printf("The GCD of 52 and 91 is %d\n", GCD(52,91));
}

int GCD(int a, int b){
	//Recursive function code as layed out on practical sheet
	if(b!=0){
		return GCD(b, a%b);
	}
	else if (b=0){
		return a;
	}	
}
