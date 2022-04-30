#include<stdio.h>
void main(){
	int ch=0;
	do{
		printf("\n*********MENU********\n");
		printf("\n1.Pizza Rs 239\n2.Burger Rs 129\n3.Pasta Rs 179\n4.French fries Rs 99\n5.Sandwich Rs 149\n6.Exit\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("\nFood item-Pizza\nPrice-Rs 239\n");
				break;
			case 2:
				printf("\nFood item-Burger\nPrice-Rs 129\n");
				break;
			case 3:
				printf("\nFood item-Pasta\nPrice-Rs 179\n");
				break;
			case 4:
				printf("\nFood item-French fries\nPrice-Rs 99\n");
				break;
			case 5:
				printf("\nFood item-Sandwich\nPrice-Rs 149\n");
				break;
			case 6:
				printf("Thank you for the visit\n");
				break;
			default:
				printf("\nPlease make order between(1-5)\n");
				break;
		}
	}while(ch!=6);
}
