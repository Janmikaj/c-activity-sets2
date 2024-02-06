//11. Write a C program to find the sum of 2 complex numbers
#include <stdio.h>
struct _complex 
{
    float real;
    float imag;
};
typedef struct _complex Complex;
Complex input_complex(); 
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);
    

int main()
 {
    Complex a, b, result;
    printf("For first complex number:\n");
    a = input_complex();
    printf("\nFor second complex number:\n");
    b = input_complex();

    result = add_complex(a, b);

    output(a, b, result);

    return 0;
}

Complex input_complex()
 {
    Complex x;
    printf("Enter real part: ");
    scanf("%f", &x.real);
    printf("Enter imaginary part: ");
    scanf("%f", &x.imag);
    return x;
}

Complex add_complex(Complex a, Complex b)
 {
    Complex sum;
    sum.real = a.real + b.real;
    sum.imag = a.imag + b.imag;
    return sum;
}

void output(Complex a, Complex b, Complex sum) 
{
    printf("The sum of ");
    printf("%.f + %.fi and %.f + %.fi is %.f + %.fi\n", a.real, a.imag, b.real, b.imag, sum.real, sum.imag);
}