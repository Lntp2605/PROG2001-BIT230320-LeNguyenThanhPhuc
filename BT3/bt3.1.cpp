#include <ctime>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <bits/locale_classes.h>
int globalVar = 100;
void display() {
    printf("globalVar = %d\n", globalVar);
}
void increment() {
    static int counter = 0;
    counter++;
    printf("Counter = %d\n", counter);
}
void increment2() {
    int counter = 0;
    counter++;
    printf("Counter = %d\n", counter);
}
int main() {
    char str1[100] = "Hello ";
    char str2[] = "World";

    strcat(str1, str2);
    printf("%s\n", str1);

    time_t current_time;
    time(&current_time);
    printf("ctime is %s\n", ctime(&current_time));

    char c = 'a';
    if (isalpha(c)) {
        printf("%c\n", c);
    }

    int x = 10;
    {
        int y = 20;
        printf("x = %d,y = %d\n", x, y);
        {
            int z= 30;
            printf("x = %d,y = %d,z = %d", x, y, z);
        }
    }
    printf("x = %d\n",x);

    printf("Global Variable = %d\n",globalVar);
    display();

    increment();
    increment();
    increment();

    int a1 =10;
    printf("a1 = %d\n", a1);
    {
        int a1 = 20;
        printf("a1 = %d\n", a1);
    }
    printf("a1 = %d\n", a1);

    int a2 = 120;
    {
        printf("a2 = %d\n", a2);
    }

    int x1, y1, z1;
    printf("Nhap so:");
    scanf("%d%d%d", &x1, &y1, &z1);
    if (x1 > 0 && z1 > 0 && y1 > 0) {
        printf("all positive");
    }
    else {
        printf("all not positive");
    }


    return 0;
}
