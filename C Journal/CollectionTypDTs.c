enum Days{
    MONDAY,
    TUESDAY,
    SUNDAY
};

typedef struct
{
    char name[50];
    int age;
    float height;
} Person;

union CUnion{
    int i;
    float f;
    char c;
};

#include<stdio.h>
int main(){
    enum Days test;
    test = MONDAY;
    printf("Days test = %c\n",test);

    Person john;
    //strcpy(john.name, "John");
    john.age = 30;
    john.height = 5.8;

    union CUnion u;
    u.i = 42;
    printf("%d\n", u.i); // Output: 42
    u.f = 3.14;
    printf("%f\n", u.f); // Output: 3.140000
    u.c = 'A';
    printf("%c\n", u.c); // Output: A
    printf("%d\n", u.i); // Output: 65 (the ASCII code for 'A')


    return 0;
}
