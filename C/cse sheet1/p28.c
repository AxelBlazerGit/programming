#include <stdio.h>

void extractInitials(char str[]) {
    printf("Input: %s\n", str);
    printf("Output: %c", str[0]);
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == ' ') {
            printf("%c", str[i + 1]);
        }
    }
    printf("\n");
}

int main() {
    char str[] = "Kalyani Government Engineering College";
    extractInitials(str);
    return 0;
}
