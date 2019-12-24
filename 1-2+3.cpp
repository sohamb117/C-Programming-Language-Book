#include <stdio.h>

int main(){
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;
	
	fahr = lower;
	printf("  F\t   C\n"); /*EXERCISE 1.3 */
	while (fahr <= upper) { /* while loop that sets the upper bound and increments by step, for might have been easier */
		celsius = 5 * (fahr-32) / 9;
		printf("%3d\t%6d\n", fahr, celsius);
		fahr = fahr + step;
	}

	/*EXERCISE 1-4*/
	printf("EXERCISE 1-4\n");
	celsius=lower;
	while (celsius <= upper) {
		fahr = ((9*celsius)/5) + 32;
		printf("%3d\t%6d\n", celsius, fahr);
		celsius = celsius + step;
	}


	
	printf("\nWHILE STATEMENT/FOR STATEMENT\n\n"); /* 1.3 - with for loop. Code changed to use original variables too */

	for (fahr=lower; fahr <= upper; fahr+=step){ /* with for loop */
		celsius = 5 * (fahr-32) / 9;
		printf("%3d\t%6d\n", fahr, celsius);
	}

	/*EXERCISE 1-5*/
	printf("EXERCISE 1-5\n");
	for (fahr=upper; fahr >= lower; fahr-=step){
		celsius = 5 * (fahr-32) / 9;
		printf("%3d\t%6d\n", fahr, celsius);
	}
}