/*	
 *	D e F g
 *	e D c B
 *	F g H i
 *	g F e D
 *
 */

	#include<stdio.h>

	void main() {
	

		int n;
		printf("Enter rows:");
		scanf("%d",&n);

		for(int i=1;i<=n;i++) {
	
			char ch = 'A'+n+i-2;

			for(int j=1;j<=n;j++) {
			
				if( (i%2==0 && j%2==0) || (i%2!=0 && j%2!=0))
					printf("%c ",ch);
				else
					printf("%c ",ch+32);
					
				if(i%2==0)
					ch--;
				else
					ch++;
			}

			printf("\n");
		}	

	}
