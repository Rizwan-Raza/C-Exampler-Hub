#include<stdio.h>
#include<conio.h>
#include"rizzu\T2GCC.h"
#define HEAD 1
#define BACK 11
#define BRDR 15
#define TXET 0
#define MENU 12
#include"rizzu\grphcs.h"
#define MATWIDTH 5
int main();
#include"rizzu\menu0.c"
#include"rizzu\menu1.c"
#include"rizzu\menu2.c"
#include"rizzu\menu3.c"
#include"rizzu\menu4.c"
#include"rizzu\menu5.c"
#include"rizzu\quit.c"

//Global variables
int x[50],y[50],xx[50][50],yy[50][50],i,j,n,ch1,ch2;
int main()
{
	textbackground(BACK);
	textcolor(TXET);
	clrscr();
	textcolor(HEAD);
	drawBox2(1,1,78,23);
	drawXline212(1,5,78);
	textbackground(HEAD);
	textcolor(HEAD);
	drawbgcolor(2,2,78,3);
	textcolor(BRDR);
	drawBox(34,2,11,1);
	gotoxy(35,3);
	textcolor(MENU);
	printf(" Main Menu ");
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(4,6);
	printf("0. Operations on Numbers");
	gotoxy(4,7);
	printf("1. Operations on 1D array");
	gotoxy(4,8);
	printf("2. Operations on 2D array");
	gotoxy(4,9);
	printf("3. Operations on Strings");
	gotoxy(4,10);
	printf("4. Operations on Database and Files");
	gotoxy(4,11);
	printf("5. Let's draw Patterns");
	gotoxy(4,12);
	printf("6. Exit");
	gotoxy(4,17);
	printf("Enter your choice...");
	scanf("%d",&ch1);
	switch(ch1)
	{
		case 0:
			menu0();
			break;
		case 1:
			menu1();
			break;
		case 2:
			menu2();
			break;
		case 3:
			menu3();
			break;
		case 4:
			menu4();
			break;
		case 5:
			menu5();
			break;
		case 6:
			quit();
		default:
			main();
	}
	return (EXIT_SUCCESS);
}
