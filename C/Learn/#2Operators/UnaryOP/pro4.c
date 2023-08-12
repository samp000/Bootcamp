
	#include<stdio.h>

	void main() {
	
		int x = 5;

		int ans = x++ + x++;

		printf("x:%d\n",x);		//7
		printf("ans:%d\n",ans);		//11
	}



	/*	x++ calls to post(x)					//this is not an actual function but implementation is same as this
	 *
	 *	post(x) {
	 *
	 * 		int temp = x;
	 * 		x = x + 1;
	 *
	 * 		return temp;
	 *	}
	 *
	 */
