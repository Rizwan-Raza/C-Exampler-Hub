#include"mystr.h"

//Global variables
char a[50],b[50];
extern int ch2;

void menu3();

//Functions of menu3() function.
void mystrlen();
void mystrrev();
void mystrupr();
void mystrlwr();
void mystrmxd();
void mystrmrr();
void mystrcmp();
void mystrscmp();
void mystrprnt();
void mystrptrn();

void menu3()
{
	drawMenu();
	drawBox(22,2,34,1);
	gotoxy(24,3);
	textcolor(BRDR);
	printf("Main Menu ");
	textcolor(MENU);
	printf("%c Operation on Strings",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(4,6);
	printf("1. Length of any String.");
	gotoxy(4,7);
	printf("2. Reverse of any String.");
	gotoxy(4,8);
	printf("3. Change to Uppercase.");
	gotoxy(4,9);
	printf("4. Change to Lowercase.");
	gotoxy(4,10);
	printf("5. Change to Mixedcase.");
	gotoxy(4,11);
	printf("6. Mirror String of any String.");
	gotoxy(4,12);
	printf("7. Compare two Strings.");
	gotoxy(4,13);
	printf("8. Sensitive Compare two Strings.");
	gotoxy(4,14);
	printf("9. String in Pattern ( Simple Mode).");
	gotoxy(3,15);
	printf("10. String in Pattern ( Expert Mode).");
	gotoxy(3,16);
	printf("11. Back.");
	gotoxy(4,18);
	printf("Enter your choice corresponding to number with option...");
	scanf("%d",&ch2);
	switch(ch2)
	{
		case 1:
			mystrlen();
			getch();menu3();
		case 2:
			mystrrev();
			getch();menu3();
		case 3:
			mystrupr();
			getch();menu3();
		case 4:
			mystrlwr();
			getch();menu3();
		case 5:
			mystrmxd();
			getch();menu3();
		case 6:
			mystrmrr();
			getch();menu3();
		case 7:
			mystrcmp();
			getch();menu3();
		case 8:
			mystrscmp();
			getch();menu3();
		case 9:
			mystrprnt();
			getch();menu3();
		case 10:
			mystrptrn();
			getch();menu3();
		case 11:
			main();
		default:
			printf("Enter valid option\n");
			menu3();
	}
}

////////////////////////////////////////////////////////////////////
//-----------------------Functions of Menu 3----------------------//
////////////////////////////////////////////////////////////////////
void mystrlen()
{
	drawSet();
	drawBox(11,2,57,1);
	gotoxy(13,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on Strings ",16);
	textcolor(MENU);
	printf("%c Length of any String",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(4,6);
	printf("Enter any String: ");
	fflush(stdin);
	gets(a);
	i=zstrlen(a);
	gotoxy(4,8);
	printf("The Length of String is %d",i);
}
void mystrrev()
{
	drawSet();
	drawBox(11,2,58,1);
	gotoxy(13,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on Strings ",16);
	textcolor(MENU);
	printf("%c Reverse of any String",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(4,6);
	printf("Enter any String: ");
	fflush(stdin);
	gets(a);
	zstrrev(a);
	gotoxy(4,8);
	printf("The Reverse of String is ");
	puts(a);
}
void mystrupr()
{
	drawSet();
	drawBox(12,2,56,1);
	gotoxy(14,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on Strings ",16);
	textcolor(MENU);
	printf("%c Change to Uppercase",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(4,6);
	printf("Enter any String: ");
	fflush(stdin);
	gets(a);
	zstrupr(a);
	gotoxy(4,8);
	printf("The Uppercase of String is ");
	puts(a);
}
void mystrlwr()
{
	drawSet();
	drawBox(12,2,56,1);
	gotoxy(14,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on Strings ",16);
	textcolor(MENU);
	printf("%c Change to Lowercase",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(4,6);
	printf("Enter any String: ");
	fflush(stdin);
	gets(a);
	zstrlwr(a);
	gotoxy(4,8);
	printf("The Lowercase of String is ");
	puts(a);
}
void mystrmxd()
{
	drawSet();
	drawBox(12,2,56,1);
	gotoxy(14,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on Strings ",16);
	textcolor(MENU);
	printf("%c Change to Mixedcase",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(4,6);
	printf("Enter any String: ");
	fflush(stdin);
	gets(a);
	zstrmxd(a);
	gotoxy(4,8);
	printf("The Mixedcase of String is ");
	puts(a);
}
void mystrmrr()
{
	drawSet();
	drawBox(8,2,64,1);
	gotoxy(10,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on Strings ",16);
	textcolor(MENU);
	printf("%c Mirror String of any String",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(4,6);
	printf("Enter any String: ");
	fflush(stdin);
	gets(a);
	zstrmrr(a);
	gotoxy(4,8);
	printf("The Mirror String of String is ");
	puts(a);
}
void mystrcmp()
{
	drawSet();
	drawBox(12,2,56,1);
	gotoxy(14,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on Strings ",16);
	textcolor(MENU);
	printf("%c Compare two Strings",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(4,6);
	printf("Enter First String: ");
	fflush(stdin);
	gets(a);
	gotoxy(4,7);
	printf("Enter Second String: ");
	fflush(stdin);
	gets(b);
	zstrscmp(a,b,0);
	gotoxy(4,9);
	if(y[0])
	{
	    if(y[0]>0)
        {
            printf("The First String ");
            puts(a);
            gotoxy(4,10);
            printf("is Greater than the Second String");
        }
        else
        {
            printf("The First String ");
            puts(a);
            gotoxy(4,10);
            printf("is Lesser than the Second String");
        }
        gotoxy(4,11);
        printf("%s by %d characters",b,y[0]>0?y[0]:-y[0]);
        gotoxy(4,12);
        printf("at %d",y[1]);
        if(y[1]==1||y[1]==11||y[1]==21)
            printf("st");
        else if(y[1]==2||y[1]==12||y[1]==22)
            printf("nd");
        else if(y[1]==3||y[1]==13||y[1]==23)
            printf("rd");
        else
            printf("th");
        printf(" character place.");
	}
	else
	{
		printf("The First String ");
		puts(a);
		gotoxy(4,10);
		printf("is Equal to the Second String");
		gotoxy(4,11);
		printf("%s.",b);
	}
}
void mystrscmp()
{
	drawSet();
	drawBox(7,2,66,1);
	gotoxy(9,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on Strings ",16);
	textcolor(MENU);
	printf("%c Sensitive Compare two Strings",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(4,6);
	printf("Enter First String: ");
	fflush(stdin);
	gets(a);
	gotoxy(4,7);
	printf("Enter Second String: ");
	fflush(stdin);
	gets(b);
	zstrscmp(a,b,1);
	gotoxy(4,9);
	if(y[0])
	{
	    if(y[0]>0)
        {
            printf("The First String ");
            puts(a);
            gotoxy(4,10);
            printf("is Greater than the Second String");
        }
        else
        {
            printf("The First String ");
            puts(a);
            gotoxy(4,10);
            printf("is Lesser than the Second String");
        }
        gotoxy(4,11);
        printf("%s by %d characters",b,y[0]>0?y[0]:-y[0]);
        gotoxy(4,12);
        printf("at %d",y[1]);
		if(y[1]==1||y[0]==11||y[1]==21)
            printf("st");
        else if(y[1]==2||y[1]==12||y[1]==22)
            printf("nd");
        else if(y[1]==3||y[1]==13||y[1]==23)
            printf("rd");
        else
            printf("th");
        printf(" character place.");
	}
	else
	{
		printf("The First String ");
		puts(a);
		gotoxy(4,10);
		printf("is Equal to the Second String");
		gotoxy(4,11);
		printf("%s.",b);
	}
}
void mystrprnt()
{
	drawSet();
	drawBox(8,2,65,1);
	gotoxy(10,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on Strings ",16);
	textcolor(MENU);
	printf("%c String in Pattern:( Simple )",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(52,6);
	printf("%c 0 < String Length < 17",26);
	gotoxy(4,6);
	printf("Enter any String: ");
	gotoxy(4,6);
	printf("Enter any String: ");
	fflush(stdin);
	gets(a);
	zstrprnt(3,8,a);
}
void mystrptrn()
{
	int x,y,c[100],d[100];
	drawSet();
	drawBox(8,2,65,1);
	gotoxy(10,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on Strings ",16);
	textcolor(MENU);
	printf("%c String in Pattern:( Expert )",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(52,6);
	printf("%c 0 < String Length < 17",26);
	gotoxy(4,6);
	printf("Enter any String: ");
	fflush(stdin);
	gets(a);
	gotoxy(51,6);
	printf("Enter Favourite Character: ");
	gotoxy(52,8);
	printf("String: ");
	gotoxy(52,10);
	printf("Character:");
	for(y=0,x=0,i=0;a[i];i++)
	{
		if(x<18)
			x+=2;
		else
		{
			x=-8;
			y+=4;
		}
		gotoxy(60+x,8+y);
		printf("%c",a[i]);
		gotoxy(60+x,9+y);
		printf("%c",25);
		gotoxy(60+x,10+y);
		b[i]=getche();
	}
	b[i]=0;
	clrpnl(51,78,6,20);
	gotoxy(51,6);
	printf("Enter Favourite Colors (Back)");
	gotoxy(52,8);
	printf("Example:");
	for(i=0,x=10,y=0;i<16;i++,x+=3)
	{
		textbackground(i);
		if(x>=28)
		{
			y+=2;
			x=-1;

		}
		gotoxy(x+52,y+8);
		printf("%2d",i);
	}
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(52,12);
	printf("String: ");
	gotoxy(52,14);
	printf("Colors: ");
	for(y=0,x=0,i=0;a[i];i++)
	{
		if(x<18)
			x+=2;
		else
		{
			x=-8;
			y+=4;
		}
		gotoxy(60+x,12+y);
		printf("%c",a[i]);
		gotoxy(60+x,13+y);
		printf("%c",25);
		gotoxy(60+x,14+y);
		scanf("%d",&c[i]);
	}
	c[i]=0;
	clrpnl(51,78,6,20);
	gotoxy(51,6);
	printf("Enter Favourite Colors (TXET)");
	gotoxy(52,8);
	printf("Example:");
	for(i=0,x=10,y=0;i<16;i++,x+=3)
	{
		textbackground(i);
		if(x>=28)
		{
			y+=2;
			x=-1;

		}
		gotoxy(x+52,y+8);
		printf("%2d",i);
	}
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(52,12);
	printf("String: ");
	gotoxy(52,14);
	printf("Colors: ");
	for(y=0,x=0,i=0;a[i];i++)
	{
		if(x<18)
			x+=2;
		else
		{
			x=-8;
			y+=4;
		}
		gotoxy(60+x,12+y);
		printf("%c",a[i]);
		gotoxy(60+x,13+y);
		printf("%c",25);
		gotoxy(60+x,14+y);
		scanf("%d",&d[i]);
	}
	d[i]=0;
	zstrptrn(3,8,a,b,c,d);
}
////////////////////////////////////////////////////////////////////
