
#include<stdio.h>

	void main() {
	
		int x=15,y=78,ans;

		ans = x << 3;
		printf("ans:%d\n",ans);

		ans = y >> 2;
		printf("ans:%d\n",ans);

		ans = x-- << 3;
		printf("ans:%d\nx:%d\n",ans,x);

		ans = ++y >> 4;
		printf("ans:%d\nx:%d\n",ans,y);

	}
