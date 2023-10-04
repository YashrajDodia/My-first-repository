#include <stdio.h>

void main()
{
    int no_row,c=1,b,i,j;
    printf("Input number of rows: ");
    scanf("%d",&no_row);
    for(i=0;i<no_row;i++)
    {
        for(b=1;b<=no_row-i;b++)
        printf("  ");
        for(j=0;j<=i;j++)
        {
            if (j==0||i==0)
                c=1;
            else
               c=c*(i-j+1)/j;
            printf("% 4d",c);
        }
        printf("\n");
    }
}

