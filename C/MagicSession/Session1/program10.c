/*	
 * 	D D D D
 *   	  C C C
 *     	    B B
 *            A
*/

	#include<stdio.h>

	void main() {
	

		int n;
		printf("Enter rows:");
		scanf("%d",&n);

		for(int i=1;i<=n;i++) {
	
			char ch = 'A'+n-i;

			for(int sp=1;sp<i;sp++) {
			
				printf("  ");
			}

			for(int j=n;j>=i;j--) {
			
				printf("%c ",ch);	
				
			}

			printf("\n");
		}	

	}
