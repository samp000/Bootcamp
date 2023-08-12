	
	#include<stdio.h>

	void main() {
	
		int x=9;
		int ans;

		ans = ++x + x++ + ++x;
		printf("x:%d\nans:%d\n",x,ans);
		
		ans = ++x + ++x + ++x + ++x;
		printf("x:%d\nans:%d\n",x,ans);
		
		ans = x++ + x++ + ++x + x++ + ++x;
		printf("x:%d\nans:%d\n",x,ans);
		
		ans = x++ + x++ + x++ + x++;
		printf("x:%d\nans:%d\n",x,ans);
	}
