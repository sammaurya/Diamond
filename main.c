#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k,i,j,space,x=-1,y=3,z=0;
    printf("\n\tEnter n : ");
    do
    {
        scanf("%d",&n);
        if(n%2==0)
        {
            printf("\n\t N must be Odd\nEnter again : ");
        }
    }while(n%2==0);
    k=1;
    while(y!=n)
    {
        x++;
        y=y+2;
    }
    space=n-(n+1)/2;
    for(i=0;i<n;i++)
    {
        j=space-i;
        if(j<0)
        {
            j=0-j;
            if(z==0)
            {
                k=x;
            }
            k=k-z;
            z=4;
        }
        for(j;j>0;j--)
        {
            printf("   ");
        }
        for(j=0;j<i+k;j++)
        {
            printf(" * ");
        }
        printf("\n");
        k++;
    }
    return 0;
}
