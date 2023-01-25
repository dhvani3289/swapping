#include<stdio.h>
main(){
	int a,b,c;

	printf("enter the value of a : ");
	scanf("%d",&a);
	
	printf("enter the value of b : ");
	scanf("%d",&b);
	
	a=a-b;
	b=a+b;
	a=b-a;
	
	printf("Swapped value of a : %d\n",a);	
	printf("Swapped value of b : %d",b);
	
	
	
	
}
	
	
	
	
