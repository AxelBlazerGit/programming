#include <stdio.h>

int countWords(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == ' ') {
            count++;
        }
    }
    // Add 1 for the last word
    return count + 1;
}

int main() {
    char str[] = "Write a program to count the number of words in a string";
    printf("Number of words: %d\n", countWords(str));
    return 0;
}
