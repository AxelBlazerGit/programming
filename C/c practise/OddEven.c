#include<stdio.h>
int main(){
    int num;
    printf("enter number to check for odd or even : ");
    scanf("%d",&num);
    if(num%2) printf("%d is odd",num);
    else printf("%d is even",num);
}