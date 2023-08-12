/*	
 *	E D C B A
 *	E D C B
 *	E D C
 *	E D 
 *	E
 *
 */

	#include<stdio.h>

	void main() {
	

		int n;
		printf("Enter rows:");
		scanf("%d",&n);

		for(int i=1;i<=n;i++) {
	
			char ch = 'A'+n-1;

			for(int j=1;j<=n-i+1;j++) {
			
				printf("%c ",ch--);	
				
			}

			printf("\n");
		}	

	}
