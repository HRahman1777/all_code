#include <stdio.h>

int main()
{
    int n, first;

    scanf("%d", &n);

    first = n;

    while(first >= 10)
    {
        first = first / 10;
    }

    printf("First digit = %d", first);

    return 0;
}
