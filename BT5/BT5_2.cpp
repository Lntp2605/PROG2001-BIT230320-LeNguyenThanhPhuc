#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define pi 3.14

int Tong(int x) {
    int S = 0;
    for (int i = 1; i <= x; i++) {
        S += i;
    }
    return S;
}
int Max(int a, int b, int c) {
    int max;
    if (a > b && a > c) {
        return max = a;
    }
    else if (b > c) {
        return max = b;
    }
    else {
        return max = c;
    }
}
void trungbinh (int *a, int *b, int *c, float *result) {
    *result = (*a + *b + *c)/3;
}

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    int S = Tong(x);
    printf("The sum is: %d\n", S);

    int a,b,c;
    printf("Enter 3 numbers:\n");
    scanf("%d%d%d", &a, &b, &c);
    int max = Max(a, b, c);
    printf("The max is: %d\n", max);

    int a1, b1, c1;
    float result;
    printf("Enter 3 numbers:\n");
    scanf("%d%d%d", &a1, &b1, &c1);
    trungbinh (&a1, &b1, &c1, &result);
    printf("The result is: %.2f\n", result);
    return 0;
}