//Global variables
extern int i,j,ch1;

void menu5();

//Functions of menu5() function.
void Tri_l_b();
/*Tri_r_t();
Tri_l_t();
Tri_r_b();
Pyramid_b();
Pyramid_t();
Diamond();*/
//void record2(int);
void Tri_l_b_int();
/*drawTri_r_t_int(int,int,int,int);
drawTri_l_t_int(int,int,int,int);
drawTri_r_b_int(int,int,int,int);
drawPyramid_b_int(int,int,int,int);
drawPyramid_t_int(int,int,int,int);
drawDiamond_int(int,int,int,int);
drawTri_l_b_alpha(int,int,int,int);
drawTri_r_t_alpha(int,int,int,int);
drawTri_l_t_alpha(int,int,int,int);
drawTri_r_b_alpha(int,int,int,int);
drawPyramid_b_alpha(int,int,int,int);
drawPyramid_t_alpha(int,int,int,int);
drawDiamond_alpha(int,int,int,int);
drawTri_l_b_char(int,int,int,int);
drawTri_r_t_char(int,int,int,int);
drawTri_l_t_char(int,int,int,int);
drawTri_r_b_char(int,int,int,int);
drawPyramid_b_char(int,int,int,int);
drawPyramid_t_char(int,int,int,int);
drawDiamond_char(int,int,int,int);*/

