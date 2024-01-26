#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Person {
    int age;
} Person;

Person* dumb() {
    Person* p = malloc(sizeof(Person));
    p->age = 20;
    return p;
}

int main() {
    Person* p = dumb();
    printf("%d\n", p->age);
    free(p);

    int x;
    char words[100];
    x = 100;
    
    strcpy(words, "Hello world! This is a really long message");

    printf("%s %d\n", words, x);
}