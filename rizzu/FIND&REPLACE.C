int u,v=0,way;
char srch[20];
void fr_of_name();
void fr_of_age();
void fr_of_salary();
void f_and_r()
{
    clrpnl(51,79,6,21);
	textbackground(HEAD);
	textcolor(HEAD);
    drawbgcolor(51,6,29,3);
	textcolor(BRDR);
 	drawBox(52,6,26,1);
	gotoxy(54,7);
	textcolor(BRDR);
    printf("Mani...");
    textcolor(MENU);
    printf(" %c Find & Replace",16);
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
    clrpnl(52,78,6,21);
    switch(i)
    {
    case 1:
        fr_of_name();
        display_data();
        f_and_r();
    case 2:
        fr_of_age();
        display_data();
        f_and_r();
    case 3:
        fr_of_salary();
        display_data();
        f_and_r();
    case 4:
        confirmed();
    default:
        gotoxy(52,6);
        printf("Sorry Wrong Option!!!");
        f_and_r();
    }
}
void fr_of_name()
{
	textbackground(HEAD);
	textcolor(HEAD);
    drawbgcolor(51,6,29,3);
	textcolor(BRDR);
 	drawBox(53,6,24,1);
	gotoxy(55,7);
	textcolor(BRDR);
    printf("Mani... %c F & R",16);
    textcolor(MENU);
    printf(" %c Name",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(52,10);
	switch(i)
	{
    case 1:
        printf("Find Name by...");
        break;
    case 2:
        printf("Find Age by...");
        break;
    case 3:
        printf("Find %s by...",som);
	}
	gotoxy(52,12);
	printf("1. Element Data");
	gotoxy(52,13);
	printf("2. Serial N0.");
	gotoxy(52,14);
	printf("3. Back(%c)",27);
	gotoxy(52,16);
	scanf("%d",&j);
	clrpnl(52,78,10,20);
    gotoxy(52,10);
    switch(j)
    {
    case 1:
        printf("Enter Name of the %s :",eos);
        gotoxy(52,11);
        fflush(stdin);
        gets(srch);
        gotoxy(52,13);
        for(u=0;u<n;u++)
        {
            if(!zstrscmp(aa[u],srch,1))
            {

                printf("Replace with :");
                fflush(stdin);
                gets(aa[u]);
                v=1;
            }
        }
        if(v==0)
        {
            printf("Sorry Can't find the Name");
        }
        break;
    case 2:
        printf("Enter the Serial N0 :");
        gotoxy(52,11);
        scanf("%d",&u);
        gotoxy(52,13);
        if(u<=n)
        {
            printf("Replace with :");
            fflush(stdin);
            gets(aa[u-1]);
        }
        else
        {
            printf("Sorry Can't find the Serial N0");
        }
        break;
    case 3:
        break;
    default:
        printf("Sorry Wrong Choice");
        break;

    }
}
void fr_of_age()
{
    textbackground(HEAD);
	textcolor(HEAD);
    drawbgcolor(51,6,29,3);
	textcolor(BRDR);
 	drawBox(53,6,24,1);
	gotoxy(55,7);
	textcolor(BRDR);
    printf("Mani... %c F & R",16);
    textcolor(MENU);
    printf(" %c Age",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(52,10);
	switch(i)
	{
    case 1:
        printf("Find Name by...");
        break;
    case 2:
        printf("Find Age by...");
        break;
    case 3:
        printf("Find %s by...",som);
	}
	gotoxy(52,12);
	printf("1. Element Data");
	gotoxy(52,13);
	printf("2. Serial N0.");
	gotoxy(52,14);
	printf("3. Back(%c)",27);
	gotoxy(52,16);
	scanf("%d",&j);
	clrpnl(52,78,10,20);
    gotoxy(52,10);
    switch(j)
    {
    case 1:
        printf("Enter Age of the %s :",eos);
        gotoxy(52,11);
        scanf("%d",&x[n]);
        gotoxy(52,13);
        for(u=0;u<n;u++)
        {
            if(x[u]==x[n])
            {
                printf("Replace with :");
                scanf("%d",&x[u]);
                v=1;
            }
        }
        if(v==0)
        {
            printf("Sorry Can't find the Age");
        }
        break;
    case 2:
        printf("Enter the Serial N0 :");
        gotoxy(52,11);
        scanf("%d",&u);
        gotoxy(52,13);
        if(u<=n)
        {
            printf("Replace with :");
            scanf("%d",&x[u-1]);
        }
        else
        {
            printf("Sorry Can't find the Serial N0");
        }
        break;
    case 3:
        break;
    default:
        printf("Sorry Wrong Choice");
        break;

    }
}
void fr_of_salary()
{
    textbackground(HEAD);
	textcolor(HEAD);
    drawbgcolor(51,6,29,3);
	textcolor(BRDR);
 	if(som[0]=='S')
 	{
        drawBox(52,6,26,1);
 	}
 	else
    {
        drawBox(52,6,25,1);
    }
    gotoxy(54,7);
	textcolor(BRDR);
    printf("Mani... %c F & R",16);
    textcolor(MENU);
    printf(" %c %s",16,som);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(52,10);
	switch(i)
	{
    case 1:
        printf("Find Name by...");
        break;
    case 2:
        printf("Find Age by...");
        break;
    case 3:
        printf("Find %s by...",som);
	}
	gotoxy(52,12);
	printf("1. Element Data");
	gotoxy(52,13);
	printf("2. Serial N0.");
	gotoxy(52,14);
	printf("3. Back(%c)",27);
	gotoxy(52,16);
	scanf("%d",&j);
	clrpnl(52,78,10,20);
    gotoxy(52,10);
    switch(j)
    {
    case 1:
        printf("Enter %s of the %s :",som,eos);
        gotoxy(52,11);
        scanf("%f",&sal[n]);
        gotoxy(52,13);
        for(u=0;u<n;u++)
        {
            if(sal[u]==sal[n])
            {
                printf("Replace with :");
                scanf("%f",&sal[u]);
                v=1;
            }
        }
        if(v==0)
        {
            printf("Sorry Can't find the %s",som);
        }
        break;
    case 2:
        printf("Enter the Serial N0 :");
        gotoxy(52,11);
        scanf("%d",&u);
        gotoxy(52,13);
        if(u<=n)
        {
            printf("Replace with :");
            scanf("%f",&sal[u-1]);
        }
        else
        {
            printf("Sorry Can't find the Serial N0");
        }
        break;
    case 3:
        break;
    default:
        printf("Sorry Wrong Choice");
        break;

    }
}
