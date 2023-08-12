
	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>

	struct Socity {	
		char sName[20];
		int wings;
		float avgRent;
	}; 

	void main() {
	
		struct Socity *ptr = (struct Socity*)malloc(sizeof(struct Socity));

	//	strcpy(*ptr.sName , "TomarrowLand");	gives error because '.' has greater priority than * so it first find sName rather than referrencing struct
		
		strcpy((*ptr).sName , "TomarrowLand");
		(*ptr).wings = 4;
		ptr -> avgRent = 10500.50;

		// '->' operatr is same as (*ptr).sName i.e. star and dot

		printf("%s\n",(*ptr).sName);
		printf("%d\n",(*ptr).wings);
		printf("%f\n",(*ptr).avgRent);
	}
