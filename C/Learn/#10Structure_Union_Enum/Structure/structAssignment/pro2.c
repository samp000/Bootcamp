
	#include<stdio.h>
	#include<string.h>

	struct Movie{
	
		char mName[20];
		int mTick;
		float price;
	} obj1 = {"kantara",2,300.0};

	void main() {
	
		struct Movie obj2;

		strcpy(obj2.mName,"Pathan");
		obj2.mTick=2;
		obj2.price=500.0;

			

		printf("%s\n",obj1.mName);
		printf("%d\n",obj1.mTick);
		printf("%f\n",obj1.price);
		
		printf("%s\n",obj2.mName);
		printf("%d\n",obj2.mTick);
		printf("%f\n",obj2.price);

	}
