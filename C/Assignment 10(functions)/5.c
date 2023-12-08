//5. Write a function to print first N odd natural numbers. (TSRN)
#include <stdio.h>
void nature(int n);

int main()
{
    int n;
    printf("Enter the number upto which we have to print odd values\n");
    scanf("%d",&n);
    nature(n);
    return 0;

}
void nature(int x)
{
    int i;
    for(i=1;i<=x;i++){
        if(i%2==1){
        printf("%d\n",i);
        }
    }
}
