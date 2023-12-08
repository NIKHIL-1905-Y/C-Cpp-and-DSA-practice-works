
#include <stdio.h>
void fun();

int main()
{
    fun();
    fun();
    fun();
}
void fun()
{
    static int x=5;
    printf("%d\n",x);

    x++;
}