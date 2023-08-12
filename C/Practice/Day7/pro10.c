/*
 * 		A
 * 	      b a b
 * 	    C E G E C
 * 	  d c b a b c d
 * 	E G I K M K I G E
 */

	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);
	
	
		for(int i=1;i<=rows;i++) {
		
			for(int sp=rows;sp>i;sp--)
				printf("  ");

			char ch = 'A'+i-1;
			
			for(int j=1;j<=2*i-1;j++) {
	
				
				if(j<i) {
					if(i%2==0)
						printf("%c ",ch+32);
					else
						printf("%c ",ch);

					ch++;
				}else{
					
					if(i%2==0)
						printf("%c ",ch+32);
					else
						printf("%c ",ch);
				
					ch--;
				}
			}

			printf("\n");
		}
	}
