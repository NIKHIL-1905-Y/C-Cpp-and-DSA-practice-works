//04. Write a function to print first N natural numbers (TSRN)
#include <stdio.h>
void nature(int n);

int main()
{
    int n;
    printf("Enter the number upto which we have to print values\n");
    scanf("%d",&n);
    nature(n);
    return 0;

}
void nature(int x)
{
    int i;
    for(i=1;i<=x;i++){
        printf("%d\n",i);
    }
}