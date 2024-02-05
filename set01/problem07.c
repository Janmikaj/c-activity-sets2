//7. Write a C program to find sum of all natural numbers until n
#include <stdio.h>
int input_n();
int sum_n_nos(int n);
void output(int n, int sum);
int main()
{
    int n,sum;
    n=input_n();
    sum=sum_n_nos(n);
    output(n,sum);
    return 0;
}
int input_n()
{
    int x;
    printf("Enter the value of x\n");
    scanf("%d",&x);
    return x;
}
int sum_n_nos(int n)
{
    int sum=0;
    int i;
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
}
void output(int n, int sum)
{
    printf("The sum of natural numbers till n of %d is %d",n,sum);
}