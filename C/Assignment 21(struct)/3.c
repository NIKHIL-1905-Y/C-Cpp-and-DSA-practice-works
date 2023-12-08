//3. Write a function to display employee data. [ Refer structure from question 1 ]
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
void display(struct Employee e)
{
    printf("Employe Id =%d\n",e.id);
    printf("Employe Name=%s\n",e.name);
    printf("Employee Salry=%d\n",e.salary);
}
