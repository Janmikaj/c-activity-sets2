//8. Write a C program to find sum of n different numbers entered by the user.
#include <stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n], int sum);
void output(int sum);

int main() {
    int n, i = 0, sum = 0;
    n = input_array_size();
    int a[n];
    input_array(n, a);
    sum = sum_n_array(n, a, sum);
    output(sum);
    return 0;
}

int input_array_size() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    return n;
}

void input_array(int n, int a[n]) {
    int i;
    for (i = 0; i < n; i++) {
        printf("Enter the array values: ");
        scanf("%d", &a[i]);
    }
}

int sum_n_array(int n, int a[n], int sum) {
    int i;
    for (i = 0; i < n; i++) {
        sum = sum + a[i];
    }
    return sum;
}

void output(int sum) {
    printf("The array sum is %d\n", sum);
}