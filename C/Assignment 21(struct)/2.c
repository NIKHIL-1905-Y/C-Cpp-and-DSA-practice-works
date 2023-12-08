//2. Write a function to take input employee data from the user. [ Refer structure from
//question 1 
#include <stdio.h>

struct Employee
{
    int id;
    char name[20];
    int salary;
};

void input(struct Employee *e)
{
    printf("Enter the Employee id\n");
    scanf("%d",&e->id);
    printf("Enter the Employee Name\n");
    fflush(stdin);
    scanf("%s",e->name);
    printf("Enter Employee Salary\n");
    scanf("%d",&e->salary);
    
}