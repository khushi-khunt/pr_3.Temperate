#include<stdio.h>
#include<conio.h>
void main(){
int num,a,b,sum;
clrscr();

	printf("Enter any number:-");
	scanf("%d",&num);
	a=num%10;
	while(num>=10){
	num=num/10;
	}
	b=num;
	printf("The sum of first and last digits is:-%d",b+a);
getch();
}