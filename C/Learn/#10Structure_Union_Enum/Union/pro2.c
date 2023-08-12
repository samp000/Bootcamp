
	#include<stdio.h>

	union Employee {
	
		int empId;
		float sal;
	};

	void main() {

		//problem	
		union Employee emp1 = {10,50.60};
	
		printf("%d\n",emp1.empId);
		printf("%f\n",emp1.sal);
		
		printf("%p\n",&emp1.empId);		//all elements in union got same memory
		printf("%p\n",&emp1.sal);
	
		union Employee emp2;

		emp2.empId=15;
		printf("%d\n",emp2.empId);
		
		emp2.sal=7000000;
		printf("%f\n",emp2.sal);
	}
