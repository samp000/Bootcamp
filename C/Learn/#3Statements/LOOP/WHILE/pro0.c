
	#include<stdio.h>

	void main() {
	
		int startNo,endNo;

		printf("Enter start and end number:");
		scanf("%d %d",&startNo,&endNo);

		while(startNo <= endNo) {
		
			if(startNo%4==0 && startNo%5==0)
				printf("%d\n",startNo);
			startNo++;
		}
	}
