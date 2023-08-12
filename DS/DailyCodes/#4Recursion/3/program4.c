
	//recursion in an character array

	#include<stdio.h>

	int searchEle(char carr[],int n,char ele) {
	
		if(n == 0)
			return -1;

		if(carr[n-1] == ele)
			return n-1;

		return searchEle(carr,n-1,ele);
	}

	void main() {
	
		char carr[] = "abcde";
		char ele = 'e';

		printf("%d\n",searchEle(carr,sizeof(carr),ele));
	}
