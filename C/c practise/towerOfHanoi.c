#include<stdio.h>
void towerOfHanoi(int n,char A,char B,char C){
    if(n==0) return;
    towerOfHanoi(n-1,A,C,B);
    printf("\n%c -> %c",A,C);
    towerOfHanoi(n-1,B,A,C);
}
int main(){
towerOfHanoi(1,'1','2','3');
printf("\n");

towerOfHanoi(2,'1','2','3');
printf("\n");

towerOfHanoi(3,'1','2','3');
printf("\n");
    return 0;
}
