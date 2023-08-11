#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ( n > 0){
	 prinf("n is positive")
	}
	elseif (n==0 ){
	 printf("n is zero")	
	}
	else{
         printf("n is negative")
	}
	return (0);
}
