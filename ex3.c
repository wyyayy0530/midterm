#include<stdio.h>
int main()
{
    unsigned long int a=1;
    unsigned long int c=0-1;
    unsigned long int d=0;
    int b=0;
    while(a !=0) 
    {
        a=a<<1;
        b++;
    }
    printf("unsigned long int is sizeof:%d bit.\nthe max is:%lu,the min is:%lu\n",b,c,d);
    return 0;
}
