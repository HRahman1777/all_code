#include<stdio.h>
int main()
{
    int n, i, n1, n2;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d %d", &n1, &n2);
        if(n1 > n2)
        {
            printf(">\n");
        }
        else if(n1 < n2)
        {
            printf("<\n");
        }
        else if(n1 == n2)
        {
            printf("=\n");
        }
    }
    return 0;
}
