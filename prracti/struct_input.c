#include <stdio.h>

struct Employee
{
    char name[20];
    int age;
};

int main()
{
    struct Employee e;

    printf("Enter your name\n");
    fflush(stdin);
    fgets(e.name,20,stdin);

    printf("Enter your age\n");
    scanf("%d",&e.age);

    printf("Name=%s Age=%d\n",e.name,e.age);

    return 0;


}