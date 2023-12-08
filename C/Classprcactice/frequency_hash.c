#include <stdio.h>
int main()
{
    int a[]={1,2,3,4,5,1,2,3,4,5,6,9,10,12};
    int hash[100]={0};
    int i;
    for(i=0;i<14;i++)
    {
        hash[a[i]]++;
    }
    for(i=0;i<100;i++)
    {
        if(hash[i]!=0){

        printf("the frequency of %d is %d\n",i,hash[i]);
    }
}
}