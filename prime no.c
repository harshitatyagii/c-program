#include <stdio.h>
#include <math.h>
void main()
{
    int num,i,flag=0;
    printf ("enter a numbers");
    scanf("%d",&num);
for(i=2;i<sqrt(num);i++)
{
if(num%i==0)
flag=1;
break;
}
if (flag==1)
{
    printf("not prime");
    }
    else{
        printf("number is prime");
    }
    return 0;
}
