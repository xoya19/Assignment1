#include<stdio.h>
int main()
{
    int i,num;
    int count=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(i=2;i<num/2;i++)
    {
        if(num%i==0)
        {
            count=count+1;
            break;
        }
    }
    if(count==0)
    {
        printf("%d is a Prime number.\n",num);
    }
    else
    {
        printf("%d is NOT Prime number.",num);
    }
    return 0;
}