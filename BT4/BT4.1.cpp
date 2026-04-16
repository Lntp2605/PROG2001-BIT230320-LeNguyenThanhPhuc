#include <ctime>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <bits/locale_classes.h>

int main() {
    int a, b, c;
    printf("Enter 3 integer numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a<b && a<c ) {
        printf("%d is a least number\n",a);
    }
    else if (b<c && b<a) {
        printf("%d is b least number\n",b);
    }
    else {
        printf("%d is c least number\n",c);
    }

    if (a==0 || b==0) {
        printf("ptrinh vo so nghiem\n");
    }
    else {
        printf("x = %d \n",-b/a);
    }

    int z;
    printf("Enter day\n");
    scanf("%d",&z);
    switch (z) {
        case 1: printf("Sunday\n");
            break;
        case 2: printf("Monday\n");
            break;
        case 3: printf("Tuesday\n");
            break;
        case 4: printf("Wednesday\n");
            break;
        case 5: printf("Thursday\n");
            break;
        case 6: printf("Friday\n");
            break;
        case 7: printf("Saturday\n");
            break;
        default: printf("Not a valid date\n");
    }

    int n;
    int S = 0;
    printf("Enter n\n");
    scanf("%d",&n);
    for (int i=0; i<=n; i++) {
        S += i;
    }
    printf("S=%d",S);

    int a1, reverse=0;
    printf("Enter a number\n");
    scanf("%d",&a1);
    while (a1 != 0) {
        int digit = a1 % 10;
        reverse = reverse*10 + digit;
        a1=a1/10;
    }
    printf("so dao nguoc= %d\n",reverse);

    int a2;
    do {
        printf("Enter a number(1-100)\n");
        scanf("%d",&a2);
    } while (a2 <1 || a2 > 100);
    printf("Number=%d\n",a2);

    return 0;




}
