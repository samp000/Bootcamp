
	#include<stdio.h>

	typedef struct Employee {
	
		int empID;
		char empName[30];
		double empSal;
	}Emp = {1,"xyz",60.50};

	void main() {
	
		struct Employee obj1 = {105,"Sandesh",95.50};	
		Emp obj2 = {110,"Ayush",90.50};	
	}
