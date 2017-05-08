//FULL PYRAMID USING '*'
#include <stdio.h>
int main()
{
    int i, space, rows, k=0;

    printf("Enter the number of rows: ");//number of rows
    scanf("%d",&rows);

    for(i=1; i<=rows; ++i, k=0)
    {
        for(space=1; space<=rows-i; ++space)
        {
            printf("  ");
        }

        while(k != 2*i-1)   //PRINTS STAR AT ODD PLACES.
        {
            printf("* ");
            ++k;
        }

        printf("\n");
    }
    
    return 0;
}