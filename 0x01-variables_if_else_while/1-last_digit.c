#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void) 
{  
int n;  
srand(time(0));
n = rand() - RAND_MAX / 2;  
/* your code goes there */
int lastdigit = n % 10;
if(lastdigit > 5){
printf("last digit of %d is %d is greater than 5\n\n",n,lastdigit); 
}else if(lastdigit == 0){
printf("last digit of %d is %d and is 0\n\n",n,lastdigit);
}else printf("last digit of %d is %d and is less than 6 and not 0\n\n",n,lastdigit);
return (0);
}
