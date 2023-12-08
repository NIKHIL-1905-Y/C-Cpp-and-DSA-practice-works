#include <stdio.h>
int swap(int a, int b)
{
    int t=0;
    t=a;
    a=b;
    b=t;
    printf("a=%d and b=%d\n",a,b);

}
int main()
{
    int x=5,y=10;
    printf("Value before swap x=%d y=%d\n",x,y);
    swap(x,y);
    printf("Value after swap x=%d y=%d\n",x,y);
    return 0;
}