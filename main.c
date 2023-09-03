
#include<stdio.h>


void zeroOut8bitDecimalNumBits( int bd[8] );
void print8bitDecimalNumBits( int bd[8] );
void print8bitsWithValuesHeader( int bd[8] );
void set8bitBinaryRep( int bd[8] );

int main(){
	
	int binDigits[8];

	zeroOut8bitDecimalNumBits(binDigits);
	print8bitsWithValuesHeader(binDigits);

	set8bitBinaryRep(binDigits);

	return 0;
}
