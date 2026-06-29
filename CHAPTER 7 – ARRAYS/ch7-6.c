#include <stdio.h>

int main(){
    int ary[3][2];
    //printf("enter 2 numbers:");
    
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<2;j++)
        {
            printf("enter the value of array[%d][%d]:\n", i, j);
            scanf("%d", &ary[i][j]);
        }
    
    }
        
    for (int i=0;i<3;i++)
        {
            for (int j=0;j<2;j++)
            {
                printf(" the value of array[%d][%d] is: %d\n", i, j, ary[i][j]);
            }
        
        }

    for (int i=0;i<3;i++)
        {
            for (int j=0;j<2;j++)
            {
                printf("%d", ary[i][j]);
            }
           printf("\n");
        }
    return 0;
}