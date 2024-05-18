#include <stdio.h>
int fac(int t){
	if(t<2) return 1;
	return t*fac(t-1);
}
int main(){
	int f;
	printf("enter integer:");
	scanf("%d",&f);
	if(f<0) {
		printf("factorial cannot be calculated for this integer");
	}
	else {
		printf("factorial= %d",fac(f));
	}
	return 0;
}
