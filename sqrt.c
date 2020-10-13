/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Anuj Goel - B18161

int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);

	if(input < 0){
		printf("Invalid input. Inpit should be non-negative\n");
		printf("End of program. Exiting.\n");
		exit(-1);
	}

	printf("Sqrt of %d is %f\n",input,sqrt(input));
	printf("End of program. Exiting.\n");
	return(0);

} // end main
