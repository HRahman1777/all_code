#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    double x;
    cin>>x;

    for(int i=0; i<100; i++)
    {
        printf("N[%d] = %.4lf\n", i, x);
        x=x/2;
    }

    return 0;
}
