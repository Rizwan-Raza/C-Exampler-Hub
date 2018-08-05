//Global variables
extern int ch2;

void quit()
{
	drawMenu();
	drawBox(32,2,18,1);
	gotoxy(34,3);
	textcolor(BRDR);
	printf("Main Menu ");
	textcolor(MENU);
	printf("%c Exit",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(4,6);
	printf("Are you Sure!!!");
	gotoxy(4,7);
	printf("1. Yes.");
	gotoxy(4,8);
	printf("2. No.");
	gotoxy(4,9);
	scanf("%d",&ch2);
	if(ch2==1)
	{
	    clrscr();
		exit(0);
	}
	else
	{
		main();
	}
}
