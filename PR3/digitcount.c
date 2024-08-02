#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i=0;
	
	printf("enter the number :");
	scanf("%d", &n);
	do{
		n/=10;
		i++;
	}while(n!=0);
	
	printf("total digit = %d", i);
	
	
}