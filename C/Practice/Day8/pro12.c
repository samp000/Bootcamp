/*
 * 	1 3 5 7 9 7 5 3 1
 * 	  9 7 5 3 5 7 9
 * 	    3 5 7 5 3
 * 	      7 5 7
 * 	        5
 * 	  
 */	
	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);

		int num=1;
		
		for(int i=1;i<=rows;i++) {
		
			for(int sp=1;sp<i;sp++)
				printf("   ");

			int tmp;


			for(int j=1;j<=2*(rows-i)+1;j++) {
		
					printf("%-3d",num);
					
					if(j==rows-i+1)
						tmp=num;

					if(i%2!=0) { 

						if(j<rows-i+1)	
							num+=2;
						else
							num-=2;
					}else {
						if(j<rows-i+1)
							num-=2;
						else
							num+=2;
					}

			}

			num=tmp;

			printf("\n");
		}
	}
