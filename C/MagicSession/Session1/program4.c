/*
 * 	* _ _ _
 * 	_ * _ _
 * 	_ _ * _
 * 	_ _ _ *	
 *
 */

	#include<stdio.h>

	void main() {
	

		int n;
		printf("Enter rows:");
		scanf("%d",&n);

		for(int i=1;i<=n;i++) {
		
			for(int j=1;j<=n;j++) {
			
				if(i==j)
					printf("* ");
				else
					printf("- ");
			}

			printf("\n");
		}	

	}
