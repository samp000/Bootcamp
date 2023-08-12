
	#include<stdio.h>

	void main() {
	
		int noOfPersons;
		float cost;
		char row;

		printf("Enter no of persons:");
		scanf("%d",&noOfPersons);

		printf("Enter cost of ticket:");
		scanf("%f",&cost);

		printf("Enter row no of seat:");
		scanf("%c",&row);

		printf("\nNo Of Peoples:%d\n",noOfPersons);
		printf("Cost of ticket:%f\n",cost);
		printf("Row :%c\n",row);
	}


/*
 *
 * 	above program gives eronious output, after entering cost of ticket shell does'nt waits for user to enter row
 * 	this is because after entering cost of ticket we press enter button and \n character is still there in stream of inputs 
 * 	and that is read and stores into row variable...
 *	
 *	this is stream at the time of secont input --->
 *	__________
 * 	|230.5\n | --> 	cost = 5	row = \n
 * 	|________| -->	
 */
