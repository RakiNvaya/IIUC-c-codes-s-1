#include<stdio.h>
int main()
{
    int n,num;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);

        if(num>0 && num%2==0)
        {
            printf("EVEN POSITIVE\n");
        }
        else if(num>0 && num%2!=0)
        {
            printf("ODD POSITIVE\n");
        }
        else if(num<0 && num%2==0)
        {
            printf("EVEN NEGATIVE\n");
        }
        else if(num<0 && num%2!=0)
        {
            printf("ODD NEGATIVE\n");
        }
        else
        {
            printf("NULL\n");
        }
    }
    return 0;
}
