//compile as
//gcc -o iter iterate.c
#include <stdio.h>

void main(){
	//Initialise function in main block
	int GCD(int a, int b);
	
	//Print a few examples
	printf("The GCD of 8 and 12 is %d\n", GCD(8,12));
	printf("The GCD of 18 and 27 is %d\n", GCD(18,27));
	printf("The GCD of 52 and 91 is %d\n", GCD(52, 91));

}

int GCD(int a, int b){
	//The function from the pseudocode on the practical sheet
	int temp;
	while(b!=0){
		temp = b;
		b = a%b;
		a = temp;
	}	
	return a;
}
