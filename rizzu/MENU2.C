//Global variables
extern int xx[50][50],yy[50][50],i,j,n,ch2;

void menu2();

//Functions of menu2() function.
void printDig();
void transpose();
void matsum();
void matdif();
void matmul();
void matadj();
void matdet();

void recommend();

void menu2()
{
	drawMenu();
	drawBox(22,2,35,1);
	gotoxy(24,3);
	textcolor(BRDR);
	printf("Main Menu ");
	textcolor(MENU);
	printf("%c Operation on 2D Array",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(4,6);
	printf("1. Print Diagonal.");
	gotoxy(4,7);
	printf("2. Transpose of a matrix.");
	gotoxy(4,8);
	printf("3. Sum of two matrices.");
	gotoxy(4,9);
	printf("4. Difference of two matrices.");
	gotoxy(4,10);
	printf("5. Product of two matrices.");
	gotoxy(4,11);
	printf("6. Adjoint of Matrix.");
	gotoxy(4,12);
	printf("7. Determinant.");
	gotoxy(4,13);
	printf("8. Back.");
	gotoxy(4,14);
	printf("Enter your choice corresponding to number with option...");
	scanf("%d",&ch2);
	switch(ch2)
	{
		case 1:
			printDig();
			getch();menu2();
		case 2:
			transpose();
			getch();menu2();
		case 3:
			matsum();
			getch();menu2();
		case 4:
			matdif();
			getch();menu2();
		case 5:
			matmul();
			getch();menu2();
		case 6:
			matadj();
			getch();menu2();
		case 7:
			matdet();
			getch();menu2();
		case 8:
			main();
		default:
			printf("Enter valid option\n");
			menu2();
	}
}

////////////////////////////////////////////////////////////////////
//-----------------------Functions of Menu 2----------------------//
////////////////////////////////////////////////////////////////////
void printDig()
{
	drawSet();
	drawBox(8,2,64,1);
	gotoxy(10,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on 2D Array ",16);
	textcolor(MENU);
	printf("%c Print Diagonal of a Matrix",16);
	textbackground(BACK);
	textcolor(TXET);
	recommend();
	gotoxy(4,6);
	printf("Enter the size of the Matrix.");
	scanf("%d",&n);
	drawMatrix(21,7,n,n,MATWIDTH);
	gotoxy(4,8);
	printf("The first Matrix:");
	for(i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			gotoxy(23+j*MATWIDTH,8+i);
			scanf("%d",(*(xx+i)+j));
		}
	}
	drawMatrix(21,9+n,n,n,MATWIDTH);
	gotoxy(4,10+n);
	printf("The Diagonal is: ");
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			if (i==j)
			{
				gotoxy(23+j*MATWIDTH,10+n+i);
				printf("%d",*(*(xx+i)+j));
			}
		}
	}
}
void transpose()
{
	drawSet();
	drawBox(10,2,59,1);
	gotoxy(12,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on 2D Array ",16);
	textcolor(MENU);
	printf("%c Transpose of a Matrix",16);
	textbackground(BACK);
	textcolor(TXET);
	recommend();
	gotoxy(4,6);
	printf("Enter the size of the Matrix.");
	scanf("%d",&n);
	drawMatrix(21,7,n,n,MATWIDTH);
	gotoxy(4,8);
	printf("The first Matrix:");
	for(i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			gotoxy(23+j*MATWIDTH,8+i);
			scanf("%d",(*(xx+i)+j));
		}
	}
	drawMatrix(21,9+n,n,n,MATWIDTH);
	gotoxy(4,10+n);
	printf("The Transpose is:");
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			gotoxy(23+j*MATWIDTH,10+n+i);
			printf("%d",*(*(xx+j)+i));
		}
	}
}
void matsum()
{
	drawSet();
	drawBox(9,2,62,1);
	gotoxy(11,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on 2D Array ",16);
	textcolor(MENU);
	printf("%c Addition of Two Matrices",16);
	textbackground(BACK);
	textcolor(TXET);
	recommend();
	gotoxy(4,6);
	printf("Enter the size of the Matrix.");
	scanf("%d",&n);
	drawMatrix(21,7,n,n,MATWIDTH);
	gotoxy(4,8);
	printf("The first Matrix:");
	for(i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			gotoxy(23+j*MATWIDTH,8+i);
			scanf("%d",(*(xx+i)+j));
		}
	}
	drawMatrix(21,9+n,n,n,MATWIDTH);
	gotoxy(4,10+n);
	printf("The Second Matrix");
	for(i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			gotoxy(23+j*MATWIDTH,10+n+i);
			scanf("%d",(*(yy+i)+j));
		}
	}
	drawMatrix(51,13,n,n,MATWIDTH);
	gotoxy(4,12+2*n);
	printf("Sum of Matrices: ---> ");
	gotoxy(51,12);
	printf("Sum of Matrices: ");
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			gotoxy(53+j*MATWIDTH,14+i);
			printf("%d",*(*(xx+i)+j) + *(*(yy+i)+j));
		}
	}
}
void matdif()
{
	drawSet();
	drawBox(8,2,65,1);
	gotoxy(10,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on 2D Array ",16);
	textcolor(MENU);
	printf("%c Subtraction of Two Matrices",16);
	textbackground(BACK);
	textcolor(TXET);
	recommend();
	gotoxy(4,6);
	printf("Enter the size of the Matrix.");
	scanf("%d",&n);
	drawMatrix(21,7,n,n,MATWIDTH);
	gotoxy(4,8);
	printf("The first Matrix:");
	for(i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			gotoxy(23+j*MATWIDTH,8+i);
			scanf("%d",(*(xx+i)+j));
		}
	}
	drawMatrix(21,9+n,n,n,MATWIDTH);
	gotoxy(4,10+n);
	printf("The Second Matrix");
	for(i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			gotoxy(23+j*MATWIDTH,10+n+i);
			scanf("%d",(*(yy+i)+j));
		}
	}
	drawMatrix(51,13,n,n,MATWIDTH);
	gotoxy(4,12+2*n);
	printf("Difference of Matrices: --->");
	gotoxy(51,12);
	printf("Difference of Matrices:");
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			gotoxy(53+j*MATWIDTH,14+i);
			printf("%d",*(*(xx+i)+j) - *(*(yy+i)+j));
		}
	}
}
void matmul()
{
	int mat[100][100],k;
	drawSet();
	drawBox(6,2,68,1);
	gotoxy(8,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on 2D Array ",16);
	textcolor(MENU);
	printf("%c Multiplication of Two Matrices",16);
	textbackground(BACK);
	textcolor(TXET);
	recommend();
	gotoxy(4,6);
	printf("Enter the size of the Matrix.");
	scanf("%d",&n);
	drawMatrix(21,7,n,n,MATWIDTH);
	gotoxy(4,8);
	printf("The first Matrix:");
	for(i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			gotoxy(23+j*MATWIDTH,8+i);
			scanf("%d",(*(xx+i)+j));
		}
	}
	drawMatrix(21,9+n,n,n,MATWIDTH);
	gotoxy(4,10+n);
	printf("The Second Matrix");
	for(i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			gotoxy(23+j*MATWIDTH,10+n+i);
			scanf("%d",(*(yy+i)+j));
		}
	}
	drawMatrix(51,13,n,n,MATWIDTH);
	gotoxy(4,12+2*n);
	printf("Product of Matrices: --->");
	gotoxy(51,12);
	printf("Product of Matrices: ");
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				*(*(mat+i)+j)+=*(*(xx+i)+k) * *(*(yy+k)+j);
			}
			gotoxy(53+j*MATWIDTH,14+i);
			printf("%d",*(*(mat+i)+j));
		}
	}
}
void matadj()
{
	int k,l,m,o;
	drawSet();
	drawBox(9,2,57,1);
	gotoxy(11,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on 2D Array ",16);
	textcolor(MENU);
	printf("%c Adjoint of a Matrix",16);
	textbackground(BACK);
	textcolor(TXET);
	recommend();
	gotoxy(4,6);
	printf("Enter the size of the Matrix.");
	scanf("%d",&n);
	drawMatrix(21,7,n,n,MATWIDTH);
	gotoxy(4,8);
	printf("The first Matrix:");
	for(i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			gotoxy(23+j*MATWIDTH,8+i);
			scanf("%d",(*(xx+i)+j));
		}
	}
	for(i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			k=i+1;
			l=i+2;
			m=j+1;
			o=j+2;
			if(k>2)
				k-=3;
			if(l>2)
				l-=3;
			if(m>2)
				m-=3;
			if(o>2)
				o-=3;
			*(*(yy+i)+j)=*(*(xx+k)+m) * *(*(xx+l)+o) - *(*(xx+k)+o) * *(*(xx+l)+m);
		}
	}
	drawMatrix(21,9+n,n,n,MATWIDTH);
	gotoxy(4,10+n);
	printf("The Adjoint is: ");
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			gotoxy(23+j*MATWIDTH,10+n+i);
			printf("%d",*(*(yy+j)+i));
		}
	}
}
void matdet()
{
	int k,l,m,o;
	drawSet();
	drawBox(14,2,48,1);
	gotoxy(16,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on 2D Array ",16);
	textcolor(MENU);
	printf("%c Determinant",16);
	textbackground(BACK);
	textcolor(TXET);
	recommend();
	gotoxy(4,6);
	printf("Enter the size of the Determinant.");
	scanf("%d",&n);
	drawDeterm(21,7,n,n,MATWIDTH);
	gotoxy(4,8);
	printf("The Determinant:");
	for(i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			gotoxy(23+j*MATWIDTH,8+i);
			scanf("%d",(*(xx+i)+j));
		}
	}
	for(i=0;i<n;i++)
	{
		j=0;
		k=i+1;
		l=i+2;
		m=j+1;
		o=j+2;
		if(k>2)
			k-=3;
		if(l>2)
			l-=3;
		if(m>2)
			m-=3;
		if(o>2)
			o-=3;
		*(*(yy+i)+j)=*(*(xx+k)+m) * *(*(xx+l)+o) - *(*(xx+k)+o) * *(*(xx+l)+m);
		*(*(xx+i)+j)*=*(*(yy+i)+j);
	}
	for (i=0,j=0;i<n;i++)
	{
		k+=*(*(xx+i)+j);
	}
	gotoxy(4,10+n);
	printf("The Determinant is: %d",k);
}
void recommend()
{
	gotoxy(51,6);
	printf("Recommendations:");
	gotoxy(51,8);
	printf("-*- Matrix Size: 2 to 5.");
	gotoxy(51,10);
	printf("-*- -1000 < Element < 10000.");
}
////////////////////////////////////////////////////////////////////
