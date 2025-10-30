/*Accept the price from user. Ask the user if he is a student (user may say y or n). If he
is a student and he has purchased more than 500 than discount is 20% otherwise
discount is 10%.But if he is not a student then if he has purchased more than 600
discount is 15% otherwise there is not discount.*/

/*
//TYPE 1
void main()
{
	studant_discount();
}

void studant_discount()
{
	double price = 600, final_price, discount;
	char choice;
	
//	printf("Enter Price = \n");
//	Scanf("%d",&price);
	
	printf("Enter Choice = YES: Y and NO: N \n");
	scanf("%c",&choice);
 // Its student yes = y & no= n
	
	if (choice =='y')
	{
		if(price>=500)
		{
			discount = price*0.20;
			final_price= price -discount;
		}
		else
		{
			discount = price*0.10;
			final_price= price -discount;

		}
	}
	else
	{
		if(price>=600)
		{
			discount = price*0.15;
			final_price= price -discount;
		}
		else
		{
			discount = price*0;
			final_price= price -discount;
		}
	}
	if (discount == 0)
	{
		printf("Final price=%lf",price);
	}
	else
	{
		printf("Actual price=%lf\n Final price=%lf\n Discount=%lf",price,final_price,discount);
	}
}
*/


/*
//TYPE 2
void studant_discount(double price, char choice);  // Function declaration
void main()
{
    double price = 600;
    char choice;
    printf("Enter Choice (Student? YES: y / NO: n): ");
    scanf(" %c", &choice);

    studant_discount(price, choice);  // Pass values as arguments
}

void studant_discount(double price, char choice)
{
    double discount, final_price;
    if(choice == 'y' || choice == 'Y')
    {
        if(price >= 500)
            discount = price * 0.20;
        else
            discount = price * 0.10;
        final_price = price - discount;
    }
    else
    {
        if(price >= 600)
            discount = price * 0.15;
        else
            discount = 0;
        final_price = price - discount;
    }
    
    if(discount == 0)
        printf("Final price = %.2lf\n", price);
    else
        printf("Actual price = %.2lf\nFinal price = %.2lf\nDiscount = %.2lf\n", price, final_price, discount);
}
*/


/*
//TYPE 3
double studant_discount();  // Function declaration
void main()
{
    double final_price = studant_discount();  // Call function
    printf("Final price = %.2lf\n", final_price);
}

double studant_discount()
{
    double price = 600, discount, final_price;
    char choice;
    printf("Enter Choice (Student? YES: y / NO: n): ");
    scanf(" %c", &choice);

    if(choice == 'y' || choice == 'Y')
    {
        if(price >= 500)
            discount = price * 0.20;
        else
            discount = price * 0.10;
        final_price = price - discount;
    }
    else
    {
        if(price >= 600)
            discount = price * 0.15;
        else
            discount = 0;
        final_price = price - discount;
    }
    return final_price;
}
*/


//TYPE 4
double studant_discount(double price, char choice);  // Function declaration
void main()
{
    double price = 600;
    char choice;
    printf("Enter Choice (Student? YES: y / NO: n): ");
    scanf(" %c", &choice);

    double final_price = studant_discount(price, choice);  // Call function with arguments
    printf("Final price = %.2lf\n", final_price);
}

double studant_discount(double price, char choice)
{
    double discount, final_price;

    if(choice == 'y' || choice == 'Y')
    {
        if(price >= 500)
            discount = price * 0.20;
        else
            discount = price * 0.10;
        final_price = price - discount;
    }
    else
    {
        if(price >= 600)
            discount = price * 0.15;
        else
            discount = 0;
        final_price = price - discount;
    }
    return final_price;
}
