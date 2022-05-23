//write a program from the menu using functioin//
#include<stdio.h>
void menu(int x,int y,int choice);
void main()
{
int a ,b,ch;
printf("Enter two numbers:\n");
scanf("%d%d",&a,&b);
printf("\npress 1 to add,press 2 for subtract,press 3 for multiplication,press 4 for division:");
printf("\nenter your choice:");
scanf("%d",&ch);
menu(a,b,ch);
}
void menu(int x,int y,int choice)
{
switch(choice)
{
case 1 :
	printf("\naddition=%d",x+y);
break;
case 2 :printf("\nsubtraction=%d",x-y);
break;
case 3 :printf("\nmultipication=%d",x*y);
break;
case 4 :printf("\nDivision=%f",(float)x/y);
break;
default :printf("Invalid operation");
break;
}
}


