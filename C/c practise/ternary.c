#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void circle(){
    printf("circle has infinite sides and spans an area equal to pi*(radius^2) square units...");
}
void square(){
    printf("a square is a shape that has all four dimensions of equal length and intersecting at ninety degrees...");
}
int main(){
    printf("type 'yes' to go to circle and 'no' to go for square...  ");
    char *choice;
    choice=malloc(4*sizeof(char));
    fgets(choice,4,stdin);
    strcmp("yes",choice) ? square() : circle();
    return 0;
}