#include<stdio.h>
#include <cs50.h>
int main(void)
{
    // asks size of grid
    int n;
    do
    {
        n = get_int("size: ");
    }
     while (n < 3);
     
    //prints de colums
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++ )
        {
            printf("#");
        }
        printf("\n");
    }

}