#include <stdio.h>

void upperDiamond(int n){
	int i,j;
		for(i=0;i<n;i++){
		for(j=0;j<(n-i-1)*2;j++){
			printf(" ");
		}
		for(j=0;j<(i+1);j++){
			printf("*   ");
		}
		printf("\n");
	}
}
void lowerDiamond(int n){
	int i,j;
		for(i=0;i<n;i++){
		
			for(j=0;j<i;j++){
				printf(" ");
			}
			for(j=0;j<n-i;j++){
				printf("* ");
			}
			printf("\n");
		}
}
void upperTriangleDigit(int n){

	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++)printf(" ");
		int x=i+1;
		for(j=0;j<=i;j++)printf("%d ",x);
		printf("\n");
	}
}
void numberFlag(int n){

	int i,j,count=1;
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++) printf("%d ",count++);
		printf("\n");
	}
}
void reverseFlag(int n){

	int i,j;
	for(i=0;i<n;i++){
		for(j=i+1;j>0;j--)printf("%d ",j);
		printf("\n");
	}
}
int main(){
	int n,pattern;
	printf("enter pattern row count:");
	scanf("%d",&n);
	printf("for upper diamond starred enter 1\n");
	printf("for lower diamond starred enter 2\n");
	printf("for upper triangle number rows enter 3\n");
	printf("for number flag enter 4\n");
	printf("for reverse number flag enter 5\n");
	scanf("%d",&pattern);
	switch(pattern){
		case 1:
			upperDiamond(n);
			break;
		case 2:
			lowerDiamond(n);
			break;
		case 3:
			upperTriangleDigit(n);
			break;
		case 4:
			numberFlag(n);
			break;
		case 5:
			reverseFlag(n);
			break;
		default:
			printf("invalid input");
	}

	return 0;
}
