#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


#include <stdio.h>

int main() {
    FILE *f1, *f2, *f3, *f5;
    char buffer[100];
    char buffer1[100];

    f1=fopen("test.txt", "w");
    if (f1==NULL) {
        printf("Ko tao dc file\n");
    }
    else {
        printf("Tao file thanh cong\n");
        fclose(f1);
    }


    f2=fopen("D:\\test1.txt", "w");
    if (f2==NULL) {
        printf("Ko tao dc file\n");
    }
    else {
        printf("Tao file thanh cong\n");
        fclose(f2);
    }
    f2=fopen("D:\\test1.txt", "a");
    printf("Nhap\n");
    fgets(buffer,sizeof(buffer), stdin);
    fprintf(f2,"%s",buffer);
    fclose(f2);
    f2=fopen("D:\\test1.txt", "r");
    if (f2==NULL) {
        printf("Ko mo dc file\n");
        return 1;
    }
    printf("Trong file:\n");
    while(fgets(buffer,sizeof(buffer), f2) != NULL) {
        printf("%s", buffer);
    }
    printf("\n");
    fclose(f2);

    int countLetter = 0, countDigit = 0;
    char letter;
    f2=fopen("D:\\test1.txt", "r");
    if (f2==NULL) {
        printf("Ko mo dc file\n");
        return 1;
    }
    while ((letter = fgetc(f2)) != EOF) {
        if (isalpha(letter)) {
            countLetter++;
        }
        if (isdigit(letter)) {
            countDigit++;
        }
    }
    fclose(f2);
    f3=fopen("text2.txt", "w");
    if (f3==NULL) {
        printf("Ko mo dc file\n");
        return 1;
    }
    fprintf(f3,"So letter:%d\n",countLetter);
    fprintf(f3,"So digit:%d\n",countDigit);
    fclose(f3);
    f3=fopen("text2.txt", "r");
    if (f3==NULL) {
        printf("Ko mo dc file\n");
        return 1;
    }
    while(fgets(buffer1,sizeof(buffer1), f3) != NULL) {
        printf("%s", buffer1);
    }
    fclose(f3);

    return 0;
}