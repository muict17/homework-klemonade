#include <stdio.h>
int main()
{
    int w,h;
    scanf("%d %d",&w,&h);
    if (w!=h || w<0 || h<0)
    {
        printf("This is not identity matrix!");
        return 0;
    }
    int a[h][w];
    int i,j;
    for (i=0;i<h;i++)
    {
        for (j=0;j<w;j++)
        {
            printf("Input value of the matrix A at [%d] [%d]",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<h;i++)
    {
        for (j=0;j<w;j++)
        {
            if (i==j)
            {
                if (a[i][j]!=1)
                {
                    printf("This is not identity matrix!");
                    return 0;
                }
            }
            else 
            {
                if (a[i][j]!=0)
                {
                    printf("This is not identity matrix!");
                    return 0;
                }
            }
        }
    }
    printf("This is identity matrix\nThe Matrix is :\n");
    for (i=0;i<h;i++)
    {
        for (j=0;j<w;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}