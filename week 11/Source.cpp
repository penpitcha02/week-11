#include <stdio.h> 

void add(int a, int b)
{
    printf("Addition is %d\n", a + b);
}
void subtract(int a, int b)
{
    printf("Subtraction is %d\n", a - b);
}
void multiply(int a, int b)
{
    printf("Multiplication is %d\n", a * b);
}

int main()
{ 
    void (*choice[])(int, int) = { add, subtract, multiply };
    unsigned int ch, a, b;

    printf("Enter first number: ");
    scanf_s("%d", &a);

    printf("Enter second number: ");
    scanf_s("%d", &b);

    do
	{
        printf("Enter Choice: 0 for add, 1 for subtract and 2 "
            "for multiply\n");
		while (getchar() != '\n');
        scanf_s("%d", &ch);
	} while (!(ch == 0 || ch == 1 || ch == 2));


    (*choice[ch])(a, b);

    return 0;
}