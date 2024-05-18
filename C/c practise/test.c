#include<stdio.h>

int main() {
    printf("Enter Radius of Circle: ");
    float radius;
    scanf("%f", &radius);
    printf("Area of Circle = %.5f\n", 3.142 * radius * radius);

    // Wait for user input before closing the console window
    getchar(); // or getch(); if you're using a Windows environment

    return 0;
}
