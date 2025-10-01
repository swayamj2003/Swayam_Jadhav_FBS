/*Accept the price from user. Ask the user if he is a student (user may say y or n). If he
is a student and he has purchased more than 500 than discount is 20% otherwise
discount is 10%.But if he is not a student then if he has purchased more than 600
discount is 15% otherwise there is not discount.*/

void main()
{
	double price=500, final_price, discount;
	char choice = 'n'; // Its student yes = y & no= n
	
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