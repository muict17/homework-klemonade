#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    int a[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int tmp;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n-1;j++)
        {
            if (a[j]>a[j+1])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for (i=n-1;i>=0;i--)
    {
        if (a[i]==a[i-1])
        {
            printf("%d",a[i]);
            return 0;
        }
    }
}
