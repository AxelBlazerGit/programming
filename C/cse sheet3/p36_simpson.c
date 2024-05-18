// // #include <stdio.h>

// // int main() {
// // 	//code
// // 	return 0;
// // }
// //integral dx/1+x from 0 to 5 h=1
// #include<stdio.h>

// float f(float x) {
//     return 1 / (1 + x);
// }

// void areaTrapezoidal(float delX, float val1, float val2, int n) {
//     float sumBetween = 0;
//     for (int i = 1; i < n; i++)
//         sumBetween += f(delX * i);
//     float trapezoidalArea = (delX / 2) * (val1 + 2 * sumBetween + val2);
//     printf("%f", trapezoidalArea);
// }

// int main() {
//     int a = 0, b = 5, n = 5;
//     float delX = (b - a) / (float)n;
//     areaTrapezoidal(delX, f(a), f(b), n);
//     return 0;
// }




#include<stdio.h>
float f(double x){
    return 1.0/(1.0+x*x);
}
void simpsonArea(float h,float n){
    float firstLast=f(0)+f(1);
    float oddSum=0.0,evenSum=0.0;
    for(int i=1;i<n;i++){
        float hTemp=f(h*i);
        if(i%2) oddSum+=4*hTemp;
        else evenSum+=2*hTemp;
    }
    float areaSimpson=(h/3)*( firstLast + oddSum + evenSum );
    printf("%f",areaSimpson);
    return;
}
int main(){
    //ans=h/3 * [ (y0 + yn) + 4 (y1+ y3 + .. + yn-1) +2 (y2 + y4 + .. yn-2)]
    //yx=f(x)
    //h=b-a/n
    double a=0,b=1,h=1.0/4.0,n=(b-a)/h;
    simpsonArea(h,n);
    return 0;
}
