#include<stdio.h>
#include<conio.h>
int main()
{   int clrscr(); 
	int a,b,res,option;
	printf("\n__________Welcome_______\n Enter your choice:\n");
	printf("\n1.sum");
	printf("\n2.sub");
	printf("\n3.mul");
	printf("\n4.divide");
	scanf("%d",&option);
	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
	do{

	switch(option)
	{
		case 1:
		        res=a+b;
			    break;
		case 2:
		   res=a-b;
			break;
		case 3:
		      res=a*b;
			break;
		case 4:
		       res=a/b;
			break;
	}
}while(option<0 &&option>5);
	printf("The result is:%d\n",res);
	getch();
	return 0;
}
