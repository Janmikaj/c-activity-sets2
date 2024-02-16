//12. Write a C program to find the sum of _n_ complex numbers
#include <stdio.h>

struct _complex
 {
    float real, imaginary;
};

typedef struct _complex Complex;

int get_n() 
{
    int n;
    printf("Enter the number of complex numbers: ");
    scanf("%d", &n);
    return n;
}

Complex input_complex() 
{
    Complex c;
    printf("Enter real part: ");
    scanf("%f", &c.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c.imaginary);
    return c;
}

void input_n_complex(int n, Complex c[n])
 {
    for (int i = 0; i < n; i++)
     {
        printf("For complex number %d:\n", i + 1);
        c[i] = input_complex();
    }
}

Complex add(Complex a, Complex b) 
{
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}

Complex add_n_complex(int n, Complex c[n]) 
{
    Complex result = {0, 0}; 
    for (int i = 0; i < n; i++) 
    {
        result = add(result, c[i]);
    }
    return result;
}
    
void output(int n, Complex c[n], Complex result) 
{
    for (int i = 0; i <= n; i++)
    {
        for(int i=0; i<n; i++)  
    {
        if(i != 0) 
            printf("\n");
        
        printf("Real part of the %dth term is %.2f\n", i+1, c[i].real);
        printf("Imaginary part of the %dth term is %.2f\n", i+1, c[i].imaginary);
    }

    printf("\nThe real part of the sum is: %.2f\n", result.real);
    printf("The imaginary part of the sum is: %.2f\n", result.imaginary);
    }
   
}

int main() 
{
    int n;
    n = get_n();
    Complex numbers[n];
input_n_complex(n, numbers);
    Complex sum = add_n_complex(n, numbers);
    output(n, numbers, sum);

    return 0;
}