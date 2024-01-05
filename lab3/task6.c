#include<stdio.h>
#include<math.h>
main(){
	float a,b,c,d,r1,b2,r2;
	printf("enter a=");
	scanf("%f",&a);
	printf("enter b=");
	scanf("%f",&b);
	printf("enter c");
	scanf("%f",&c);
	b2=b*b;
	d=(b2)-(4*a*c);
	r1=(-b+sqrt(d))/(2*a);
	r2=(-b-sqrt(d))/(2*a);
	printf("root 1 is=%f",r1);
	printf("root 2 is=%f",r2);
}
