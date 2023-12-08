//wap to count vowels in aString
#include <stdio.h>
int main()
{
    char a[]="Prateek";
    int i,count=0;
    for(i=0;a[i]!=0;i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            count++;
        }
    }
    printf("The total number of vowels in a character are %d",count);

}
