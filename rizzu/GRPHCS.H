#ifndef GRPHCS_H_INCLUDED
#define GRPHCS_H_INCLUDED
#ifndef STDIO_H_INCLUDED
    #include <stdio.h>
#endif // STDIO_H_INCLUDED
#ifndef T2GCC_H_INCLUDED
    #include "..\rizzu\T2GCC.H"
#endif // T2GCC_H_INCLUDED
#define BLUE 9
#define RED 12
#define BLACK 0
#define CYAN 11
#define GREEN 10
#define RED 12
#define BLACK 0
#define CYAN 11
#define YELLOW 14
/*void drawBox(int,int,int,int);
void drawXline111(int,int,int);
void drawBox2(int,int,int,int);
void drawXline212(int,int,int);
void drawYline112(int,int,int);
void drawbgcolor(int,int,int,int);
void drawMatrix(int,int,int,int,int);
void drawDeterm(int,int,int,int,int);
void drawSet();
void drawMenu();
void clrpnl(int,int,int,int);
*/
void drawBall(int x,int y,int fc,int bc)
{
    textcolor(fc);
    textbackground(bc);
    gotoxy(x,y);
    printf(" %c%c",219,219);
    gotoxy(x,y+1);
    printf("%c%c%c%c",219,219,219,219);
    gotoxy(x,y+2);
    printf("%c%c%c%c",219,219,219,219);
    gotoxy(x,y+3);
    printf(" %c%c",219,219);
}
void drawTline2222(int x,int y,int col,int w,int fc,int bc)
{
	int j;
	textcolor(fc);
	textbackground(bc);
	for (j=0;j<=col*w;j++)
	{
		gotoxy(x+j,y);
		if(j==0)
			printf("%c",201);
		else if(j==col*w)
			printf("%c",187);
		else if(!(j%w))
            if(!(j/3%w))
                printf("%c",203);
            else
                printf("%c",209);
		else
			printf("%c",205);
	}
}
void drawBline2222(int x,int y,int col,int w,int fc,int bc)
{
	int j;
	textcolor(fc);
	textbackground(bc);
	for (j=0;j<=col*w;j++)
	{
		gotoxy(x+j,y);
		if(j==0)
			printf("%c",200);
		else if(j==col*w)
			printf("%c",188);
		else if(!(j%w))
            if(!(j/3%w))
                printf("%c",202);
            else
                printf("%c",207);
		else
			printf("%c",205);
	}
}
void drawJline2222(int x,int y,int col,int w,int fc,int bc)
{
	int j;
	textcolor(fc);
	textbackground(bc);
	for (j=0;j<=col*w;j++)
	{
		gotoxy(x+j,y);
		if(j==0)
			printf("%c",204);
		else if(j==col*w)
			printf("%c",185);
		else if(!(j%w))
            if(!(j/3%w))
                printf("%c",206);
            else
                printf("%c",216);
		else
			printf("%c",205);
	}
}void drawJline2122(int x,int y,int col,int w,int fc,int bc)
{
	int j;
	textcolor(fc);
	textbackground(bc);
	for (j=0;j<=col*w;j++)
	{
		gotoxy(x+j,y);
		if(j==0)
			printf("%c",199);
		else if(j==col*w)
			printf("%c",182);
		else if(!(j%w))
            if(!(j/3%w))
                printf("%c",215);
            else
                printf("%c",197);
		else
			printf("%c",196);
	}
}
void drawSline2(int x,int y,int col,int w,int fc,int bc,int flag)
{
	int j;
	textcolor(fc);
	textbackground(bc);
	for (j=0;j<=col*w;j++)
	{
		gotoxy(x+j,y);
		if(!(j%w))
            if(!(j/3%w))
                printf("%c",186);
            else
                printf("%c",179);
		else
            if(flag)
                printf(" ");
            else
                printf("%c",219);
	}
}
//Function to draw box using (x,y) coordinates and length and breadth of box
void drawTline1111(int,int,int,int,int,int);
void drawBline1111(int,int,int,int,int,int);
void drawJline1111(int,int,int,int,int,int);
void drawSline1(int,int,int,int,int,int,int);
void drawTable(int x,int y,int col,int row,int w,int h,int fc,int bc,int flag)
{
	int i;
	for (i=0;i<=row*h;i++)
	{
		if(i==0)
			drawTline1111(x,y,col,w,fc,bc);
		else if(i==row*h)
			drawBline1111(x,y+row*h,col,w,fc,bc);
		else if(!(i%h))
			drawJline1111(x,y+i,col,w,fc,bc);
		else
			drawSline1(x,y+i,col,w,fc,bc,flag);
	}
}
void drawSuduku99(int x,int y,int w,int h,int fc,int bc,int flag)
{
	int i;
	textcolor(fc);
	textbackground(bc);
	for (i=0;i<=9*h;i++)
	{
		if(i==0)
			drawTline2222(x,y,9,w,fc,bc);
		else if(i==9*h)
			drawBline2222(x,y+9*h,9,w,fc,bc);
		else if(!(i%h))
            if(!(i/h%3))
                drawJline2222(x,y+i,9,w,fc,bc);
            else
                drawJline2122(x,y+i,9,w,fc,bc);
		else
			drawSline2(x,y+i,9,w,fc,bc,flag);
	}
}
void drawTline1111(int x,int y,int col,int w,int fc,int bc)
{
	int j;
	textcolor(fc);
	textbackground(bc);
	for (j=0;j<=col*w;j++)
	{
		gotoxy(x+j,y);
		if(j==0)
			printf("%c",218);
		else if(j==col*w)
			printf("%c",191);
		else if(!(j%w))
			printf("%c",194);
		else
			printf("%c",196);
	}
}
void drawBline1111(int x,int y,int col,int w,int fc,int bc)
{
	int j;
	textcolor(fc);
	textbackground(bc);
	for (j=0;j<=col*w;j++)
	{
		gotoxy(x+j,y);
		if(j==0)
			printf("%c",192);
		else if(j==col*w)
			printf("%c",217);
		else if(!(j%w))
			printf("%c",193);
		else
			printf("%c",196);
	}
}
void drawJline1111(int x,int y,int col,int w,int fc,int bc)
{
	int j;
	textcolor(fc);
	textbackground(bc);
	for (j=0;j<=col*w;j++)
	{
		gotoxy(x+j,y);
		if(j==0)
			printf("%c",195);
		else if(j==col*w)
			printf("%c",180);
		else if(!(j%w))
			printf("%c",197);
		else
			printf("%c",196);
	}
}
void drawSline1(int x,int y,int col,int w,int fc,int bc,int flag)
{
	int j;
	textcolor(fc);
	textbackground(bc);
	for (j=0;j<=col*w;j++)
	{
		gotoxy(x+j,y);
		if(!(j%w))
			printf("%c",179);
		else
            if(flag)
                printf(" ");
            else
                printf("%c",219);
	}
}
void setbkcolor(int color)
{
    int i,j;
    textbackground(color);
    for(i=0;i<40;i++)
    {
        for(j=0;j<80;j++)
        {
            gotoxy(j,i);
            printf(" ");
        }
    }
}
void setConSize(int x,int y)
{
    char str[32];   // Use an array which is large enough
    snprintf(str, sizeof(str), "mode con:cols=%d lines=%d",x,y);
    system(str);
}
void drawBox(int x,int y,int lenght,int breadth,int bc,int fc)
{
	int i,j;
	textcolor(fc);
	textbackground(bc);
	gotoxy(x,y);                      //left top corner.
	printf("%c",218);                //left top corner.
	gotoxy(x+lenght+1,y);             //right top corner.
	printf("%c",191);                //right top corner.
	gotoxy(x,y+breadth+1);            //left bottom corner.
	printf("%c",192);                //left bottom corner.
	gotoxy(x+lenght+1,y+breadth+1);   //right bottom corner.
	printf("%c",217);                //right bottom corner.
	for(i=x+1;i<x+lenght+1;i++)
	{
		gotoxy(i,y);
		printf("%c",196);
		gotoxy(i,y+breadth+1);
		printf("%c",196);
	}
	for(j=y+1;j<y+breadth+1;j++)
	{
		gotoxy(x,j);
		printf("%c",179);
		gotoxy(x+lenght+1,j);
		printf("%c",179);
	}
}
void drawBoxNative(int x,int y,int lenght,int breadth)
{
	int i,j;
	gotoxy(x,y);                      //left top corner.
	printf("%c",218);                //left top corner.
	gotoxy(x+lenght+1,y);             //right top corner.
	printf("%c",191);                //right top corner.
	gotoxy(x,y+breadth+1);            //left bottom corner.
	printf("%c",192);                //left bottom corner.
	gotoxy(x+lenght+1,y+breadth+1);   //right bottom corner.
	printf("%c",217);                //right bottom corner.
	for(i=x+1;i<x+lenght+1;i++)
	{
		gotoxy(i,y);
		printf("%c",196);
		gotoxy(i,y+breadth+1);
		printf("%c",196);
	}
	for(j=y+1;j<y+breadth+1;j++)
	{
		gotoxy(x,j);
		printf("%c",179);
		gotoxy(x+lenght+1,j);
		printf("%c",179);
	}
}
//Function to draw line using (x,y) coordinates and length of the line.
void drawXline111(int x,int y,int lenght,int bc,int fc)
{
	int i;
	textcolor(fc);
	textbackground(bc);
	gotoxy(x,y);                   //left corner.
	printf("%c",195);             //left corner.
	gotoxy(x+lenght+1,y);          //right corner.
	printf("%c",180);             //right corner.
	for(i=1;i<lenght+1;i++)
	{
		gotoxy(x+i,y);
		printf("%c",196);
	}
}
//Function to draw box using (x,y) coordinates and length and breadth of box
void drawBox2(int x,int y,int lenght,int breadth,int bc,int fc)
{
	int i,j;
	textcolor(fc);
	textbackground(bc);
	gotoxy(x,y);                      //left top corner.
	printf("%c",201);                //left top corner.
	gotoxy(x+lenght+1,y);             //right top corner.
	printf("%c",187);                //right top corner.
	gotoxy(x,y+breadth+1);            //left bottom corner.
	printf("%c",200);                //left bottom corner.
	gotoxy(x+lenght+1,y+breadth+1);   //right bottom corner.
	printf("%c",188);                //right bottom corner.
	for(i=x+1;i<x+lenght+1;i++)
	{
		gotoxy(i,y);
		printf("%c",205);
		gotoxy(i,y+breadth+1);
		printf("%c",205);
	}
	for(j=y+1;j<y+breadth+1;j++)
	{
		gotoxy(x,j);
		printf("%c",186);
		gotoxy(x+lenght+1,j);
		printf("%c",186);
	}
}
//Function to draw box using (x,y) coordinates and length and breadth of box
void drawBox2Native(int x,int y,int lenght,int breadth)
{
	int i,j;
	gotoxy(x,y);                      //left top corner.
	printf("%c",201);                //left top corner.
	gotoxy(x+lenght+1,y);             //right top corner.
	printf("%c",187);                //right top corner.
	gotoxy(x,y+breadth+1);            //left bottom corner.
	printf("%c",200);                //left bottom corner.
	gotoxy(x+lenght+1,y+breadth+1);   //right bottom corner.
	printf("%c",188);                //right bottom corner.
	for(i=x+1;i<x+lenght+1;i++)
	{
		gotoxy(i,y);
		printf("%c",205);
		gotoxy(i,y+breadth+1);
		printf("%c",205);
	}
	for(j=y+1;j<y+breadth+1;j++)
	{
		gotoxy(x,j);
		printf("%c",186);
		gotoxy(x+lenght+1,j);
		printf("%c",186);
	}
}
//Function to draw horizontal line using (x,y) coordinates and length of the line.
void drawXline212(int x,int y,int lenght,int bc,int fc)
{
	int i;
	textcolor(fc);
	textbackground(bc);
	gotoxy(x,y);                   //left corner.
	printf("%c",199);             //left corner.
	gotoxy(x+lenght+1,y);          //right corner.
	printf("%c",182);             //right corner.
	for(i=1;i<lenght+1;i++)
	{
		gotoxy(x+i,y);
		printf("%c",196);
	}
}
//Function to draw vertical line using (x,y) coordinates and length of the line.
void drawYline112(int x,int y,int height,int bc,int fc)
{
	int i;
	textcolor(fc);
	textbackground(bc);
	gotoxy(x,y);                   //left corner.
	printf("%c",194);             //left corner.
	gotoxy(x,y+height+1);          //right corner.
	printf("%c",207);             //right corner.
	for(i=1;i<height+1;i++)
	{
		gotoxy(x,y+i);
		printf("%c",179);
	}
}
void drawbgcolor(int x,int y,int height,int width,int bc,int fc)
{
	int i,j;
	textcolor(fc);
	textbackground(bc);
	for(i=0;i<height;i++)
	{
		for(j=0;j<width;j++)
		{
			gotoxy(x+i,y+j);
			printf("%c",219);
		}
	}
}
void drawMatrix(int x,int y,int row,int col,int wdt,int bc,int fc)
{
	int i;
	textcolor(fc);
	textbackground(bc);
	gotoxy(x,y);
	printf("%c",218);
	gotoxy(x,y+col+1);
	printf("%c",192);
	gotoxy(x+row*wdt+3,y);
	printf("%c",191);
	gotoxy(x+row*wdt+3,y+col+1);
	printf("%c",217);
	for(i=1;i<=col;i++)
	{
		gotoxy(x,y+i);
		printf("%c",179);
		gotoxy(x+row*wdt+3,y+i);
		printf("%c",179);
	}
}
void drawDeterm(int x,int y,int row,int col,int wdt,int bc,int fc)
{
	int i;
	textcolor(fc);
	textbackground(bc);
	for(i=0;i<=col+1;i++)
	{
		gotoxy(x,y+i);
		printf("%c",179);
		gotoxy(x+row*wdt+3,y+i);
		printf("%c",179);
	}
}
void drawMenu()
{
	clrscr();
	drawBox2(1,1,78,22,11,1);
	drawXline212(1,5,78,11,1);
	drawbgcolor(2,2,78,3,1,1);
	textcolor(1);
}
void drawSet()
{	clrscr();
	drawBox2(1,1,78,22,11,1);
	drawXline212(1,5,78,11,1);
	drawYline112(50,5,18,11,1);
	drawbgcolor(2,2,78,3,1,1);
	textcolor(1);
}
void clrpnl(int x,int xl,int y,int yl)
{
	int xx;
	textcolor(12);
	for(;y<=yl;y++)
	{
		for(xx=x;xx<=xl;xx++)
		{
			gotoxy(xx,y);
			printf(" ");//or printf("%c",219);
		}
	}
	textcolor(0);
}
void drawTri_l_b(int x,int y,int s,int clr)
{
	int i,j;
	for(i=0;i<s;i++)
	{
		for(j=0;j<=i;j++)
		{
			gotoxy(x+j,y+i);
			textcolor(clr);
//			if(j!=s-1)
				printf("%c",219);
  //			else
    //				printf("%c",219);
		}
	}
	textcolor(0);

}
void drawTri_r_t(int x,int y,int s,int clr)
{
	int i,j;
	for(i=0;i<s;i++)
	{
		for(j=i+1;j<=s;j++)
		{
			gotoxy(x+j,y+i);
			textcolor(clr);
//			if(j!=s-1)
				printf("%c",219);
  //			else
    //				printf("%c",219);
		}
	}
	textcolor(0);

}
void drawTri_r_b(int x,int y,int s,int clr)
{
	int i,j;
	for(i=0;i<s;i++)
	{
		for(j=s-i;j<=s;j++)
		{
			gotoxy(x+j,y+i);
			textcolor(clr);
//			if(j!=s-1)
				printf("%c",219);
  //			else
    //				printf("%c",219);
		}
	}
	textcolor(0);

}
void drawTri_l_t(int x,int y,int s,int clr)
{
	int i,j;
	for(i=0;i<s;i++)
	{
		for(j=0;j<s-i;j++)
		{
			gotoxy(x+j,y+i);
			textcolor(clr);
//			if(j!=s-1)
				printf("%c",219);
  //			else
    //				printf("%c",219);
		}
	}
	textcolor(0);

}
void drawPyramid_b(int x,int y,int s,int clr)
{
	drawTri_r_b(x,y,s/2+1,clr);
	drawTri_l_b(x+s/2+1,y,s/2+1,clr);
}
void drawPyramid_t(int x,int y,int s,int clr)
{
	drawTri_r_t(x,y,s/2+1,clr);
	drawTri_l_t(x+s/2+1,y,s/2+1,clr);
}
void drawDiamond(int x,int y,int s,int clr)
{
	drawTri_r_b(x,y,s/4+1,clr);
	drawTri_l_b(x+s/4+1,y,s/4+1,clr);
	drawTri_r_t(x,y+s/4,s/4+1,clr);
	drawTri_l_t(x+s/4+1,y+s/4,s/4+1,clr);
}


#endif // GRPHCS_H_INCLUDED
