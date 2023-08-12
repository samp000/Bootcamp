/*
 * 	Program 3: WAP to print all even numbers in reverse order and odd numbers in the standerd way. Both seperately within a range
 *
 */

	#include<stdio.h>

	void main() {
	
		int start,end;

		printf("Start:");
		scanf("%d",&start);
		
		printf("End:");
		scanf("%d",&end);


		for(int i=start,j=end;i<=end,j>=start;i++,j--) {
		
			if(i%2!=0) {
				printf("%d\t",i);
			}

			if(j%2==0) {
				printf("%d",j);
			}

			printf("\n");
		}
	}
