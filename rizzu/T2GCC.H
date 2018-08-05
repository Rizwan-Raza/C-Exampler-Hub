#ifndef T2GCC_H_INCLUDED
#define T2GCC_H_INCLUDED
#ifndef WINDOWS_HINCLUDED
    #include<windows.h>
#endif // WINDOWS_HINCLUDED
#ifndef TIME_H_INCLUDED
    #include<time.h>
#endif // TIME_H_INCLUDED
int BackC=0,ForgC=15;
int clrscr()
{
    system("cls");
    return 0;
}
int gotoxy(int x, int y)
{
x=x-1;y=y-1;
HANDLE console_handle;
COORD cursor_coord;
cursor_coord.X=x;
cursor_coord.Y=y;
console_handle=GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleCursorPosition(console_handle,cursor_coord);

return 0;
}
void textcolor(int FC)
{
     ForgC=FC;
     WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wColor);
     return;
}
void textbackground(int BC)
{
     BackC=BC;
     WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wColor);
     return;
}
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
#endif // T2GCC_H_INCLUDED
