
	#include<stdio.h>

	void main() {
	
		int x = 5;

		int ans = ++x + ++x + ++x;

		printf("x:%d\n",x);		//8
		printf("ans:%d\n",ans);		//22
	}


	/*
	 * 	++x calls to pre()				//this is not an actual function but it is implemented as this
	 *
	 * 	pre(x) {
	 *
	 * 		x = x+1;
	 * 		return x;
	 * 	}
	 *
	 * 	if there is a expression like  = ++x + ++x + ++x;
	 * 	that time first ,  inital 2 terms are evaluated
	 * 	in this case if x = 5 then 1st  ++x = x and x = 6 , 2nd ++x = x and x = 7
	 * 	then first two terms are  = x + x gives = 7+7 i.e 14 and then remaining terms are avaluated so
	 * 	 = 14 + ++x is  = 14 + x and x = 8 so  = 14 + 8 i.e 22
	 *
	 *
	 */
