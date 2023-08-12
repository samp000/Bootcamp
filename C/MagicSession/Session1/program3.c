/*	
 *	WAP to print all composite numbers between given range
 *
 */

	#include<stdio.h>

	void main() {
	

		int start,end;

		printf("start:");
		scanf("%d",&start);
		
		printf("end:");
		scanf("%d",&end);

		if(start<4)
			start=4;

		int cnt;

		printf("Composit numbers are:");

		for(int i=start;i<=end;i++) {
			
			cnt=0;

			for(int j=1;j<=i;j++) {
			
				if(i%j==0)
					cnt++;
			}

			if(cnt>2)
				printf("%d ",i);
		}

		printf("\n");

	}
