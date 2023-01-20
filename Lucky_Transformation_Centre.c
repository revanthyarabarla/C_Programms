#include<stdio.h>
int main()
{
    int n,k,i,j,a[10],count=0;
    printf("Enter number of digits: ");
    scanf("%d",&n);
    printf("Enter Times to perform: ");
    scanf("%d",&k);
    for (i=0;i<n;i++)
    {
        printf("Enter Number-%d: ",i+1);
        scanf("%d",&a[i]);
        if (a[i]==4)
        {
            count++;
        }
    }
    for (i=0;i<k;i++)
    {
        if (count%2!=0)
        {
            for (j=0;j<n;j++)
            {
                if (a[j]==4)
                {
                    if (a[j+1]==7)
                    {
                        a[j+1]=4;
                        count++;
                        break;
                    }
                }
            }
        }
        else
        {
            for (j=0;j<n;j++)
            {
                if (a[j]==4)
                {
                    if (a[j+1]==7)
                    {
                        a[j]=7;
                        count++;
                        break;
                    }
                }
            }
        }
    }
    printf("\nLucky Number Is: ");
    for (i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}




