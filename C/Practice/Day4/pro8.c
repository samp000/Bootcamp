/*	
 *	d  d  d  d
 *	C  C  C  
 *	b  b 
 *	A
 *
 *	c  c  c
 *	B  B
 *	a
 *
 */

	#include<stdio.h>

	void main() {
		
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);


		for(int i=1;i<=rows;i++) {

			char ch = 'a'+rows-i;
			
			for(int j=rows;j>=i;j--) {

				if(i%2==0)
					printf("%c  ",ch-32);
				else
					printf("%c  ",ch);

			}

			printf("\n");
		}
	}
