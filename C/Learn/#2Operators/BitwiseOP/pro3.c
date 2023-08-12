
	int printf(const char*,...);

	void main() {
	
		int x=4,y=5,ans;

		ans = x-- ^ ++y;

		printf("%d\n%d\n%d\n",ans,x,y);
	}
