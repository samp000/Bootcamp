
	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>

	typedef struct Company{
	
		int empCount;
		char name[20];
		float rev;
		struct Company *next;

	}Comp;

	void main() {

		Comp obj1,obj2,obj3;

		Comp *head = &obj1;

		head->empCount = 100;
		strcpy(head->name,"TCS");
		head->rev=2005.5;
		head->next = &obj2;

		obj2.empCount = 200;
		strcpy(obj2.name,"Infosys");
		obj2.rev = 1300.5;
		obj2.next=&obj3;

		obj3.empCount = 500;
		strcpy(obj3.name,"Nvidia");
		obj3.rev =2500.7;
		obj3.next=NULL;

		printf("%d\n%s\n%f\n",head->empCount,head->name,head->rev);
		printf("%d\n%s\n%f\n",head->next->empCount,head->next->name,head->next->rev);
		printf("%d\n%s\n%f\n",head->next->next->empCount,head->next->next->name,head->next->next->rev);

	}
	
