//04.  Write a program to find Sum of composite number in an array of different numbers entered by the user.
#include <stdio.h>

int input_array_size() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    return n;
}

void input_array(int n, int a[n]) {
    for (int i = 0; i < n; i++) {
        printf("Enter the array value at index %d: ", i);
        scanf("%d", &a[i]);
    }
}

int is_composite(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 1;
        }
    }
    return 0;
}

int sum_composite_numbers(int n, int a[n]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (is_composite(a[i])) {
            sum += a[i];
        }
    }
    return sum;
}

void output(int sum) {
    printf("The sum of composite numbers is %d\n", sum);
}

int main() {
    int n = input_array_size();

    int a[n];
    input_array(n, a);

    int result = sum_composite_numbers(n, a);

    output(result); 

    return 0;
}