//wap to convert a given string into uppercase
#include <stdio.h>
int main()
{
    char a[]="Nikhil";
    int i=0;
    while(a[i]!='\0')
    {
        if((a[i]>='a')&&(a[i]<='z'))
        {
            a[i]=a[i]-32;
      }
      i++;
    }
    printf("\nNew string is %s",a[i]);
}