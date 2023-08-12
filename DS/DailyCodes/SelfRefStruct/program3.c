
	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>

	typedef struct Movie {
	
		int count;
		char mName[25];
		float price;
		struct Movie *next;
	}Mov;

	void accessData(Mov *);

	void main() {

		printf("%ld\n",sizeof(Mov));

		Mov *m1 = (Mov*)malloc(sizeof(Mov));
		Mov *m2 = (Mov*)malloc(sizeof(Mov));
		Mov *m3 = (Mov*)malloc(sizeof(Mov));

		m1->count=3;
		strcpy(m1->mName,"Top Gun:Maverick");
		m1->price=300.0;
		m1->next=m2;

		m2->count=5;
		strcpy(m2->mName,"Avatar 2");
		m2->price=400.0;
		m2->next=m3;

		m3->count=5;
		strcpy(m3->mName,"Iron Man 4:The Reality");
		m3->price=450.0;
		m3->next=NULL;

		accessData(m1);
		accessData(m2);
		accessData(m3);
	}

	void accessData(Mov *ptr){
		
		printf("%d\n",ptr->count);
		printf("%s\n",ptr->mName);
		printf("%f\n",ptr->price);
	}
