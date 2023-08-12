
	int printf(const char*,...);

	void main() {
	
		int x=8,y=11,ans;

		ans = ++x || ++y;

		printf("ans:%d\n",ans);
		printf("x:%d\n",x);
		printf("y:%d\n",y);

		ans = x++ && ++y;
		
		printf("ans:%d\n",ans);
		printf("x:%d\n",x);
		printf("y:%d\n",y);
	}

