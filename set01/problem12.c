//12. Write a C program to find the sum of n complex numbers
#include <stdio.h>

struct _complex 
{
	float real,imaginary;
};
typedef struct _complex Complex;

int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);

int main()
{
    int n;
    n=get_n();
    Complex C[n],sum;
    input_n_complex(n,C);
    sum=add_n_complex(n,C);
    output(n,C,sum);
    return 0;
}

int get_n()
{
	int n;
	printf("Enter size: ");
	scanf("%d",&n);
	return n;
}

Complex input_complex()
{
    Complex r;
    scanf("%f%f",&r.real,&r.imaginary);
    return r;
}

void input_n_complex(int n, Complex c[n])
{
	int i;
	for(i=0;i<n;i++)
	{
		c[i]=input_complex();
	}
}

Complex add_complex(Complex a, Complex b)
{
    Complex sum;
    sum.real=a.real+b.real;
    sum.imaginary=a.imaginary+b.imaginary;
    return sum;
}

Complex add_n_complex(int n, Complex c[n])
{
	int i;
	Complex sum;
	sum.imaginary=0;sum.real=0;
	for(i=0;i<n;i++)
	{
		sum=add_complex(sum,c[i]);
	}
	return sum;	
}

void output(int n, Complex c[n], Complex result)
{
	int i;
    for(i=0;i<n-1;i++)
    {
        printf("%.f+%.fi + ",c[i].real,c[i].imaginary);
    }
    printf("%.f+%.fi is %.f+%.fi",c[n-1].real,c[n-1].imaginary,result.real,result.imaginary);
}