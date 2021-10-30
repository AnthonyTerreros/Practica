#include <stdio.h>

typedef struct {
    char name[40];
    int age;
} Human;

void show_data(Human *h){
    printf("Name: %s, Age: %d\n", h->name, h->age);
}

void sayHello(){
    printf("Hello, World!");
}