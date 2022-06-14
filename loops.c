#include <stdio.h>

void Hello(int n);

int main(void)
{
    Hello(10);
}
void Hello(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Hello\n");
    }
}