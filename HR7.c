#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int x, i, j, k;
    scanf("%d", &x);
    for(i = 1; i <= x; i++)
    {
        for(j = 1; j <= x-i; j++)
        {
            printf(" ");
        }
        for(k = 1; k <= i; k++)
        {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}
