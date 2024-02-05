//11.Write a C program to find the sum of 2 complex numbers
#include <stdio.h>
struct complex
{
    float real;
    float img;
};
typedef struct complex Complex;
int main()
{
    Complex c1,c2,sum,diff;
    printf("Enter the real part\n");
    scanf("%f",&c1.real);
    printf("Enter the img part\n");
    scanf("%f",&c1.img);
    printf("c1 is %f+i%f\n",c1.real,c1.img);
    printf("Enter the real part\n");
    scanf("%f",&c2.real);
    printf("Enter the img part\n");
    scanf("%f",&c2.img);
    printf("c2 is %f+i%f\n",c2.real,c2.img);
    sum.real=c1.real+c2.real;
    sum.img=c1.img+c2.img;
    printf("The sum is %f+i%f\n",sum.real,sum.img);
    return 0;
}