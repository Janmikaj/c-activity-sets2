
//9. Write a C program to find the [square root] of a number.
#include<stdio.h>
#include<math.h>
float input()
{
    int x;
    printf("enter the value:");
    scanf("%d",&x);
    return x;
}
float mysqrt(float n)
{
     float x;
      x=n*1.0/2;
    
    while(x*x!=n)
    {
        if(x*x>n-0.001 && x*x<n+0.001)
        {
            return x;
        }
        if(x*x>n)
        {
            x=(x+n/x)/2;
        }
        else
        {
            x=x+x/n;
        }
  }
        return x;
    }

void output(float x, float root)
{
    printf("sqrt of %.2f is %.2f\n",x,root);
}
int main(void)
{
    float n,root;
    n=input();
    root=mysqrt(n);
    output(n,root);
}