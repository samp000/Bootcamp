
	int printf(const char*,...);

	void main() {
	
		int x=1,y=5,ans;

		ans = --x || --x;

		printf("ans:%d\n",ans);
		printf("x:%d\n",x);
		printf("y:%d\n",y);

		ans = ++x && --y;
		
		printf("ans:%d\n",ans);
		printf("x:%d\n",x);
		printf("y:%d\n",y);
	}

