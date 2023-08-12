
	#include<stdio.h>

	void main() {

		int row,col;

		printf("Enter row:");
		scanf("%d",&row);
		printf("Enter col:");
		scanf("%d",&col);

		int arr[row][col],sum=0;

		printf("Enter elements:");

		for(int i=0;i<row;i++) {
		
			for(int j=0;j<col;j++) {
			
				scanf("%d",(*(arr+i)+j));
			
				if(i==j)
					sum+= *(*(arr+i)+j);

			}
		}
		
		for(int i=0,j=col-1;i<row,j>=0;i++,j--) {
		
				sum+= *(*(arr+i)+j);
			
		}
	
		sum = sum - *(*(arr+row/2)+col/2);


		printf("Sum of digonal elemets is :%d\n",sum);
		
		for(int i=0;i<row;i++) {
		
			for(int j=0;j<col;j++) {
		
				printf("%d ",arr[i][j]);	
			}

			printf("\n");
		}

	}
