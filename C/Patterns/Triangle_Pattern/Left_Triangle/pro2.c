/*
 * 	*
 * 	* *
 * 	* * *
 * 	* * * *
 */

	#include<stdio.h>

	void main() {
	
		int j=1;

		for(int i=1;i<=4;) {

			if(j<=i) {
			
				printf("* ");
				j++;
				continue;
			
			}else {
				j=1;
				i++;
				printf("\n");
			}
		}
	}
