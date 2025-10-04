/*Q 1 WAP to calculate electricity bill
for 	1 to 50  = 30rs/unit
for 	51 to 150 = 40rs/unit
for 	151 to above = 50rs/unit*/


void main()
{
	int unit = 160;
	int rs = 0;
	
	if (unit <= 50)
	{
		rs = unit * 30;
		printf("Electricity unit is= %d\n Bill rs = %d",unit,rs);
	}
	else if(unit <= 150)
	{
		rs = unit * 40;
		printf("Electricity unit is= %d\n Bill rs = %d",unit,rs);
	}
	else
	{
		rs = (151 <= unit);
		printf("Electricity unit is= %d\n Bill rs = %d",unit,rs);
	}
}