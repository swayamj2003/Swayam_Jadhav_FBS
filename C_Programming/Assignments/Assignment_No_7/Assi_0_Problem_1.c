//TYPE THREE
int addition(int num1, int num2);  // Function declaration

void main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    add(&num1, &num2);  
}

int add(int *x, int *y)  
{
    int result;
    result = *x + *y;
    printf("Result = %d\n", result);
}
