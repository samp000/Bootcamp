
	#include<stdio.h>

	int mystrlen(const char *str);

	void main() {
	
		char name[10] = {'K','L','R','a','h','u','l','\0'};
		char *str = "Virat Kohli";

		int lenName = mystrlen(name);
		int lenStr = mystrlen(str);

		printf("%d\n",lenName);
		printf("%d\n",lenStr);
	}

	int mystrlen(const char *str) {
	
		int cnt=0;

		while(*str != '\0') {
		
			cnt++;
			str++;
		}

		return cnt;
	}
