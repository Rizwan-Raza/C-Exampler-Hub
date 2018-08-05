int t;
char temp[20];
void sort_by_name();
void sort_by_age();
void sort_by_salary();
void sorting()
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
    printf(" %c Sorting",16);
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
	clrpnl(52,78,15,17);
	switch(i)
	{
		case 1:
		    sort_by_name();
		    display_data();
		    sorting();
		case 2:
		    sort_by_age();
		    display_data();
		    sorting();
		case 3:
		    sort_by_salary();
		    display_data();
		    sorting();
		case 4:
            confirmed();
		default:
			printf("Sorry You Pressed Wrong Key");
			sorting();
	}
}
void sort_by_name()
{
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(zstrscmp(aa[i],aa[j],1)>0)
            {
                zstrcpy(temp,aa[i]);
                zstrcpy(aa[i],aa[j]);
                zstrcpy(aa[j],temp);
                t=x[i];
                x[i]=x[j];
                x[j]=t;
                t=sal[i];
                sal[i]=sal[j];
                sal[j]=t;
            }
        }
    }
}
void sort_by_age()
{
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(x[i]>x[j])
            {
                zstrcpy(temp,aa[i]);
                zstrcpy(aa[i],aa[j]);
                zstrcpy(aa[j],temp);
                t=x[i];
                x[i]=x[j];
                x[j]=t;
                t=sal[i];
                sal[i]=sal[j];
                sal[j]=t;
            }
        }
    }
}
void sort_by_salary()
{
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(sal[i]>sal[j])
			{
				zstrcpy(temp,aa[i]);
				zstrcpy(aa[i],aa[j]);
				zstrcpy(aa[j],temp);
				t=x[i];
				x[i]=x[j];
				x[j]=t;
				t=sal[i];
				sal[i]=sal[j];
				sal[j]=t;
			}
		}
    }
}