void menu5()
{
	drawMenu();
	drawBox(22,2,33,1);
	gotoxy(24,3);
	textcolor(BRDR);
	printf("Main Menu ");
	textcolor(MENU);
	printf("%c Let's draw Patterns",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(4,9);
	printf("1.");
	drawTri_l_b(7,6,7,12);
	gotoxy(19,9);
	printf("2.");
	drawTri_r_t(22,6,7,12);
	gotoxy(34,9);
	printf("3.");
	drawTri_l_t(37,6,7,12);
	gotoxy(49,9);
	printf("4.");
	drawTri_r_b(52,6,7,12);
	gotoxy(4,16);
	printf("5.");
	drawPyramid_b(7,14,13,12);
	gotoxy(24,16);
	printf("6.");
	drawPyramid_t(27,14,13,12);
	gotoxy(44,16);
	printf("7.");
	drawDiamond(47,14,13,12);
	gotoxy(4,21);
	printf("8. Back.");
	gotoxy(4,23);
	printf("Enter your choice corresponding to number with option...");
	scanf("%d",&ch1);
	switch(ch1)
	{
		case 1:
			Tri_l_b(ch1);
			getch();menu5();
/*		case 2:
			Tri_r_t(ch1);
			getch();menu5();
		case 3:
			Tri_r_b(ch1);
			getch();menu5();
		case 4:
			Tri_l_t(ch1);
			getch();menu5();
		case 5:
			Pyramid_b(ch1);
			getch();menu5();
		case 6:
			Pyramid_l(ch1);
			getch();menu5();
		case 7:
			Diamond(ch1);
			getch();menu5();*/
		case 8:
			main();
		default:
			printf("Enter valid option\n");
			menu5();
	}
}

////////////////////////////////////////////////////////////////////
//-----------------------Functions of Menu 5----------------------//
////////////////////////////////////////////////////////////////////
/*void record2(int type)
{
	drawMenu();
	drawBox(22,2,33,1);
	gotoxy(24,3);
	textcolor(BRDR);
	printf("Main Menu ");
	textcolor(MENU);
	printf("%c Let's draw Patterns",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(4,6);
	printf("1. Integers");
	gotoxy(4,8);
	printf("2. Alphabets");
	gotoxy(4,10);
	printf("3. Characters");
	gotoxy(4,12);
	printf("4. Back");
	printf("Enter your choice corresponding to number with option...");
	scanf("%d",&ch1);
	switch(ch1)
	{
		case 1:
			gotoxy(4,6);
			printf("Enter the size of pattern");
			scanf("%d",&n);
			switch(type)
			{
				case 1:
					drawTri_l_b_int(4,6,n,12);
					break;
				case 2:
					drawTri_r_t_int(4,6,n,12);
					break;
				case 3:
					drawTri_l_t_int(4,6,n,12);
					break;
				case 4:
					drawTri_r_b_int(4,6,n,12);
					break;
				case 5:
					drawPyramid_b_int(4,6,n,12);
					break;
				case 6:
					drawPyramid_t_int(4,6,n,12);
					break;
				case 7:
					drawDiamond_int(4,6,n,12);
					break;
				default:
					gotoxy(4,6);
					printf("Sorry");
			}
			getch();record2();
		case 2:
			gotoxy(4,6);
			printf("Enter the size of pattern");
			scanf("%d",&n);
			switch(type)
			{
				case 1:
					drawTri_l_b_alpha(4,6,n,12);
					break;
				case 2:
					drawTri_r_t_alpha(4,6,n,12);
					break;
				case 3:
					drawTri_l_t_alpha(4,6,n,12);
					break;
				case 4:
					drawTri_r_b_alpha(4,6,n,12);
					break;
				case 5:
					drawPyramid_b_alpha(4,6,n,12);
					break;
				case 6:
					drawPyramid_t_alpha(4,6,n,12);
					break;
				case 7:
					drawDiamond_alpha(4,6,n,12);
					break;
				default:
					gotoxy(4,6);
					printf("Sorry");
			}
			getch();record2();
		case 3:
			gotoxy(4,6);
			printf("Enter the size of pattern");
			scanf("%d",&n);
			switch(type)
			{
				case 1:
					drawTri_l_b_char(4,6,n,12);
					break;
				case 2:
					drawTri_r_t_char(4,6,n,12);
					break;
				case 3:
					drawTri_l_t_char(4,6,n,12);
					break;
				case 4:
					drawTri_r_b_char(4,6,n,12);
					break;
				case 5:
					drawPyramid_b_char(4,6,n,12);
					break;
				case 6:
					drawPyramid_t_char(4,6,n,12);
					break;
				case 7:
					drawDiamond_char(4,6,n,12);
					break;
				default:
					gotoxy(4,6);
					printf("Sorry");
			}
			getch();record2();
		case 4:
			main();
		default:
			printf("Enter valid option\n");
			record2();
	}
}
drawTri_l_b_int(int x,int y,int s,int clr)
{
	textcolor(clr);
	for(i=0;i<s;i++)
	{
		for(j=0;j<=i;j++)
		{
			gotoxy(x+j,y+i);
			printf("%d",i);
		}
	}
	textcolor("TEXT");
}
drawTri_r_t_int(int x,int y,int s,int clr)
{
	textcolor(clr);
	for(i=0;i<s;i++)
	{
		for(j=0;j<=i;j++)
		{
			gotoxy(x+j,y+i);
			printf("%d",i);
		}
	}
	textcolor("TEXT");
}
drawTri_l_t_int(int x,int y,int s,int clr)
drawTri_r_b_int(int x,int y,int s,int clr)
drawPyramid_b_int(int x,int y,int s,int clr)
drawPyramid_t_int(int x,int y,int s,int clr)
drawDiamond_int(int x,int y,int s,int clr)
drawTri_l_b_alpha(int x,int y,int s,int clr)
drawTri_r_t_alpha(int x,int y,int s,int clr)
drawTri_l_t_alpha(int x,int y,int s,int clr)
drawTri_r_b_alpha(int x,int y,int s,int clr)
drawPyramid_b_alpha(int x,int y,int s,int clr)
drawPyramid_t_alpha(int x,int y,int s,int clr)
drawDiamond_alpha(int x,int y,int s,int clr)
drawTri_l_b_char(int x,int y,int s,int clr)
drawTri_r_t_char(int x,int y,int s,int clr)
drawTri_l_t_char(int x,int y,int s,int clr)
drawTri_r_b_char(int x,int y,int s,int clr)
drawPyramid_b_char(int x,int y,int s,int clr)
drawPyramid_t_char(int x,int y,int s,int clr)
drawDiamond_char(int x,int y,int s,int clr)*/
void Tri_l_b()
{
	drawMenu();
	drawBox(22,2,33,1);
	gotoxy(24,3);
	textcolor(BRDR);
	printf("Main Menu ");
	textcolor(MENU);
	printf("%c Let's draw Patterns %c Tri-L-R",16,16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(4,6);
	printf("1. Integers");
	gotoxy(4,8);
	printf("2. Alphabets");
	gotoxy(4,10);
	printf("3. Characters");
	gotoxy(4,12);
	printf("4. Back");
	printf("Enter your choice corresponding to number with option...");
	scanf("%d",&ch1);
	switch(ch1)
	{
		case 1:
			gotoxy(4,6);
			printf("Enter the size of pattern");
			scanf("%d",&n);
/*			switch(n)
			gotoxy(4,6);
			printf("Enter the size of pattern");
			scanf("%d",&n);
			gotoxy(4,8);
			printf("Enter text color: ");
			scanf("%d",&i);
			gotoxy(4,10);
			printf("Enter Text Background color: ");
			scanf("%d",&i);
			textcolor(i);
			textbackground(j);
			clrpnl(4,49,6,60);
			for(i=0;i<n;i++)
			{
				for(j=0;j<=i;j++)
				{
					gotoxy(5+j,7+i);
					printf("%d",i);
				}
			}*/
		case 2:
			gotoxy(4,6);
			printf("Enter the size of pattern");
			scanf("%d",&n);
		case 3:
			gotoxy(4,6);
			printf("Enter the size of pattern");
			scanf("%d",&n);
		case 4:
			main();
		default:
			printf("Enter valid option\n");
			Tri_l_b();
	}

}
/*Tri_l_b()
Tri_r_t()
Tri_l_t()
Tri_r_b()
Pyramid_b()
Pyramid_t()
Diamond()*/
void Tri_l_b_int()
{
	drawMenu();
	drawBox(22,2,33,1);
	gotoxy(24,3);
	textcolor(BRDR);
	printf("Main Menu ");
	textcolor(MENU);
	printf("%c Let's draw Patterns",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(4,6);
	printf("1. 1 to ? || (Parallel)");
	gotoxy(4,8);
	printf("2. ? to 1 || (Parallel)");
	gotoxy(4,10);
	printf("3. 1 to ? == (Series)");
	gotoxy(4,8);
	printf("4. ? to 1 == (Series)");
	gotoxy(4,12);
	printf("5. Back");
	printf("Enter your choice corresponding to number with option...");
	scanf("%d",&ch1);
/*	switch(ch1)
	{
		case 1:
			Tri_l_r_int_1_i_p();
			Tri_l_r_int();
		case 2:
			Tri_l_r_int_1_i_p();
			Tri_l_r_int();
		case 3:
			Tri_l_r_int_1_i_p();
			Tri_l_r_int();
		case 4:
			Tri_l_r_int_1_i_p();
			Tri_l_r_int();
		case 5:
			Tri_l_r_int();
		default:
			printf("Sorry bro...");*/
}
////////////////////////////////////////////////////////////////////

