
#include<stdio.h>

void print8bitsWithValuesHeader( int binDigits[8] ){
	
	printf(" %d %d  %d  %d    %d   %d   %d   %d \n", 
			128, 64, 32, 16, 8, 4, 2, 1);
	printf(" %d   %d   %d   %d     %d   %d   %d   %d   \n", 
			binDigits[7],
			binDigits[6],
			binDigits[5],
			binDigits[4],
			binDigits[3],
			binDigits[2],
			binDigits[1],
			binDigits[0]  );
}

