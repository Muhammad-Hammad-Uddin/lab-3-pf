#include<stdio.h>
main(){
	int salary,tax,taxrate,netincome;
	printf("enter salary=");
	scanf("%d",&salary);
	printf("enter taxrate=");
	scanf("%d",&taxrate);
	tax=salary*taxrate/100;
	netincome=salary-tax;
	printf("netincome is=%d",netincome);
}
