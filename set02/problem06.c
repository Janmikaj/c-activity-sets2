// 06. Write a program to reverse a string.
#include <stdio.h>
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

int main() 
{
    char input[100];  
    char reversed[100];

    input_string(input);
    str_reverse(input, reversed);
    output(input, reversed);

    return 0;
}


void input_string(char *a) 
{
    printf("Enter a string: ");
    scanf("%s", a);
}

// Function to reverse a string
void str_reverse(char *str, char *rev_str)
{
    int length;
    while (str[length] != '\0') 
    {
        length++;
    }

    int i, j;
    for (i = length - 1, j = 0; i >= 0; i--, j++) 
    {
        rev_str[j] = str[i];
    }
    rev_str[j] = '\0';
}

void output(char *a, char *reverse_a) 
{
    printf("Original String is %s\n", a);
    printf("Reversed String is %s\n", reverse_a);
}