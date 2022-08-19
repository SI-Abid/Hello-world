/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int mat[5][5];
    int i,j,a;
    for (i=0;i<5;i++)
        scanf("%d %d %d %d %d",&mat[i][0],&mat[i][1],&mat[i][2],&mat[i][3],&mat[i][4]);
    for (i=0;i<5;i++)
        for(j=0;j<5;j++)
        {
            if (mat[i][j]==1)
            {
                a=abs(2-i)+abs(2-j);
                break;
            }
        }
    printf("%d",a);
    return 0;
}
