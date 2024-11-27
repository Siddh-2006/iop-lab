#include<stdio.h>
struct item{
	char item_name[20];
	int quantity;
	float price;
}data;
float bill(){
	printf("enter your item name,quantiy,price");
	scanf("%s %d %f",data.item_name,&data.quantity,&data.price);
	float amount=data.price*data.quantity;
	return amount;
}
int main(){
	float cooked_by;
		cooked_by=bill();
	printf("give me %f rupees for these things.",cooked_by);
	return 0;
}
