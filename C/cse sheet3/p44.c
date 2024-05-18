// 44. Write a program in C to copy the content of a file to an another file
#include<stdio.h>
int main(){
    FILE *readS;//file ptr
    readS=fopen("origin.txt","rb");
    FILE *writeS;//write ptr
    writeS=fopen("destination.txt","wb");
    char ch;
    printf("Initiating Copying...\n");
    while((ch=fgetc(readS))!=EOF) fputc(ch,writeS);
    fclose(readS);
    fclose(writeS);
    printf("File copied successfully.\n");
    return 0;
}