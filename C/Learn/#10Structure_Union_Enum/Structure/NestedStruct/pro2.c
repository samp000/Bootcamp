
	#include<stdio.h>
	#include<string.h>

	struct Movie {
	
		char mname[20];

		struct MovieInfo{
			char actor[20];
			float rating;
		}obj1;				//obj1 will get memory only when object of Movie is created
	};

	void main() {
	
		struct Movie obj2 = {"Pathan",{"SRK",6.7}};
		//struct Movie obj2 = {"Pathan","SRK",6.7};	this is same as above	
	
		printf("%s\n",obj2.mname);
		printf("%s\n",obj2.obj1.actor);
		printf("%f\n",obj2.obj1.rating);
	}
