#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for (i=0;i<n;i++)
    {
        a[i]=0;
    }
    int x;
    int j;
    for (i=0;i<n;i++)
    {
        scanf("%d",&x);
        for (j=0;j<n;j++)
        {
            if (j==x)
            {
                a[j]++;
            }
        }
        
    }
    int mxindex,mxcnt=0;
    for (i=0;i<n;i++)
    {
        if (mxcnt < a[i])
        {
            mxcnt = a[i];
            mxindex = i;
        }
        //printf("%d %d\n",i,a[i]);
    }
    printf("The number %d is mode with %d elements in this set.",mxindex,a[mxindex]);

}