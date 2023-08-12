

/*	
 *	A
 *	C E
 *	G I K
 */

	#include<stdio.h>

	void main() {
	
		char ch='A';

		for(int row=1;row<=3;row++) {
		
			for(int col=1;col<=row;col++) {
			
				printf("%c ",ch);

				ch=ch+2;
			}
			printf("\n");
		}
	}

