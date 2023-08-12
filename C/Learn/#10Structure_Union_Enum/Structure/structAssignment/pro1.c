
	#include<stdio.h>
	
	struct CricPlayer {
	
		char plName[20];
		int jerNo;
		char grade;
	} obj1 = {"MSD",7,'A'};

	void main() {
	
		struct CricPlayer obj2 = {"ViratK",18,'A'};
		

		printf("%s\n",obj1.plName);
		printf("%d\n",obj1.jerNo);
		printf("%c\n",obj1.grade);

		printf("%s\n",obj2.plName);
		printf("%d\n",obj2.jerNo);
		printf("%c\n",obj2.grade);

	}
