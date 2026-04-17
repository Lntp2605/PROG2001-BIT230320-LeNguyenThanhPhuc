#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define pi 3.14

int add(int a, int b) {
    return a+b;
}
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
int findMax (int x, int y, int z) {
    if (x>y && x>z) {
        return x;
    }
    else if (y>z) {
        return y;
    }
    else{
        return z;
    }
}
void printMessage() {
    printf("Hello World\n");
}
float caculateArea(float radius) {
    return radius * radius * pi;
}
void modifyArray(int * arr, int size) {
    for (int i=0; i<size; i++) {
        arr[i] *= 2;
    }

}
int main() {
    int num1 = 5, num2 = 10;
    int sum = add(num1, num2);
    printf("sum=%d\n",sum);

    int a = 5, b = 10;
    printf("a=%d b=%d\n",a,b);
    swap(&a,&b);
    printf("a=%d b=%d\n",a,b);

    int x=5, y=10, z=20;
    int max = findMax(x,y,z);
    printf("max=%d\n",max);

    printMessage();

    float radius = 5.0;
    float area = caculateArea(radius);
    printf("area=%.2f\n",area);

    int numbers[] = {1,2,3,4,5};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    printf("Original:\n");
    for (int i=0; i<size; i++) {
        printf("%d ",numbers[i]);
    }
    printf("\n");
    modifyArray(numbers,size);
    printf("Modified Array:\n");
    for (int i=0; i<size; i++) {
        printf("%d ",numbers[i]);
    }
    printf("\n");
    return 0;
}