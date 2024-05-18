#include<stdio.h>
int main(){
    printf("enter dimension of square: ");
    float sideLength;
    scanf("%f",&sideLength);
    printf("%.6f",sideLength*sideLength);
    return 0;
}