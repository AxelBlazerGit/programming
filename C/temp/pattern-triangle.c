#include <stdio.h>
void UpperDiamond(int n) {
    int i, j;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");//leading space
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");//print star
        }
        printf("\n");
    }
}
void LowerDiamond(int n) {
    int i, j;

    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");//leading space
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");//print star
        }
        printf("\n");
    }
}
int main(){
    int n;

    printf("Enter rowCount: ");
    scanf("%d", &n);
    if (n>0){
    UpperDiamond(n);
    LowerDiamond(n);
    }else{
        printf("Faulty RowCount!");
    }
    return 0;
}
//to print first 7 digits of float type => %.7f,var