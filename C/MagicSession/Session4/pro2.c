
	#include<stdio.h>
	#include<stdlib.h>

	void main() {
	
		int noOfSub;

		printf("Enter no of Subjects:");
		scanf("%d",&noOfSub);

		float *mptr = (float*)malloc(noOfSub*sizeof(float));

		printf("Enter marks\n");
		
		for(int i=0;i<noOfSub;i++) {
		
			scanf("%f",mptr+i);
		}	

		printf("Marks are: ");

		for(int i=0;i<noOfSub;i++) {
		
			printf("%0.2f ",*(mptr+i));
		}

		printf("\n");


		free(mptr);
	}
