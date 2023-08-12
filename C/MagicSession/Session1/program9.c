/*	
 *               1
 *     	      1  2
 *         1  2  3
 *	1  2  3  4
 */

	#include<stdio.h>

	void main() {
	

		int n;
		printf("Enter rows:");
		scanf("%d",&n);

		for(int i=1;i<=n;i++) {
	
			for(int sp=n-1;sp>=i;sp--) {
			
				printf("  ");
			}

			for(int j=1;j<=i;j++) {
			
				printf("%d ",j);	
				
			}

			printf("\n");
		}	

	}
