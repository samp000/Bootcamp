
	#include<stdio.h>

	void main() {
	
		int noOfMembers;
		printf("Enter no of members:");
		scanf("%d",&noOfMembers);

		if(noOfMembers >= 5)
			printf("Goa\n");
		else if(noOfMembers >= 4)
			printf("Lonavala\n");
		else if(noOfMembers >= 3)
			printf("Rajgad\n");
		else if(noOfMembers >= 2)
			printf("Taljai Tekdi\n");
		else
			printf("Stay home\n");

	}
