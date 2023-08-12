
	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>

	typedef struct Batsman{
	
		int jerNo;
		char name[20];
		float avg;
		struct Batsman *next;

	}BM;

	void main() {

		BM obj1,obj2,obj3;

		BM *head = &obj1;

		head->jerNo = 7;
		strcpy(head->name,"MSD");
		head->avg = 49.5;
		head->next = &obj2;

		obj2.jerNo = 18;
		strcpy(obj2.name,"Virat");
		obj2.avg = 60.5;
		obj2.next=&obj2;

		obj3.jerNo = 45;
		strcpy(obj3.name,"Rohit");
		obj3.avg = 55.5;
		obj3.next=NULL;

		printf("%d\n%s\n%f\n",head->jerNo,head->name,head->avg);
		printf("%d\n%s\n%f\n",head->next->jerNo,head->next->name,head->next->avg);
		printf("%d\n%s\n%f\n",head->next->next->jerNo,head->next->next->name,head->next->next->avg);

	}
	
