#include <stdio.h>
int main()
{
    char a[]="ababcac";
    int hash[200]={0};
    int i;
    for(i=0;a[i]!='\0';i++)
    {
        hash[a[i]]++;
    }
    for(i=0;i<123;i++)
    {
        if(hash[i]>0){

        printf("%c=%d \n",i,hash[i]);
    }
}
}