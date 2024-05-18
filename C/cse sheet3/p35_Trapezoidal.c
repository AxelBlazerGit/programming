//integral dx/1+x from 0 to 5 h=1
#include<stdio.h>

float f(float x) {
    return 1 / (1 + x);
}

void areaTrapezoidal(float delX, float val1, float val2, int n) {
    float sumBetween = 0;
    for (int i = 1; i < n; i++)
        sumBetween += f(delX * i);
    float trapezoidalArea = (delX / 2) * (val1 + 2 * sumBetween + val2);
    printf("%f", trapezoidalArea);
}

int main() {
    int a = 0, b = 5, n = 5;
    float delX = (b - a) / (float)n;
    areaTrapezoidal(delX, f(a), f(b), n);
    return 0;
}
