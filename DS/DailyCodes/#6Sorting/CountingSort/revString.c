
	#include<stdio.h>
	#include<string.h>

	void revString(char str[]) {
	
		int start = 0;
		int end = strlen(str)-1;
	
		while(start < end) {
		
			int tmp = str[start];
			str[start] = str[end];
			str[end] = tmp;

			start++;
			end--;
		}
	}

	void main() {
	
		char str[30];

		printf("Enter string:");
		scanf("%[^\n]",str);

		revString(str);

		printf("String after reverse:%s\n",str);

	}
