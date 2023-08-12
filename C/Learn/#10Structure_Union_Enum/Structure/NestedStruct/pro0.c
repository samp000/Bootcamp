
	#include<stdio.h>
	#include<string.h>

	struct MovInfo {
	
		char actor[20];
		float rating;
	};

	struct Movie{
	
		char mName[20];
		struct MovInfo obj1;
	};

	void main() {
	
		struct Movie obj2 ;

		strcpy(obj2.mName,"Kanttara");
		strcpy(obj2.obj1.actor,"Ritesh");
		obj2.obj1.rating=9.6;

		printf("%s\n",obj2.mName);
		printf("%s\n",obj2.obj1.actor);
		printf("%f\n",obj2.obj1.rating);
	}
