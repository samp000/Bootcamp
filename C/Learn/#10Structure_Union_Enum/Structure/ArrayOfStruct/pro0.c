
	#include<stdio.h>

	struct Player {
	
		char PName[20];
		int jerNo;
		float rev;
	};

	void main() {
	
		struct Player obj1 = {"Ronaldo",7,2357.6};
		struct Player obj2 = {"Dhoni",7,957.6};
		struct Player obj3 = {"Virat Kohli",18,1557.6};
		struct Player obj4 = {"Messi",10,1857.6};

		struct Player arr[] = {obj1,obj2,obj3,obj4};

		for(int i=0;i<4;i++) {
		
			printf("%s\n",arr[i].PName);
			printf("%d\n",arr[i].jerNo);
			printf("%f\n",arr[i].rev);
	
			printf("----------------\n");
		}
	}
