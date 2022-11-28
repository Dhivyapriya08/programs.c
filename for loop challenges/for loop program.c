4)#include <stdio.h>

int main()
{
    int i,n,sum1=0,sum2=0;
    
    for(i=1;i<=17;i++)
    {
        if(i%2==0)
        {
            sum1 = sum1 + i;
        }
        else if(i%2!=0)
        {
            sum2 = sum2 + i;
        }
        
    }
     printf("sum of even integers: %d\n",sum1);
     printf("sum of odd integers: %d\n",sum2);
    return 0;
}

3)#include <stdio.h>

int main()
{
    int i,n,remainder=0;
    printf("Enter the values");
    scanf("%d",&n);
    for(i=1;i<=20;i++)
    {
        if(n%2!=0)
        {
            n++;
            printf("prime number");
        }
        else
        {
        printf("not a prime number");
        }
        break;
    }
    return 0;
}
6)2)#include <stdio.h>

int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
6)3)#include <stdio.h>

int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=4;j>=i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

6)1)
#include<stdio.h>
int main()
{
  int i,j;
  for(i=1;i<=4;i++)
{
  for(j=1;j<=10;j++)
{
  printf("*");
}
 printf("\n");
}
return 0;
}

1)#include <stdio.h>

int main()
{
    int limit,count=0,n=0,zero=0,i;
    printf("Enter the limit");
    scanf("%d",&limit);
    
    printf("Enter %d numbers",limit);
    
    while(limit)
    {
       scanf("%d",&i);
        
       if(i>0)
      {
         count++;
      }
      else if(i<0)
      {
          n++;
      }
      else
      {
          zero++;
      }
      limit--;
    }
    printf("%d\n",count);
    printf("%d\n",n);
    printf("%d\n",zero);
    return 0;
}
