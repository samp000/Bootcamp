
	#include<stdio.h>

	void main() {
	
		int x;
		printf("Enter value:");
		scanf("%d",&x);

		switch(x) {
		
			case 65:
				printf("value of x is 65\n");
				break;
			case 'A':
				printf("value of x is A\n");
				break;
			case 66:
				printf("value of x is 66\n");
				break;
			case 'B':
				printf("value of x is B\n");
				break;
			default:
				printf("Wrong ip\n");
				break;
		}
	}
