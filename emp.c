#include<stdio.h>
struct emp{
	char name[100];
	int age;
	long long int ph;
	float sal;
}e1[20];
void main(){
	int i=0;
	for(i=0;i<20;i++){
		printf("Enter employee name:");
		scanf("%s",&e1[i].name);
		printf("Enter age:");
		scanf("%d",&e1[i].age);
		printf("Enter employee phone number:");
		scanf("%lld",&e1[i].ph);
		printf("Enter employee salary:");
		scanf("%f",&e1[i].sal);
	}
	printf("Display details\n");
	printf("Name\t\t\t Age\t\t\t Phone number \t\t\t salary\n");
	for(i=0;i<20;i++)
	   printf("%s\t\t\t%d\t\t\t%lld\t\t\t%f\n",e1[i].name,e1[i].age,e1[i].ph,e1[i].sal);
}
