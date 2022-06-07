#include <cs50.h>
#include <stdio.h>

void sum(int a, int b);
void division(int a, int b);
void multiplication(int a, int b);
void subtraction(int a, int b);
void modulus(int a, int b);

int main(void)
{
    // prompt user for a
    int a = get_int("a: ");
    // prompt user for b
    int b = get_int("b: ");
    sum(a, b);
    division(a, b);
    multiplication(a, b);
    subtraction(a, b);
    modulus(a, b);
}

// create a function
void sum(int a, int b)
{
    printf("a + b = %i\n", a + b);
}

// create a function
void division(int a, int b)
{
    printf("a / b = %i\n", a / b);
}

// create a function
void multiplication(int a, int b)
{
    printf("a * b = %i\n", a * b);
}

// create a function
void subtraction(int a, int b)
{
    printf("a - b = %i\n", a - b);
}

// create a function
void modulus(int a, int b)
{
    printf("a & b = %i\n", a % b);
}