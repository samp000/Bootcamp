/*	Program 9:
 *
 *	
 *	0   1    1   2
 *	3   5    8   13
 *	21  34   55  89
 *	144 233  377 610
 *
 */
	
	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter no of rows:");
		scanf("%d",&rows);

		int curr=0,next=1,sum=curr+next;

		for(int i=1;i<=rows;i++) {

			for(int j=1;j<=rows;j++) {

				if(i==1 && j==1)
					printf("0\t");
				else if(i==1 && j==2)
					printf("1\t");
				else {
					printf("%d\t",sum);
					curr = next;
					next = sum;
					sum = curr+next;
				}

			}


			printf("\n");
		}
	}
