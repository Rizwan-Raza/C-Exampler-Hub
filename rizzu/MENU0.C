//Global variables
extern int i,j,ch2;
void menu0();

//Functions of menu0() function.
void sum();
void dif();
void mul();
void divi();
void rem();
void avg();
void factor();
void rev();
void factl();
void ooe();
void pnoz();
void pon();
void fab();
void arms();

void menu0()
{
	drawMenu();
	drawBox(23,2,34,1);
	gotoxy(25,3);
	textcolor(BRDR);
	printf("Main Menu ");
	textcolor(MENU);
	printf("%c Operation on Numbers",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(4,6);
	printf("1. Addition of two numbers.");
	gotoxy(4,7);
	printf("2. Subtraction of two numbers.");
	gotoxy(4,8);
	printf("3. Multiplication of two numbers.");
	gotoxy(4,9);
	printf("4. Division of two numbers.");
	gotoxy(4,10);
	printf("5. Remainder between two numbers.");
	gotoxy(4,11);
	printf("6. Average of two numbers.");
	gotoxy(4,12);
	printf("7. Factor of a number.");
	gotoxy(4,13);
	printf("8. Reverse of a number.");
	gotoxy(4,14);
	printf("9. Factorial of a number.");
	gotoxy(3,15);
	printf("10. Check whether the number is Odd or Even.");
	gotoxy(3,16);
	printf("11. Check whether the number is Positive, Negative or Zero.");
	gotoxy(3,17);
	printf("12. Check whether the number is Prime or Not.");
	gotoxy(3,18);
	printf("13. Fibonacci series upto N numbers.");
	gotoxy(3,19);
	printf("14. Armstrong Number upto N numbers.");
	gotoxy(3,20);
	printf("15. Back");
	gotoxy(3,21);
	printf("Enter your choice corresponding to number with option...");
	scanf("%d",&ch2);
	switch(ch2)
	{
		case 1:
			sum();
			getch();menu0();
		case 2:
			dif();
			getch();menu0();
		case 3:
			mul();
			getch();menu0();
		case 4:
			divi();
			getch();menu0();
		case 5:
			rem();
			getch();menu0();
		case 6:
			avg();
			getch();menu0();
		case 7:
			factor();
			getch();menu0();
		case 8:
			rev();
			getch();menu0();
		case 9:
			factl();
			getch();menu0();
		case 10:
			ooe();
			getch();menu0();
		case 11:
			pnoz();
			getch();menu0();
		case 12:
			pon();
			getch();menu0();
		case 13:
			fab();
			getch();menu0();
		case 14:
			arms();
			getch();menu0();
		case 15:
			main();
		default:
			printf("Enter valid option\n");
			getch();menu0();
	}
}

////////////////////////////////////////////////////////////////////
//-----------------------Functions of Menu 0----------------------//
////////////////////////////////////////////////////////////////////
void sum(int i)
{
	drawSet();
	drawBox(10,2,60,1);
	gotoxy(12,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on Numbers ",16);
	textcolor(MENU);
	printf("%c Addition of Two numbers",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(4,6);
	printf("Enter first number: ");
	scanf("%d",&i);
	gotoxy(4,7);
	printf("Enter second number: ");
	scanf("%d",&j);
	gotoxy(52,7);
	printf("+%5d",i);
	gotoxy(52,8);
	printf("+%5d",j);
	gotoxy(52,9);
	printf("%c%c%c%c%c%c",196,196,196,196,196,196);
	gotoxy(52,10);
	printf("=%5d",i+j);
	gotoxy(4,10);
	printf("The sum of the numbers is %d",i+j);
}
void dif(int i)
{
	drawSet();
	drawBox(8,2,63,1);
	gotoxy(10,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on Numbers ",16);
	textcolor(MENU);
	printf("%c Subtraction of Two numbers",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(4,6);
	printf("Enter first number: ");
	scanf("%d",&i);
	gotoxy(4,7);
	printf("Enter second number: ");
	scanf("%d",&j);
	gotoxy(52,7);
	printf("+%5d",i);
	gotoxy(52,8);
	printf("-%5d",j);
	gotoxy(52,9);
	printf("%c%c%c%c%c%c",196,196,196,196,196,196);
	gotoxy(52,10);
	printf("=%5d",i-j);
	gotoxy(4,10);
	printf("The difference of the numbers is %d",i-j);
}
void mul(int i)
{
	drawSet();
	drawBox(7,2,66,1);
	gotoxy(9,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on Numbers ",16);
	textcolor(MENU);
	printf("%c Multiplication of Two numbers",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(4,6);
	printf("Enter first number: ");
	scanf("%d",&i);
	gotoxy(4,7);
	printf("Enter second number: ");
	scanf("%d",&j);
	gotoxy(52,7);
	printf("+%5d",i);
	gotoxy(52,8);
	printf("x%5d",j);
	gotoxy(52,9);
	printf("%c%c%c%c%c%c",196,196,196,196,196,196);
	gotoxy(52,10);
	printf("=%5d",i*j);
	gotoxy(4,10);
	printf("The product of the numbers is %d",i*j);
}
void divi(int i)
{
	drawSet();
	drawBox(10,2,60,1);
	gotoxy(12,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on Numbers ",16);
	textcolor(MENU);
	printf("%c Division of Two numbers",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(4,6);
	printf("Enter first number: ");
	scanf("%d",&i);
	gotoxy(4,7);
	printf("Enter second number: ");
	scanf("%d",&j);
	gotoxy(52,7);
	printf("+%5d",i);
	gotoxy(52,8);
	printf("%c%5d",246,j);
	gotoxy(52,9);
	printf("%c%c%c%c%c%c",196,196,196,196,196,196);
	gotoxy(52,10);
	printf("=%5d",i/j);
	gotoxy(4,10);
	printf("The quotient of the numbers is %d",i/j);
}
void rem(int i)
{
	drawSet();
	drawBox(7,2,66,1);
	gotoxy(9,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on Numbers ",16);
	textcolor(MENU);
	printf("%c Remainder between Two numbers",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(4,6);
	printf("Enter first number: ");
	scanf("%d",&i);
	gotoxy(4,7);
	printf("Enter second number: ");
	scanf("%d",&j);
	gotoxy(52,7);
	printf("+%5d",i);
	gotoxy(52,8);
	printf("%c%5d",246,j);
	gotoxy(52,9);
	printf("%c%c%c%c%c%c",196,196,196,196,196,196);
	gotoxy(52,10);
	printf(" %5d (As a Remainder)",i%j);
	gotoxy(4,10);
	printf("The Remainder between the numbers is %d",i%j);
}
void avg(int i)
{
	drawSet();
	drawBox(7,2,66,1);
	gotoxy(9,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on Numbers ",16);
	textcolor(MENU);
	printf("%c Average of Two numbers",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(4,6);
	printf("Enter first number: ");
	scanf("%d",&i);
	gotoxy(4,7);
	printf("Enter second number: ");
	scanf("%d",&j);
	gotoxy(52,7);
	printf("+%5d",i);
	gotoxy(52,8);
	printf("+%5d",j);
	gotoxy(52,9);
	printf("%c%c%c%c%c%c",196,196,196,196,196,196);
	gotoxy(52,10);
	printf("=%5d",i+j);
	gotoxy(52,11);
	printf("%c%5d",246,2);
	gotoxy(52,12);
	printf("%c%c%c%c%c%c",196,196,196,196,196,196);
	gotoxy(52,13);
	printf("=%5d",(i+j)/2);
	gotoxy(4,10);
	printf("The Average of the numbers is %d",(i+j)/2);
}
void factor(int i)
{
	int n,t,x=52,y=0;
	drawSet();
	drawBox(13,2,55,1);
	gotoxy(15,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on Numbers ",16);
	textcolor(MENU);
	printf("%c Factor of a number",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(4,6);
	printf("Enter any number: ");
	scanf("%d",&i);
	for(t=i,n=2;i>1;)
	{
		if(i%n==0)
		{
			gotoxy(x,7+y);
			printf("%d X ",n);
			i/=n;
			if(x<77)
				x+=5;
			else
			{
				x=52;
				y++;
			}
		}
		else
		{
			n++;
		}
	}
	printf("\b\b = %d",t);
	gotoxy(4,10);
	printf("The Factor of the number is shown right...");
}
void rev(int i)
{
	int t,d,m,y=0;
	drawSet();
	drawBox(12,2,56,1);
	gotoxy(14,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on Numbers ",16);
	textcolor(MENU);
	printf("%c Reverse of a number",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(4,6);
	printf("Enter any number ( Atmost 32785 ): ");
	scanf("%d",&i);
	for(t=0,m=i;i>0;i/=10)
	{
		d=i%10;
		t=t*10+d;
		gotoxy(52,7+y);
		printf("%d",t);
		y++;
	}
	gotoxy(4,10);
	printf("Reverse of %d = %d",m,t);
}
void factl(int i)
{
	int n,f=1,y=0;
	drawSet();
	drawBox(11,2,58,1);
	gotoxy(13,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on Numbers ",16);
	textcolor(MENU);
	printf("%c Factorial of a number",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(4,6);
	printf("Enter any number: ");
	scanf("%d",&i);
	for(n=1;n<=i;n++)
	{
		f*=n;
		gotoxy(52,7+y);
		printf("%d",f);
		y++;
	}
	gotoxy(4,7);
	printf("The Factorial of the number is %d",f);
}
void ooe(int i)
{
	drawSet();
	drawBox(8,2,64,1);
	gotoxy(10,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on Numbers ",16);
	textcolor(MENU);
	printf("%c Odd/Even Nature of a number",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(4,6);
	printf("Enter any number: ");
	scanf("%d",&i);
	gotoxy(52,7);
	printf("%d%%2=%d",i,i%2);
	gotoxy(4,7);
	if(i%2)
	{
		printf("The number %d is Odd",i);
		gotoxy(52,7);
		printf(" %d %% 2 = %d ( hence Odd )",i,i%2);
	}
	else
	{
		printf("The number %d is Even",i);
		gotoxy(52,7);
		printf(" %d %% 2 = %d ( hence Even )",i,i%2);
	}
}
void pnoz(int i)
{
	drawSet();
	drawBox(6,2,68,1);
	gotoxy(8,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on Numbers ",16);
	textcolor(MENU);
	printf("%c +VE,-VE or 0 Nature of a number",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(4,6);
	printf("Enter any number: ");
	scanf("%d",&i);
	gotoxy(4,7);
	if(i>0)
	{
		printf("The number %d is Positive",i);
		gotoxy(52,7);
		printf(" %d > 0 ( hence Positive )",i);
	}
	else if(i<0)
	{
		printf("The number %d is Negative",i);
		gotoxy(52,7);
		printf(" %d < 0 ( hence Negative )",i);
	}
	else
	{
		printf("The number %d is Zero (0)",i);
		gotoxy(52,7);
		printf(" %d = 0 ( hence Zero {0} )",i);
	}
}
void pon(int i)
{
	int n,f=0;
	drawSet();
	drawBox(12,2,56,1);
	gotoxy(14,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on Numbers ",16);
	textcolor(MENU);
	printf("%c Prime number or Not",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(4,6);
	printf("Enter any number: ");
	scanf("%d",&i);
	gotoxy(4,7);
	for(n=2;n<i;n++)
	{
		if(i%n==0)
		{
			gotoxy(52,7);
			printf(" %d %% %d = 0",i,n);
			f=1;
		}
	}
	gotoxy(4,7);
	if(f)
		printf("The number %d is Not a Prime number",i);
	else
		printf("The number %d is Prime number",i);
}
void fab(int i)
{
	int a=0,b=1,c=1,n,x,y=0;
	drawSet();
	drawBox(6,2,68,1);
	gotoxy(8,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on Numbers ",16);
	textcolor(MENU);
	printf("%c Fibonacci Series upto N numbers",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(4,6);
	printf("Enter any number: ");
	scanf("%d",&i);
	gotoxy(3,8);
	printf("The Fibonacci series is shown below...");
	gotoxy(3,10);
	printf("%d",a);
	gotoxy(9,10);
	printf("%d",b);
	for(n=2,x=15;n<=i;n++,a=b,b=c,c=a+b)
	{
		gotoxy(x,10+y);
		printf("%d",c);
		if(x>44)
		{
			x=3;
			y++;
		}
		else
			x+=6;
	}
}
void arms()
{
	int t,s,d,n,x=3,y=0;
	drawSet();
	drawBox(6,2,68,1);
	gotoxy(8,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on Numbers ",16);
	textcolor(MENU);
	printf("%c Armstrong Numbers upto N numbers",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(4,6);
	printf("Enter any number: ");
	scanf("%d",&n);
	gotoxy(3,8);
	printf("The Armstrong Numbers are shown below...");
	for(i=1;i<=n;i++)
	{
	      t=i;
	      s=0;
	      while(t>0)
	      {
		 d=t%10;
		 s=s+d*d*d;
		 t=t/10;
	      }
	      if(s==i)
	      {
		 if(x<44)
			x+=5;
		 else
		 {
			x=3;
			y++;
		 }
		 gotoxy(x,10+y);
		 printf("%d",i);
	      }
	}

}
///////////////////////////////////////////////////////////////////
