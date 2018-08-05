void range_by_name();
void range_by_age();
void range_by_salary();
void range_by_marks();
void range()
{
    clrpnl(51,79,6,21);
	textbackground(HEAD);
	textcolor(HEAD);
    drawbgcolor(51,6,29,3);
	textcolor(BRDR);
 	drawBox(52,6,24,1);
	gotoxy(54,7);
	textcolor(BRDR);
    printf("Manipulation");
    textcolor(MENU);
    printf(" % c Ranging",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(52,10);
	printf("1. Name");
	gotoxy(52,11);
	printf("2. Age");
	gotoxy(52,12);
	printf("3. %s",som);
	gotoxy(52,13);
	printf("4. Back(%c)",27);
	gotoxy(52,15);
	scanf("%d",&i);
	for(j=0;j<5;j++)
	{
		y[j]=0;
	}
	clrpnl(52,78,6,20);
	switch(i)
	{
		case 1:
		    range_by_name();
            getch();
            range();
		case 2:
		    range_by_age();
            getch();
            range();
		case 3:
		    if(som[0]=='S')
                range_by_salary();
            else
                range_by_marks();
            getch();
            range();
        case 4:
            confirmed();
        default:
			printf("Sorry You Pressed Wrong Key");
			range();
	}
}
void range_by_name()
{
	textbackground(HEAD);
	textcolor(HEAD);
    drawbgcolor(51,6,29,3);
	textcolor(BRDR);
 	drawBox(52,6,26,1);
	gotoxy(54,7);
	textcolor(BRDR);
    printf("Mani... %c Ranging",16);
    textcolor(MENU);
    printf(" %c Name",16);
	textbackground(BACK);
	textcolor(TXET);
	for(i=0;i<n;i++)
	{
	    switch(aa[i][0])
	    {
        case 'A': case 'B': case 'C': case 'D': case 'E':
        case 'a': case 'b': case 'c': case 'd': case 'e':
            y[0]++;
            break;
        case 'F': case 'G': case 'H': case 'I': case 'J':
        case 'f': case 'g': case 'h': case 'i': case 'j':
            y[1]++;
            break;
        case 'K': case 'L': case 'M': case 'N': case 'O':
        case 'k': case 'l': case 'm': case 'n': case 'o':
            y[2]++;
            break;
        case 'P': case 'Q': case 'R': case 'S': case 'T':
        case 'p': case 'q': case 'r': case 's': case 't':
            y[3]++;
            break;
        case 'U': case 'V': case 'W': case 'X': case 'Y': case 'Z':
        case 'u': case 'v': case 'w': case 'x': case 'y': case 'z':
            y[4]++;
            break;
        default:
            y[5]++;
            break;
	    }
		/*if((aa[i][0]>='a'||aa[i][0]>='A')&&(aa[i][0]<='e'||aa[i][0]<='E'))
			y[0]++;
		else if((aa[i][0]>='f'||aa[i][0]>='F')&&(aa[i][0]<='j'||aa[i][0]<='J'))
			y[1]++;
		else if((aa[i][0]>='k'||aa[i][0]>='K')&&(aa[i][0]<='o'||aa[i][0]<='O'))
			y[2]++;
		else if((aa[i][0]>='p'||aa[i][0]>='P')&&(aa[i][0]<='t'||aa[i][0]<='T'))
			y[3]++;
		else if((aa[i][0]>='u'||aa[i][0]>='U')&&(aa[i][0]<='z'||aa[i][0]<='Z'))
			y[4]++;
		else
            y[5]++;*/
    }
	gotoxy(52,10);
	printf("A to E    :");
	gotoxy(52,11);
	printf("F to J    :");
	gotoxy(52,12);
	printf("K to O    :");
	gotoxy(52,13);
	printf("P to T    :");
	gotoxy(52,14);
	printf("U to Z    :");
	gotoxy(52,15);
	printf("Undefined :");
	for(i=0;i<6;i++)
	{
		gotoxy(65,10+i);
		printf("%d",y[i]);
	}
}
void range_by_age()
{
    textbackground(HEAD);
	textcolor(HEAD);
    drawbgcolor(51,6,29,3);
	textcolor(BRDR);
 	drawBox(52,6,25,1);
	gotoxy(54,7);
	textcolor(BRDR);
    printf("Mani... %c Ranging",16);
    textcolor(MENU);
    printf(" %c Age",16);
	textbackground(BACK);
	textcolor(TXET);
	for(i=0;i<n;i++)
	{
		if(x[i]<18)
			y[0]++;
		else if(x[i]>=18&&x[i]<30)
			y[1]++;
		else if(x[i]>=30&&x[i]<50)
			y[2]++;
		else if(x[i]>=50&&x[i]<70)
			y[3]++;
		else if(x[i]>=70)
			y[4]++;
		else
			y[5]++;
	}
	gotoxy(52,10);
	printf("Less than 18 :");
	gotoxy(52,11);
	printf("18 to 30     :");
	gotoxy(52,12);
	printf("30 to 50     :");
	gotoxy(52,13);
	printf("50 to 70     :");
	gotoxy(52,14);
	printf("More than 70 :");
	gotoxy(52,15);
	printf("Undefined    :");
	for(i=0;i<6;i++)
	{
		gotoxy(68,10+i);
		printf("%d",y[i]);
	}
}
void range_by_salary()
{
    textbackground(HEAD);
	textcolor(HEAD);
	drawbgcolor(51,6,28,3);
	textcolor(BRDR);
    drawBox(51,6,27,1);
    gotoxy(53,7);
	textcolor(BRDR);
    printf("Mani... %c Ran...",16);
    textcolor(MENU);
    printf(" %c Salary",16);
	textbackground(BACK);
	textcolor(TXET);
	for(i=0;i<n;i++)
	{
		if(sal[i]<5000)
			y[0]++;
		else if(sal[i]>=5000&&sal[i]<20000)
			y[1]++;
		else if(sal[i]>=20000&&sal[i]<50000)
			y[2]++;
		else if(sal[i]>=50000&&sal[i]<100000)
			y[3]++;
		else if(sal[i]>=100000)
			y[4]++;
		else
			y[5]++;
	}
	gotoxy(52,10);
	printf("Less than 5000   :");
	gotoxy(52,11);
	printf("5000 to 20000    :");
	gotoxy(52,12);
	printf("20000 to 50000   :");
	gotoxy(52,13);
	printf("50000 to 100000  :");
	gotoxy(52,14);
	printf("More than 100000 :");
	gotoxy(52,15);
	printf("Undefined        :");
	for(i=0;i<6;i++)
	{
		gotoxy(72,10+i);
		printf("%d",y[i]);
	}
}
void range_by_marks()
{
    textbackground(HEAD);
	textcolor(HEAD);
	drawbgcolor(51,6,28,3);
	textcolor(BRDR);
    drawBox(52,6,26,1);
    gotoxy(54,7);
	textcolor(BRDR);
    printf("Mani... %c Ran...",16);
    textcolor(MENU);
    printf(" %c Marks",16);
	textbackground(BACK);
	textcolor(TXET);
	for(i=0;i<n;i++)
	{
		if(sal[i]<34)
			y[0]++;
		else if(sal[i]>=34&&sal[i]<50)
			y[1]++;
		else if(sal[i]>=50&&sal[i]<70)
			y[2]++;
		else if(sal[i]>=70&&sal[i]<80)
			y[3]++;
		else if(sal[i]>=80&&sal[i]<101)
			y[4]++;
		else
			y[5]++;
	}
	gotoxy(52,10);
	printf("Failed(00-33)   :");
	gotoxy(52,11);
	printf("D Grade(34-50)  :");
	gotoxy(52,12);
	printf("C Grade(50-70)  :");
	gotoxy(52,13);
	printf("B Grade(70-80)  :");
	gotoxy(52,14);
	printf("A Grade(80-100) :");
	gotoxy(52,15);
	printf("Undefined(100+) :");
	for(i=0;i<6;i++)
	{
		gotoxy(72,10+i);
		printf("%d",y[i]);
	}
}
