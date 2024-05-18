#include <stdio.h>

int reverseNumber(int num) {
    int reversedNum = 0;
    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    return reversedNum;
}

int main() {
    int num;
    printf("Enter Number to Reverse : ");
    scanf("%d", &num);
    printf("Reverse of %d is %d\n", num, reverseNumber(num));
    return 0;
}
