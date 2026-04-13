#include <iostream>
#include <stdio.h>

int main() {

    printf("Chào mừng bạn đến với lập trình C!\n");
    printf("Bắt đầu hành trình của bạn ngay hôm nay\n");

    float pi = 3.14159;
    printf("%f\n", pi);
    printf("%.1f\n", pi);
    printf("%.4f\n", pi);

    int a = 2;
    float b = 3.14;
    char c = 'a';
    bool d = true;
    printf("%d, %.2f, %c, %d\n", a, b, c, d);


    int age = 20;
    float myscore = 8.5;
    char grade = 'A';
    // int age = 10;     // sai: bắt đầu bằng số
    // float my-score = 8.5;    // sai: chứa ký tự '-'
    // int int = 5;       // sai: trùng từ khóa int
    printf("%d, %.1f, %c \n", age, myscore, grade);

    const int a1 = 5;
    const float a2 = 6;
    const char str[] = "eihreiuhfir";
    printf("%d, %.1f, %s \n", a1, a2, str);


    char aa1;
    int aa2;
    float aa3;
    bool aa4;
    printf("nhap:");
    scanf("%c", &aa1);
    printf("nhap:");
    scanf("%d", &aa2);
    printf("nhap:");
    scanf("%f", &aa3);
    printf("nhap:");
    scanf("%d", &aa4);

    printf("%c, %d, %f, %d", aa1, aa2, aa3, aa4);




    return 0;
}
