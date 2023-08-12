
	//is both strings are equal untill given n

	#include<stdio.h>
	#include<stdbool.h>
	#include<string.h>

	bool strCmp(char *str1 , char *str2 , int n) {
	
		printf("%c %c\n",str1[n-1],str2[n-1]);

		if(n == 0)
			return true;

		if(*(str1+n-1) != *(str2+n-1))
			return false;

		return strCmp(str1,str2,n-1);
	}	

	void main() {

		bool ret = false;
		
		int n;
		char str1[25];
		char str2[25];

		printf("Enter string 1:");
		fgets(str1,25,stdin);	
		
		printf("Enter string 2:");
		fgets(str2,25,stdin);	
		
		printf("Enter n:");
		scanf("%d",&n);

		ret = strCmp(str1,str2,n);

		if(ret)
			printf("Both strings are equal\n");
		else
			printf("Both strings are not equal\n");

	}
