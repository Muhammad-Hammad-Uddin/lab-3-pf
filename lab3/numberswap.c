#include<stdio.h>
int main() {
	int Num1;
	int Num2;
	printf("Enter Num1 \n");
	scanf("%d",&Num1);
	printf("Enter Num2 \n");
	scanf("%d",&Num2);
	Num1 = Num1 - Num2;
	Num2 = Num2 + Num1;
	Num1 = Num2 - Num1;
	printf("Num1 = %d and Num2 = %d", Num1,Num2);
}

