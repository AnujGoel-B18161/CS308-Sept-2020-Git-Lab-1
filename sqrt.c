/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Anuj Goel - B18161
void negsqrt(int n){
	n = -1 * n;
	printf("Sqrt of %d is %fi\n", -n, sqrt(n));
	printf("End of program. Exiting\n");
	return;
}


int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);

	if(input < 0){
		negsqrt(input);
		return 0;
	}

	printf("Sqrt of %d is %f\n",input,sqrt(input));
	printf("End of program. Exiting.\n");
	return(0);

} // end main
