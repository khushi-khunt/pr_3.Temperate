#include<stdio.h>
#include<conio.h>
void main(){
int num,i=0;
clrscr();

	printf("Enter any number:-");
	scanf("%d",&num);

	while(num!=0){
	num=num/10;
	i++;
	}
	printf("Total number of digits is:-%d",i);
getch();
}