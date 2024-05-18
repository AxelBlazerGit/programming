
#include <stdio.h>
#include <math.h>

// Function to calculate area of triangle
float areaOfTriangle(float base, float height) {
    return 0.5 * base * height;
}

// Function to calculate area of rectangle
float areaOfRectangle(float length, float breadth) {
    return length * breadth;
}

// Function to calculate area of circle
float areaOfCircle(float radius) {
    return M_PI * radius * radius;
}

int main() {
    int choice;
    float result;
    float side1, side2, base, height, radius;
    
    printf("1. Triangle\n2. Rectangle\n3. Circle\n4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("Enter base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            result = areaOfTriangle(base, height);
            printf("Area of the triangle is: %.2f\n", result);
            break;
        case 2:
            printf("Enter length and breadth of the rectangle: ");
            scanf("%f %f", &side1, &side2);
            result = areaOfRectangle(side1, side2);
            printf("Area of the rectangle is: %.2f\n", result);
            break;
        case 3:
            printf("Enter radius of the circle: ");
            scanf("%f", &radius);
            result = areaOfCircle(radius);
            printf("Area of the circle is: %.2f\n", result);
            break;
        case 4:
            printf("Exiting program.\n");
            return 0;
        default:
            printf("Invalid choice!\n");
    }
    
    return 0;
}
