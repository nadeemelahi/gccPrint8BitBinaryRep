
#include<stdio.h>
#include<math.h>

void print8bitDecimalNumBits( int bd[8] );

int calcDivisionModulus( int x1 , 
		int exp, 
		int binaryDigits[8] ){

	int x2 = pow( 2 , exp );
	
	int division = x1 / x2;
	int modulus = x1 % x2;

	binaryDigits[exp] = division;

	return modulus;
}
void startCDM(int x , int bd[8] ) {
	printf("%.3d  0x%.2X: ", x, x);
	x = calcDivisionModulus( x , 7 , bd);
	x = calcDivisionModulus( x , 6 , bd);
	x = calcDivisionModulus( x , 5 , bd);
	x = calcDivisionModulus( x , 4 , bd);
	x = calcDivisionModulus( x , 3 , bd);
	x = calcDivisionModulus( x , 2 , bd);
	x = calcDivisionModulus( x , 1 , bd);
	calcDivisionModulus( x , 0 , bd);
	
}

// MAIN FN
void set8bitBinaryRep( int bd[8]){

	for( int i = 0; i < 256; i++ ){

		startCDM( i , bd ); 
		print8bitDecimalNumBits( bd );
	}
}
