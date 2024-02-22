// 07. Write a program to find the area of a triangle.
#include <stdio.h>
typedef struct _triangle {
	float base, altitude, area;
} Triangle;

Triangle input_triangle();
void find_area(int area);
void output(int area);

Triangle input_triangle()
{
    int  base, altitude;
    printf("Enter the value of the base: ");
    scanf("%d", &base);
    
    printf("Enter the value of the altitude: ");
    scanf("%d", &altitude);
    
    Triangle new_tri = {base, altitude};
    return new_tri; 
}

void find_area( int area)
{ 
    int area , base,altitude;
    area = (base*altitude)*0.5;
}
void output(int area)
{
    printf("The area of triangle is %f",area);
}



