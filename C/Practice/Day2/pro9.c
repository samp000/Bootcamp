/*
 *
 * 	A b C
 * 	d E i
 * 	G h I
 */

	#include<stdio.h>

	void main() {
	
		int row;

		printf("Enter rows:");
		scanf("%d",&row);
		
		char ch = 'A';
		int flg=1;

		for(int i=1;i<=row;i++) {
		

			for(int j=1;j<=row;j++) {
			
				if(flg==1) {
					printf("%c ",ch);
					flg=0;
				}else {
					printf("%c ",ch+32);
					flg=1;
				}

				ch++;
			}

			printf("\n");
		}
	}
