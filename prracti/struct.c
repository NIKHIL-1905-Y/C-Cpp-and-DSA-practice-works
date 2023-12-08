#include <stdio.h>

struct Employee
{
    char name[20];
    int salary;
    int age;

};

int main()
{
    // struct Employee e={"NIkhil",1000000,23};
    // printf("Name=%s\n",e.name);
    // printf("Salary=%d\n",e.salary);
    // printf("Age=%d\n",20);

    //Another way of Initialization (Designated Initialization)
     struct Employee e={.name="Nandani",.age=10,.salary=200000};
    printf("Name=%s\n",e.name);
    printf("Salary=%d\n",e.salary);
    printf("Age=%d\n",20);

}