#include <stdio.h>
#include <math.h>

int main(void) {

/* Declare variables */
   int i,inum,tmp,numdigits;
   float fnum;
   char binnum[60];

/* Intialise 4-byte integer */
   inum = 33554431;
/* Convert to 4-byte float */
   fnum = (float) inum;


/* Convert to binary number (string)*/
   i = 0; tmp = inum;
   while (tmp > 0) {
     sprintf(&binnum[i],"%1d",tmp%2);
     tmp = tmp/2;
     i++;
   }

/* Terminate the string */
   binnum[i] = '\0';
       

/* Complete the expression */
/* numdigits = ceil( ... );
   printf("The number of digits is %d\n",numdigits);
*/


   printf("inum=%d,  fnum=%f, inum in binary=%s\n",
      inum,fnum,binnum);
  
   /*Exercise 2: Note that the integer and float do not agree*/
  
  
   /*Exercise 3: There are 25 binary digits in the number, a (single) float can represent 24 binary digits*/

}
