//10. Product (id, name, quantity, price)
struct product
{
	int id;
	char name[20];
	int quantity;
	int price;
};

struct product productdetail();
void display(struct product x);
void main()
{
	struct product p1,p2;
	
	p1 = productdetail();
	p2 = productdetail();
	
	display(p1);
	display(p2);
}

struct product productdetail()
{
	struct product a;
	
	printf("ENTER PRODUCT ID");
	scanf("%d",&a.id);
	printf("ENTER PRODUCT NAME");
	scanf("%s",a.name);
	printf("ENTER QUANTITY");
	scanf("%d",&a.quantity);
	printf("ENTER PRICE OF PRODUCT");
	scanf("%d",&a.price);
	return a;
}

void display(struct product x)
{
	printf("\nPRODUCT ID: %d \n",x.id);
	printf("PRODUCT NAME: %s \n",x.name);
	printf("QUANTITY: %d \n",x.quantity);
	printf("PRODUCT PRICE: %d \n",x.price);
}