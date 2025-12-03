void main()
{
    int start, end;
    printf("Enter the range");
    scanf("%d %d", &start, &end);

    for (int i = start; i <= end; i++)
    {
        printf("%d = ", i);

        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                printf("%d", j);
                if (j != i)
                    printf(", ");
            }
        }
        printf("\n");
    }
}