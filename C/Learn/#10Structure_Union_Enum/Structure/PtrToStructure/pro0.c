
	#include<stdio.h>

	struct Movie {
	
		char mName[20];
		int count;
		float price;
	}obj1 = {"Tumbabd",5,1000.0};


	void main() {

		struct Movie *sptr = &obj1;

		printf("%s\n",(*sptr).mName);	
		printf("%d\n",sptr->count);	
		printf("%f\n",sptr->price);	

	}
