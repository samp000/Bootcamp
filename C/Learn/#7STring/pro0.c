
	#include<stdio.h>

	void main() {
	
		char carr[] = {'C','o','r','e','2','w','e','b'};
		char *str = "COre2web";

		printf("%s\n",carr);
		printf("%s\n",str);

		carr[4] = '3';
		printf("%s\n",carr);	//core3web

		*str = 'B';
		printf("%s\n",str);	//segmentation fault

	}
