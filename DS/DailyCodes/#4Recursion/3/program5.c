
	#include<stdio.h>
	#include<stdbool.h>

	int isPalindrome(char carr[],int s,int e) {			
		
		if(carr[s] != carr[e]) 
			return 0;

		if(s >= e)  
			return 1;
			
		return isPalindrome(carr,s+1,e-1);
	}

	void main() {
	
		char str[] = "madam";
		
		if(isPalindrome(str,0,sizeof(str)-2))		//last charcter is \0
			printf("%s is palindrome\n",str);
		else
			printf("%s is not palindrome\n",str);
	}
