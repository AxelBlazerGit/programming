// Online C compiler to run C program online
#include <stdio.h>
int secondMax(int arr[],int n){
    int maxx,sMaxx=arr[0];
    maxx=arr[0];
    for(int i=0;i<n;i++){
        if(maxx<arr[i]) {sMaxx=maxx;maxx=arr[i];}
        else if(sMaxx<arr[i] && maxx!=arr[i]) sMaxx=arr[i];
    }
    return sMaxx;
}
int main() {
    // Write C code here
    printf("Try programiz.pro");
    int randomArray[] = {5, -3, 10, 7, -2, 5, 8, -3, 0, 7, -1, 10, 3, 8, -2, 4, 6, 1, 4, -1};

    printf("\nSecond Max of the Array : %d\n",secondMax(randomArray,20));
    return 0;
}