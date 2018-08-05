//Global variables
extern int x[50],y[50],i,j,n,ch2;

void menu1();

//Functions of menu1() function.
void add();
void subtract();
void multiply();
void maximum();
void minimum();
void search();
void addAll();
void addFirstToLast();
void searchInBoth();
void maxInBoth();
void minInBoth();
void middle();
void fromLast();


void menu1()
{
	drawMenu();
	drawBox(22,2,35,1);
	gotoxy(24,3);
	textcolor(BRDR);
	printf("Main Menu ");
	textcolor(MENU);
	printf("%c Operation on 1D Array",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(4,6);
	printf("1. Addition of two lists with corresponding number from the lists.");
	gotoxy(4,7);
	printf("2. Subtraction of two lists with corresponding number from the lists.");
	gotoxy(4,8);
	printf("3. Multiplication of two lists with corresponding number from the lists.");
	gotoxy(4,9);
	printf("4. Maximum number in a list.");
	gotoxy(4,10);
	printf("5. Minimum number in a list.");
	gotoxy(4,11);
	printf("6. Search a number in a list.");
	gotoxy(4,12);
	printf("7. Addition of all number in a list.");
	gotoxy(4,13);
	printf("8. Addition of two lists in reverse order.");
	gotoxy(4,14);
	printf("9. Search a number in two lists.");
	gotoxy(3,15);
	printf("10. Maximum number in two lists.");
	gotoxy(3,16);
	printf("11. Minimum number in two lists.");
	gotoxy(3,17);
	printf("12. Middle number in a list.");
	gotoxy(3,18);
	printf("13. N number from last in a list.");
	gotoxy(3,19);
	printf("14. Back");
	gotoxy(3,20);
	printf("Enter your choice corresponding to number with option...");
	scanf("%d",&ch2);
	switch(ch2)
	{
		case 1:
			add();
			getch();menu1();
		case 2:
			subtract();
			getch();menu1();
		case 3:
			multiply();
			getch();menu1();
		case 4:
			maximum();
			getch();menu1();
		case 5:
			minimum();
			getch();menu1();
		case 6:
			search();
			getch();menu1();
		case 7:
			addAll();
			getch();menu1();
		case 8:
			addFirstToLast();
			getch();menu1();
		case 9:
			searchInBoth();
			getch();menu1();
		case 10:
			maxInBoth();
			getch();menu1();
		case 11:
			minInBoth();
			getch();menu1();
		case 12:
			middle();
			getch();menu1();
		case 13:
			fromLast();
			getch();menu1();
		case 14:
			main();
		default:
			printf("Enter valid option\n");
			getch();menu1();
	}
}

////////////////////////////////////////////////////////////////////
//-----------------------Functions of Menu 1----------------------//
////////////////////////////////////////////////////////////////////
void add()
{
	drawSet();
	drawBox(10,2,59,1);
	gotoxy(12,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on 1D Array ",16);
	textcolor(MENU);
	printf("%c Addition of Two lists",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(51,6);
	printf("Recommended Size: 2 to 20.");
	gotoxy(4,6);
	printf("Enter the size of the lists.");
	scanf("%d",&n);
	gotoxy(4,7);
	printf("The first Array or List.");
	for(i=0;i<n;i++)
	{
		gotoxy(4,8+i);
		printf("Enter the %d number or [%d] element: ",i+1,i);
		scanf("%d",(x+i));
	}
	gotoxy(4,8+i);
	printf("The Second Array or List.");
	for(j=0;j<n;j++)
	{
		gotoxy(4,9+i+j);
		printf("Enter the %d number or [%d] element: ",j+1,j);
		scanf("%d",(y+j));
	}
	clrpnl(3,49,6,20);
	gotoxy(4,7);
	printf("The sum of the list is...");
	for(i=0;i<n;i++)
	{
		gotoxy(4,8+i);
		printf("%d",*(x+i) + *(y+i));
	}
	for(i=0;i<n;i++)
	{
		gotoxy(52,7+i);
		printf("%d + %d = %d",*(x+i),*(y+i),*(x+i) + *(y+i));
	}
}
void subtract()
{
	drawSet();
	drawBox(9,2,62,1);
	gotoxy(11,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on 1D Array ",16);
	textcolor(MENU);
	printf("%c Subtraction of Two lists",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(51,6);
	printf("Recommended Size: 2 to 20.");
	gotoxy(4,6);
	printf("Enter the size of the lists.");
	scanf("%d",&n);
	gotoxy(4,7);
	printf("The first Array or List.");
	for(i=0;i<n;i++)
	{
		gotoxy(4,8+i);
		printf("Enter the %d number or [%d] element: ",i+1,i);
		scanf("%d",(x+i));
	}
	gotoxy(4,8+i);
	printf("The Second Array or List.");
	for(j=0;j<n;j++)
	{
		gotoxy(4,9+i+j);
		printf("Enter the %d number or [%d] element: ",j+1,j);
		scanf("%d",(y+j));
	}
	clrpnl(3,49,6,20);
	gotoxy(4,7);
	printf("The difference of the list is...");
	for(i=0;i<n;i++)
	{
		gotoxy(4,8+i);
		printf("%d",*(x+i) - *(y+i));
	}
	for(i=0;i<n;i++)
	{
		gotoxy(52,7+i);
		printf("%d - %d = %d",*(x+i),*(y+i),*(x+i) - *(y+i));
	}
}
void multiply()
{
	drawSet();
	drawBox(8,2,65,1);
	gotoxy(10,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on 1D Array ",16);
	textcolor(MENU);
	printf("%c Multiplication of Two lists",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(51,6);
	printf("Recommended Size: 2 to 20.");
	gotoxy(4,6);
	printf("Enter the size of the lists.");
	scanf("%d",&n);
	gotoxy(4,7);
	printf("The first Array or List.");
	for(i=0;i<n;i++)
	{
		gotoxy(4,8+i);
		printf("Enter the %d number or [%d] element: ",i+1,i);
		scanf("%d",(x+i));
	}
	gotoxy(4,8+i);
	printf("The Second Array or List.");
	for(j=0;j<n;j++)
	{
		gotoxy(4,9+i+j);
		printf("Enter the %d number or [%d] element: ",j+1,j);
		scanf("%d",(y+j));
	}
	clrpnl(3,49,6,20);
	gotoxy(4,7);
	printf("The Multiplication of the list is...");
	for(i=0;i<n;i++)
	{
		gotoxy(4,8+i);
		printf("%d",*(x+i) * *(y+i));
	}
	for(i=0;i<n;i++)
	{
		gotoxy(52,7+i);
		printf("%d x %d = %d",*(x+i),*(y+i),*(x+i) * *(y+i));
	}
}
void maximum()
{
	int max;
	drawSet();
	drawBox(9,2,62,1);
	gotoxy(11,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on 1D Array ",16);
	textcolor(MENU);
	printf("%c Maximum Number in a list",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(51,6);
	printf("Recommended Size: 2 to 20.");
	gotoxy(4,6);
	printf("Enter the size of the list.");
	scanf("%d",&n);
	gotoxy(4,7);
	printf("The first Array or List.");
	for(i=0;i<n;i++)
	{
		gotoxy(4,7+i);
		printf("Enter the %d number or [%d] element: ",i+1,i);
		scanf("%d",(x+i));
	}
	max=*x;
	for(i=0;i<n;i++)
	{
		gotoxy(52,7+i);
		printf("%d > %d",*(x+i),max);
		max=(*(x+i)>max)?*(x+i):max;
		if(max==*(x+i))
			printf(" So max=%d",max);
	}
	gotoxy(4,8+i);
	printf("The maximum in the list is %d",max);
}
void minimum()
{
	int min;
	drawSet();
	drawBox(9,2,62,1);
	gotoxy(11,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on 1D Array ",16);
	textcolor(MENU);
	printf("%c Minimum Number in a list",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(51,6);
	printf("Recommended Size: 2 to 20.");
	gotoxy(4,6);
	printf("Enter the size of the list.");
	scanf("%d",&n);
	gotoxy(4,7);
	printf("The first Array or List.");
	for(i=0;i<n;i++)
	{
		gotoxy(4,7+i);
		printf("Enter the %d number or [%d] element: ",i+1,i);
		scanf("%d",(x+i));
	}
	min=*x;
	for(i=0;i<n;i++)
	{
		gotoxy(52,7+i);
		printf("%d < %d",*(x+i),min);
		min=(*(x+i)<min)?*(x+i):min;
		if(min==*(x+i))
			printf(" So min=%d",min);
	}
	gotoxy(4,8+i);
	printf("The minimum in the list is %d",min);
}
void search()
{
	int t,num;
	drawSet();
	drawBox(9,2,63,1);
	gotoxy(11,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on 1D Array ",16);
	textcolor(MENU);
	printf("%c Search a Number in a list",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(51,6);
	printf("Recommended Size: 2 to 20.");
	gotoxy(4,6);
	printf("Enter the size of the list.");
	scanf("%d",&n);
	gotoxy(4,7);
	printf("The first Array or List.");
	for(i=0;i<n;i++)
	{
		gotoxy(4,7+i);
		printf("Enter the %d number or [%d] element: ",i+1,i);
		scanf("%d",(x+i));
	}
	gotoxy(4,7+i);
	t=7+i;
	printf("Enter the number to be searched: ");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(num==*(x+i))
		{
			gotoxy(4,t+2);
			printf("Element Found");
			gotoxy(52,7);
			switch(i+1)
			{
				case 1:	case 11: case 21: case 31: case 41:
				case 51: case 61: case 71: case 81: case 91:
				printf("At [%d] Index or %dst Position",i,i+1);
				break;
				case 2:	case 12: case 22: case 32: case 42:
				case 52: case 62: case 72: case 82: case 92:
				printf("At [%d] Index or %dnd Position",i,i+1);
				break;
				case 3: case 13: case 23: case 33: case 43:
				case 53: case 63: case 73: case 83: case 93:
				printf("At [%d] Index or %drd Position",i,i+1);
				break;
				default:
				printf("At [%d] Index or %dth Position",i,i+1);
			}
			return;
		}
	}
	gotoxy(4,t+2);
	printf("Element Not Found");
}
void addAll()
{
	int i,sum=0;
	drawSet();
	drawBox(11,2,57,1);
	gotoxy(13,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on 1D Array ",16);
	textcolor(MENU);
	printf("%c Addition of a lists",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(51,6);
	printf("Recommended Size: 2 to 20.");
	gotoxy(4,6);
	printf("Enter the size of the lists.");
	scanf("%d",&n);
	gotoxy(4,7);
	printf("The first Array or List.");
	for(i=0;i<n;i++)
	{
		gotoxy(4,8+i);
		printf("Enter the %d number or [%d] element: ",i+1,i);
		scanf("%d",(x+i));
	}
	clrpnl(3,49,6,20);
	gotoxy(4,7);
	printf("The Sum of the All Elements of the list is...");
	for(i=0;i<n;i++)
	{
		gotoxy(52,7+i);
		printf("%d + %d = %d",*(x+i),sum,sum + *(x+i));
		sum+=*(x+i);
	}
	gotoxy(4,8);
	printf("The sum of the Array is %d",sum);
}
void addFirstToLast()
{
	drawSet();
	drawBox(6,2,67,1);
	gotoxy(8,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on 1D Array ",16);
	textcolor(MENU);
	printf("%c Reverse Addition of Two lists",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(51,6);
	printf("Recommended Size: 2 to 20.");
	gotoxy(4,6);
	printf("Enter the size of the lists.");
	scanf("%d",&n);
	gotoxy(4,7);
	printf("The first Array or List.");
	for(i=0;i<n;i++)
	{
		gotoxy(4,8+i);
		printf("Enter the %d number or [%d] element: ",i+1,i);
		scanf("%d",(x+i));
	}
	gotoxy(4,8+i);
	printf("The Second Array or List.");
	for(j=0;j<n;j++)
	{
		gotoxy(4,9+i+j);
		printf("Enter the %d number or [%d] element: ",j+1,j);
		scanf("%d",(y+j));
	}
	clrpnl(3,49,6,20);
	gotoxy(4,7);
	printf("The sum of the list is...");
	for(i=0;i<n;i++)
	{
		gotoxy(4,8+i);
		printf("%d",*(x+i) + *(y+n-i-1));
	}
	for(i=0;i<n;i++)
	{
		gotoxy(52,7+i);
		printf("%d + %d = %d",*(x+i),*(y+n-i-1),*(x+i) + *(y+n-i-1));
	}
}
void searchInBoth()
{
	int t,num;
	drawSet();
	drawBox(9,2,63,1);
	gotoxy(11,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on 1D Array ",16);
	textcolor(MENU);
	printf("%c Search a Number in a list",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(51,6);
	printf("Recommended Size: 2 to 20.");
	gotoxy(4,6);
	printf("Enter the size of the list.");
	scanf("%d",&n);
	gotoxy(4,7);
	printf("The first Array or List.");
	for(i=0;i<n;i++)
	{
		gotoxy(4,7+i);
		printf("Enter the %d number or [%d] element: ",i+1,i);
		scanf("%d",(x+i));
	}
	gotoxy(4,8+i);
	printf("The Second Array or List.");
	for(j=0;j<n;j++)
	{
		gotoxy(4,9+i+j);
		printf("Enter the %d number or [%d] element: ",j+1,j);
		scanf("%d",(y+j));
	}
	t=10+i+j;
	gotoxy(4,t);
	printf("Enter the number to be searched: ");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(num==*(x+i)||num==*(y+i))
		{
			gotoxy(4,t+2);
			printf("Element Found");
			gotoxy(52,7);
			if(num==*(x+i))
				printf("In the First array");
			else
				printf("In the Second array");
			gotoxy(52,8);
			switch(i+1)
			{
				case 1:	case 11: case 21: case 31: case 41:
				case 51: case 61: case 71: case 81: case 91:
				printf("At [%d] Index or %dst Position",i,i+1);
				break;
				case 2:	case 12: case 22: case 32: case 42:
				case 52: case 62: case 72: case 82: case 92:
				printf("At [%d] Index or %dnd Position",i,i+1);
				break;
				case 3: case 13: case 23: case 33: case 43:
				case 53: case 63: case 73: case 83: case 93:
				printf("At [%d] Index or %drd Position",i,i+1);
				break;
				default:
				printf("At [%d] Index or %dth Position",i,i+1);
			}
			return;
		}
	}
	gotoxy(4,t+2);
	printf("Element Not Found");
}
void maxInBoth()
{
	int max1,max2,t;
	drawSet();
	drawBox(7,2,65,1);
	gotoxy(9,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on 1D Array ",16);
	textcolor(MENU);
	printf("%c Maximum Number in two lists",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(51,6);
	printf("Recommended Size: 2 to 20.");
	gotoxy(4,6);
	printf("Enter the size of the list.");
	scanf("%d",&n);
	gotoxy(4,7);
	printf("The first Array or List.");
	for(i=0;i<n;i++)
	{
		gotoxy(4,7+i);
		printf("Enter the %d number or [%d] element: ",i+1,i);
		scanf("%d",(x+i));
	}
	gotoxy(4,8+i);
	printf("The Second Array or List.");
	for(j=0;j<n;j++)
	{
		gotoxy(4,9+i+j);
		printf("Enter the %d number or [%d] element: ",j+1,j);
		scanf("%d",(y+j));
	}
	j=10+i+j;
	max1=*x;
	max2=*y;
	for(i=0;i<n;i++)
	{
		gotoxy(52,7+i);
		printf("%d > %d",*(x+i),max1);
		max1=(*(x+i)>max1)?*(x+i):max1;
		if(max1==*(x+i))
			printf(" So max1=%d",max1);
	}
	t=i;
	for(i=0;i<n;i++)
	{
		gotoxy(52,7+t+i);
		printf("%d > %d",*(y+i),max2);
		max2=(*(y+i)>max2)?*(y+i):max2;
		if(max2==*(y+i))
			printf(" So max2=%d",max2);
	}
	gotoxy(52,7+t+i);
	printf("The maximum in the first");
	gotoxy(52,8+t+i);
	printf("list is %d",max1);
	gotoxy(52,9+t+i);
	printf("The maximum in the second");
	gotoxy(52,10+t+i);
	printf("list is %d",max2);
	gotoxy(52,11+t+i);
	printf("%d > %d So max=%d",max1,max2,i=(max1>max2)?max1:max2);
	gotoxy(4,j);
	printf("The maximum in the both list is %d\n",i);
}
void minInBoth()
{
	int min1,min2,t;
	drawSet();
	drawBox(7,2,65,1);
	gotoxy(9,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on 1D Array ",16);
	textcolor(MENU);
	printf("%c Minimum Number in Two lists",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(51,6);
	printf("Recommended Size: 2 to 20.");
	gotoxy(4,6);
	printf("Enter the size of the list.");
	scanf("%d",&n);
	gotoxy(4,7);
	printf("The first Array or List.");
	for(i=0;i<n;i++)
	{
		gotoxy(4,7+i);
		printf("Enter the %d number or [%d] element: ",i+1,i);
		scanf("%d",(x+i));
	}
	gotoxy(4,8+i);
	printf("The Second Array or List.");
	for(j=0;j<n;j++)
	{
		gotoxy(4,9+i+j);
		printf("Enter the %d number or [%d] element: ",j+1,j);
		scanf("%d",(y+j));
	}
	j=10+i+j;
	min1=*x;
	min2=*y;
	for(i=0;i<n;i++)
	{
		gotoxy(52,7+i);
		printf("%d < %d",*(x+i),min1);
		min1=(*(x+i)<min1)?*(x+i):min1;
		if(min1==*(x+i))
			printf(" So min1=%d",min1);
	}
	t=i;
	for(i=0;i<n;i++)
	{
		gotoxy(52,7+t+i);
		printf("%d < %d",*(y+i),min2);
		min2=(*(y+i)<min2)?*(y+i):min2;
		if(min2==*(y+i))
			printf(" So min2=%d",min2);
	}
	gotoxy(52,7+t+i);
	printf("The minimum in the first");
	gotoxy(52,8+t+i);
	printf("list is %d",min1);
	gotoxy(52,9+t+i);
	printf("The minimum in the second");
	gotoxy(52,10+t+i);
	printf("list is %d",min2);
	gotoxy(52,11+t+i);
	printf("%d < %d So min=%d",min1,min2,i=(min1<min2)?min1:min2);
	gotoxy(4,j);
	printf("The maximum in the both list is %d\n",i);
}
void middle()
{
	drawSet();
	drawBox(9,2,61,1);
	gotoxy(11,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on 1D Array ",16);
	textcolor(MENU);
	printf("%c Middle Number in a list",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(51,6);
	printf("Recommended Size: 2 to 20.");
	gotoxy(4,6);
	printf("Enter the size of the list.");
	scanf("%d",&n);
	gotoxy(4,7);
	printf("The first Array or List.");
	for(i=0;i<n;i++)
	{
		gotoxy(4,7+i);
		printf("Enter the %d number or [%d] element: ",i+1,i);
		scanf("%d",(x+i));
	}
	for (i=0,j=0;i<n;i++)
	{
		if (i%2==0)
		{
			j++;
		}
	}
	gotoxy(4,8+i);
	printf("The Middle element is %d",*(x+j-1));
	if(n%2==0)
	{
		printf(" and %d",*(x+j));
	}
	gotoxy(52,7);
	switch(j)
	{
		case 1:	case 11: case 21: case 31: case 41:
		case 51: case 61: case 71: case 81: case 91:
		printf("At [%d] Index or %dst Position",j-1,j);
		break;
		case 2:	case 12: case 22: case 32: case 42:
		case 52: case 62: case 72: case 82: case 92:
		printf("At [%d] Index or %dnd Position",j-1,j);
		break;
		case 3: case 13: case 23: case 33: case 43:
		case 53: case 63: case 73: case 83: case 93:
		printf("At [%d] Index or %drd Position",j-1,j);
		break;
		default:
		printf("At [%d] Index or %dth Position",j-1,j);
	}
	if(n%2==0)
	{
		gotoxy(52,8);
		switch(j+1)
		{
			case 1:	case 11: case 21: case 31: case 41:
			case 51: case 61: case 71: case 81: case 91:
			printf("And");
			gotoxy(52,9);
			printf("At [%d] Index or %dst Position",j,j+1);
				break;
			case 2:	case 12: case 22: case 32: case 42:
			case 52: case 62: case 72: case 82: case 92:
			printf("And");
			gotoxy(52,9);
			printf("At [%d] Index or %dnd Position",j,j+1);
			break;
			case 3: case 13: case 23: case 33: case 43:
			case 53: case 63: case 73: case 83: case 93:
			printf("And");
			gotoxy(52,9);
			printf("At [%d] Index or %drd Position",j,j+1);
			break;
			default:
			printf("And");
			gotoxy(52,9);
			printf("At [%d] Index or %dth Position",j,j+1);
		}
	}
}
void fromLast()
{
	int i,j=0,s,t;
	drawSet();
	drawBox(7,2,66,1);
	gotoxy(9,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on 1D Array ",16);
	textcolor(MENU);
	printf("%c N Number from last in a list",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(51,6);
	printf("Recommended Size: 2 to 20.");
	gotoxy(4,6);
	printf("Enter the size of the list.");
	scanf("%d",&n);
	gotoxy(4,7);
	printf("The first Array or List.");
	for(i=0;i<n;i++)
	{
		gotoxy(4,7+i);
		printf("Enter the %d number or [%d] element: ",i+1,i);
		scanf("%d",(x+i));
	}
	t=8+i;
	gotoxy(4,t);
	printf("Enter the position from the last: ");
	scanf("%d",&s);
	for (i=0;i<n-s;i++)
	{
		j++;
	}
	gotoxy(4,t+1);
	printf("Element from last is %d",*(x+j));
}
////////////////////////////////////////////////////////////////////
