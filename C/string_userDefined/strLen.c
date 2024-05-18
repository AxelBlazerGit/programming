#include <string.h>
#include <stdio.h>
#include<stdlib.h>
void myLen(char *str) {
    int len = 0;
    while (*str != '\0') {
        str++;
        len++;
    }
    printf("\nLength = %d", len);
    return;
}
int main() {
    while (1) {
        char str[30];
        printf("\n1. Sting Length : ");
        printf("\n2. Sting Comparison : ");
        printf("\n3. Sting Concatenation : ");
        printf("\n4. Sting Copy : ");
        printf("\n5. Exit..");
        printf("\nEnter Your Choice.. : ");
        int choice;
        scanf("%d",&choice);
        // printf("\ncheck exit condition : %d\n",(str[0] == 'Y' && (str[1] == '\n' || str[1] == '\0'));
        // if (str[0] == 'Y' && str[1] == '\n') {
        //     printf("Exited from Program..\n");
        //     break;
        // }
        switch(choice){
            case 1:
                char str[30];
            printf("\nEnter a String : ");
                fgets(str, 30, stdin);
                myLen(str);
                break;
            default:
                printf("\nInvalid Input..");
                break;
        }

        // myLen(str);
        // for(int i=0;i<=strlen(str);i++) printf("%c",str[i]);
    }
    return 0;
}
