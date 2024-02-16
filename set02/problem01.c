//1.  Write a program to find the area of a triangle.
#include <stdio.h>
void input(float *base, float *height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);
void input(float *base, float *height) 
{
    printf("Enter the base and height of the triangle: ");
    scanf("%f %f", &*base, &*height);
}
void find_area(float base , float height, float *area)  
{
    *area = (base + height)/2;
}
void output(float base, float height, float area)
{
    printf("The area of triangle is %f\n", area);
}
int main() 
{
    float base, height, area;
    printf("Enter the Base and Height of the Triangle:\n");
    input(&base, &height);
    find_area(base, height, &area);
    output(base, height, area);
    return 0;
}