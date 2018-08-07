//Global variables
extern int x[50],y[50],i,j,n,ch2;
char aa[50][50],som[8]="Salary",eos[10]="Employee",filename[32], dirname[36]="DBs/";
float *sal;
FILE *ptr;
void display_data();
void store_data(FILE*);
void retrieve_data(FILE*);
#include<stdlib.h>
#include"sort.c"
#include"range.c"
#include"find&replace.c"
//#include<string.h>
void menu4();

//Functions of menu4() function.
void e_rec();
void s_rec();
void new_db();
void open_db();

void manu_selection();
int confirmed();
void standard(int);
char *trimwhitespace(char *);

void menu4()
{
	drawMenu();
	drawBox(16,2,46,1);
	gotoxy(18,3);
	textcolor(BRDR);
	printf("Main Menu ");
	textcolor(MENU);
	printf("%c Operations on Database and Files",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(4,6);
	printf("1. Make an Employee Record.");
	gotoxy(4,7);
	printf("2. Make an Student Record.");
	gotoxy(4,8);
	printf("3. Create New DB.");
	gotoxy(4,9);
	printf("4. Open an Existing DB.");
	gotoxy(4,10);
	printf("5. Back.");
	gotoxy(4,12);
	printf("Enter your choice corresponding to number with option...");
	scanf("%d",&ch2);
	switch(ch2)
	{
		case 1:
			e_rec();
            menu4();
		case 2:
			s_rec();
			menu4();
		case 3:
			new_db();
			menu4();
		case 4:
			open_db();
			menu4();
		case 5:
			main();
		default:
			printf("Enter valid option\n");
			menu4();
	}
}
////////////////////////////////////////////////////////////////////
//-----------------------Functions of Menu 4----------------------//
////////////////////////////////////////////////////////////////////
void e_rec()
{
    zstrcpy(som,"Salary");
    zstrcpy(eos,"Employee");
	drawSet();
	drawBox(8,2,63,1);
	gotoxy(10,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on Database and Files ",16);
	textcolor(MENU);
	printf("%c Employee Record",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(4,6);
	printf("Enter number of Employees: ");
	scanf("%d",&n);
	sal=(float *)malloc(n);
	for(i=0;i<n;i++)
	{
		clrpnl(4,49,8,20);
		gotoxy(4,8);
		printf("Enter Employee ");
		standard(i+1);
		printf(" Data...");
		gotoxy(4,9);
		printf("Name: ");
		fflush(stdin);
		gets(aa[i]);
		gotoxy(4,10);
		printf("Age: ");
		scanf("%d",&x[i]);
		gotoxy(4,11);
		printf("Salary: ");
		scanf("%f",&sal[i]);
	}
	clrpnl(4,49,8,20);
	gotoxy(4,8);
	printf("The Entered Data is...");
	gotoxy(4,10);
	printf("S.N0");
	gotoxy(10,10);
	printf("NAME");
	gotoxy(30,10);
	printf("AGE");
	gotoxy(40,10);
	printf("SALARY");
	display_data();
	manu_selection();
	free(sal);
}
void s_rec()
{
    zstrcpy(som,"Marks");
    zstrcpy(eos,"Student");
	drawSet();
	drawBox(8,2,62,1);
	gotoxy(10,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on Database and Files ",16);
	textcolor(MENU);
	printf("%c Student Record",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(4,6);
	printf("Enter number of Students: ");
	scanf("%d",&n);
	sal=(float *)malloc(n);
	for(i=0;i<n;i++)
	{
		clrpnl(4,49,8,20);
		gotoxy(4,8);
		printf("Enter Student ");
		standard(i+1);
		printf(" Data...");
		gotoxy(4,9);
		printf("Name:");
		fflush(stdin);
		gets(aa[i]);
		gotoxy(4,10);
		printf("Age:");
		scanf("%d",&x[i]);
		gotoxy(4,11);
		printf("Marks:");
		scanf("%f",&sal[i]);
	}
	clrpnl(4,49,8,20);
	gotoxy(4,8);
	printf("The Entered Data is...");
	gotoxy(4,10);
	printf("S.N0");
	gotoxy(10,10);
	printf("NAME");
	gotoxy(30,10);
	printf("AGE");
	gotoxy(40,10);
	printf("MARKS");
	display_data();
	manu_selection();
	free(sal);
}
void new_db()
{
    drawSet();
	drawBox(9,2,60,1);
	gotoxy(11,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on Database and Files ",16);
	textcolor(MENU);
	printf("%c New Database",16);
	textbackground(BACK);
	textcolor(TXET);
    gotoxy(4,6);
    printf("Enter File Name with extension : ");
    fflush(stdin);
    gets(filename);
	strcat(dirname, filename);
	clrpnl(4,49,6,10);
	gotoxy(4,6);
	printf("Enter number of Students: ");
	scanf("%d",&n);
    sal=(float *)malloc(n);
	for(i=0;i<n;i++)
	{
		clrpnl(4,49,8,20);
		gotoxy(4,8);
		printf("Enter Student ");
		standard(i+1);
		printf(" Data...");
		gotoxy(4,9);
		printf("Name:");
		fflush(stdin);
		gets(aa[i]);
		gotoxy(4,10);
		printf("Age:");
		scanf("%d",&x[i]);
		gotoxy(4,11);
		printf("Marks:");
		scanf("%f",&sal[i]);
	}
	clrpnl(4,49,8,20);
	gotoxy(4,8);
	printf("The Entered Data is...");
	gotoxy(4,10);
	printf("S.N0");
	gotoxy(10,10);
	printf("NAME");
	gotoxy(30,10);
	printf("AGE");
	gotoxy(40,10);
	printf("MARKS");
	display_data();
        ptr=fopen(dirname,"w");
        if(!ptr)
        {
            gotoxy(4,7);
            printf("Sorry you can't create file with this name\a\a\a");
        }
    store_data(ptr);
    fclose(ptr);
    gotoxy(52,6);
    printf("The Database has been stored");
	gotoxy(52,7);
	printf("in %s file.", filename);
    gotoxy(52,9);
    printf("You can read and modify it");
    gotoxy(52,10);
	printf("using our another features");
    getch();
}
void open_db()
{
    drawSet();
	drawBox(9,2,61,1);
	gotoxy(11,3);
	textcolor(BRDR);
	printf("Main Menu ");
	printf("%c Operation on Database and Files ",16);
	textcolor(MENU);
	printf("%c Open Database",16);
	textbackground(BACK);
	textcolor(TXET);
	gotoxy(4,6);
	printf("Enter File Name with extension : ");
	fflush(stdin);
	gets(filename);
	strcpy(dirname, "DBs/");
	strcat(dirname, filename);
	ptr=fopen(dirname,"r");
	if(!ptr)
    {
        gotoxy(4,7);
        printf("Sorry we can't find file %s in ./DBs directory",filename);
    } else {
		retrieve_data(ptr);
		clrpnl(4,49,8,20);
		gotoxy(4,8);
		printf("The Entered Data is...");
		gotoxy(4,10);
		printf("S.N0");
		gotoxy(10,10);
		printf("NAME");
		gotoxy(30,10);
		printf("AGE");
		gotoxy(40,10);
		printf("MARKS");
		display_data();
		//store_data(ptr);
		fclose(ptr);
	}
    getch();
}

void standard(int v)
{
	switch(v)
	{
		case 1: case 11: case 21:
			printf("%dst",v);
			break;
		case 2: case 12: case 22:
			printf("%dnd",v);
			break;
		case 3: case 13: case 23:
			printf("%drd",v);
			break;
		default:
			printf("%dth",v);
	}
}
void manu_selection()
{
	clrpnl(51,78,6,20);
	textbackground(HEAD);
	textcolor(HEAD);
    drawbgcolor(51,6,29,3);
	textcolor(BRDR);
 	drawBox(57,6,14,1);
	gotoxy(59,7);
    textcolor(MENU);
    printf("Manipulation");
    textbackground(BACK);
	textcolor(TXET);
	gotoxy(52,10);
	printf("1. Yes");
	gotoxy(52,11);
	printf("2. No");
	gotoxy(52,13);
	fflush(stdin);
	scanf("%d",&ch2);
	if(ch2==1)
	{
	    confirmed();
	}
}
void display_data()
{
	clrpnl(4,49,11,20);	
	for(i=0;i<n;i++)
	{
		gotoxy(4,11+i);
		printf("%d. ",i+1);
		gotoxy(10,11+i);
		printf(aa[i]);
		gotoxy(30,11+i);
		printf("%d",x[i]);
		gotoxy(40,11+i);
		printf("%.2f",sal[i]);
	}
}
void store_data(FILE *output)
{
	fprintf(output, "%2d\n", n);
	for(i=0;i<n;i++)
	{
        // fprintf(output,"%2d. ",i+1);
		// fseek(output,2,SEEK_CUR);
		fprintf(output,"%s ",aa[i]);
		// fseek(output,2,SEEK_CUR);
		fprintf(output,"%d ",x[i]);
		// fseek(output,2,SEEK_CUR);
		fprintf(output,"%.2f",sal[i]);
		fprintf(output,"\n");
	}
	fclose(output);
}
void retrieve_data(FILE *output)
{
    if(!output)
    {
        printf("Sorry Can't Access file");
        return;
    }
	fscanf(output, "%2d", &n);
	for(i=0;i<n;i++)
	{
		// fseek(output,1,SEEK_CUR);
		fscanf(output, "%s",aa[i]);
		fscanf(output, "%d", &x[i]);
		fscanf(output, "%f", &sal[i]);
		// fgets(aa[i],25,output);
		// fseek(output,3,SEEK_CUR);
		// fscanf(output,"%2d",&x[i]);
		// fseek(output,2,SEEK_CUR);
		// fscanf(output,"%f",&sal[i]);
		// fseek(output,2,SEEK_CUR);
		//*aa[i] = trimwhitespace(aa[i]);
		// printf("\a");
        //printf("%c",getc(output));
	}
}
int confirmed()
{
    clrpnl(51,78,6,20);
    textbackground(HEAD);
	textcolor(HEAD);
    drawbgcolor(51,6,29,3);
	textcolor(BRDR);
 	drawBox(57,6,14,1);
	gotoxy(59,7);
    textcolor(MENU);
    printf("Manipulation");
    textbackground(BACK);
	textcolor(TXET);
    gotoxy(52,10);
    printf("1. Sorting");
    gotoxy(52,11);
    printf("2. Frequency and Ranging");
    gotoxy(52,12);
    printf("3. Find and Replace");
    gotoxy(52,13);
    printf("4. Nothing Wanna do(%c)",27);
    gotoxy(52,15);
    scanf("%d",&i);
    switch(i)
    {
        case 1:
            sorting();
            confirmed();
        case 2:
            range();
            confirmed();
        case 3:
            f_and_r();
            confirmed();
        case 4:
            menu4();
        default:
            gotoxy(52,17);
            printf("Sorry Wrong Choice");
            confirmed();
    }
    return 0;
}

char *trimwhitespace(char *str)
{
  while(isspace((unsigned char)*str)) str++;
  return str;
}
////////////////////////////////////////////////////////////////////
