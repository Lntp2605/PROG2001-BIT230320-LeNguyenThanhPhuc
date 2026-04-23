#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


#include <stdio.h>
struct Student {
    char name[20];
    int age;
};
struct Student1 {
    char name[20];
    int age;
};

int main() {
    FILE *f1, *f2, *f3, *f5;
    f3 = fopen("text3.txt", "w");
    if (f3==NULL) {
        printf("Error opening file");
        return 1;
    }
    struct Student1 student1 = {"Anh", 13};
    fwrite(&student1, sizeof(struct Student1), 1, f3);
    fclose(f3);
    f3 = fopen("text3.txt", "w");
    if (f3==NULL) {
        printf("Error opening file");
        return 1;
    }
    fread(&student1, sizeof(struct Student1), 1, f3);
    printf("%s, %d\n", student1.name, student1.age);


    int n;
    char buffer[100];
    printf("Enter number of student \n");
    scanf("%d",&n);
    struct Student student [100];
    for (int i=0;i<n;i++) {
        printf("Enter name of student %d:\n",i+1);
        scanf("%s",&student[i].name);
        printf("Enter age of student %d:\n",i+1);
        scanf("%d",&student[i].age);
    }

    f1 = fopen("text1.txt", "w");
    if (f1==NULL) {
        printf("Error opening file");
        return 1;
    }
    for (int i=0;i<n;i++) {
        fprintf(f1,"%s %d \n",student[i].name,student[i].age);
    }
    fclose(f1);
    f1 = fopen("text1.txt", "r");
    if (f1==NULL) {
        printf("Error opening file");
        return 1;
    }
    printf("Danh sach sinh vien\n");
    while(fgets(buffer,sizeof(buffer), f1) != NULL) {
        printf("%s", buffer);
    }
    fclose(f1);


    int m;
    printf("Enter number of digit\n");\
    scanf("%d",&m);
    int digit[100];
    f2 = fopen("text2.txt", "w");
    if (f2==NULL) {
        printf("Error opening file");
        return 1;
    }
    printf("Nhap cac phan tu\n");
    for (int i=0;i<m;i++) {
        scanf("%d",&digit[i]);
    }
    fwrite(&m, sizeof(int), 1, f2);
    fwrite(digit, sizeof(int), m, f2);
    fclose(f2);
    f2 = fopen("text2.txt", "r");
    if (f2==NULL) {
        printf("Error opening file");
        return 1;
    }
    fread(&m, sizeof(int), 1, f2);
    fread(digit, sizeof(int), m, f2);
    printf("Mang:\n");
    for (int i=0;i<m;i++) {
        printf("%d", digit[i]);
    }
    fclose(f2);




    return 0;
}