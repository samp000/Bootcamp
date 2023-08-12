/*
 * 	2   3   5
 * 	7   11  13
 * 	17  19  23
 *
 */

	#include<stdio.h>

	void main() {
	

		int n;
		printf("Enter rows:");
		scanf("%d",&n);

		int num=2;

		for(int i=1;i<=n;i++) {
		

			for(int j=1;j<=n;j++) {
		
				int cnt=0;	
				for(int k=1;k<=n;k++) {
				
					if(num%k==0)
						cnt++;
				}

				if(cnt<=2)
					printf("%d  ",num);

				num++;
			}

			printf("\n");
		}	

	}
