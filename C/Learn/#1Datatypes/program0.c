
	//int printf(const char *,...);

	#include<stdio.h>

	void main() {
	
		float weight = 10.12345678911111111111111;
		double sizeOfAtom = 15.123456789101222222;

		printf("%.28f\n",weight);
		printf("%.28lf\n",sizeOfAtom);
		printf("%d\n",sizeof(void));
		printf("%d\n",sizeof(char));
		printf("%d\n",sizeof(long));
		printf("%d\n",sizeof(double));
		printf("%d\n",sizeof(short));

		
	}
