#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

struct Student {
    int rollNumber;
    char name[50];
};
struct Employee {
    int id;
    char name[50];
    float salary;
};
struct Owner {
    int age;
    char name[50];
};
struct Car {
    char model[50];
    int year;
    struct Owner owner;
};

int main() {
    struct Student student;
    printf("Enter name:\n");
    fgets(student.name, sizeof(student.name), stdin);
    printf("Enter roll number:\n");
    scanf("%d", &student.rollNumber);
    printf("%d\n", student.rollNumber);
    printf("%s\n", student.name);


    int n;
    printf("Enter number of employee:\n");
    scanf("%d", &n);
    getchar();
    struct Employee employee[n];
    for (int i = 0; i < n; i++) {
        printf("Enter name:\n");
        fgets(employee[i].name, sizeof(employee[i].name), stdin);
        printf("Enter id:\n");
        scanf("%d", &employee[i].id);
        printf("Enter salary:\n");
        scanf("%f", &employee[i].salary);
        getchar();
    }
    printf("Employee List\n");
    for (int i = 0; i < n; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: %s\n", employee[i].name);
        printf("ID: %d\n", employee[i].id);
        printf("Salary: %.3f\n", employee[i].salary);
        printf("\n");
    }

    struct Car car;
    printf("Enter model:\n");
    fgets(car.model, sizeof(car.model), stdin);
    printf("Enter year:\n");
    scanf("%d", &car.year);
    getchar();
    printf("Enter owner name:\n");
    fgets(car.owner.name, sizeof(car.owner.name), stdin);
    printf("Enter owner age:\n");
    scanf("%d", &car.owner.age);
    printf("Name: %s\n", car.owner.name);
    printf("Age: %d\n", car.owner.age);
    printf("\n");
    printf("Model: %s\n", car.model);
    printf("Year: %d\n", car.year);
    return 0;
}