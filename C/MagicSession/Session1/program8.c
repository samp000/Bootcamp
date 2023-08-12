/*
 *	0
 *	1  1
 *	2  3  5
 *	8  13 21 34
 *
 */

	#include<stdio.h>

	void main() {
	

		int n;
		printf("Enter rows:");
		scanf("%d",&n);

		int curr=0,next=1,sum=0;

		for(int i=1;i<=n;i++) {
	
			for(int j=1;j<=i;j++) {


				if(i==1){		
				
					printf("0\t");
				
				} else if(i==1 && j==1)	 {
				
					printf("1\t");
				
				}else {

					printf("%d\t",next);

					sum = curr+next;
					curr=next;
					next=sum;

				}
				
			}

			printf("\n");
		}	

	}
