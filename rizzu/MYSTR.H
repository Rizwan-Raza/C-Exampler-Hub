#include"pattern.c"
int zstrlen(char ch[100])
{
	int i;
	for (i=0;ch[i];i++)
	{
	}
	return i;
}
void zstrcpy(char cn[100],const char ch[100])
{
	int i;
	for (i=0;ch[i];i++)
	{
		cn[i]=ch[i];
	}
	cn[i]=0;
}
void zstrupr(char ch[100])
{
	int i;
	for (i=0;ch[i];i++)
	{
		if(ch[i]<='z'&&ch[i]>='a')
			ch[i]=ch[i]-32;
	}
}
void zstrlwr(char ch[100])
{
	int i;
	for (i=0;ch[i];i++)
	{
		if(ch[i]<='Z'&&ch[i]>='A')
			ch[i]=ch[i]+32;
	}
}
void zstrmxd(char ch[100])
{
	int i;
	for (i=0;ch[i];i++)
	{
		if(ch[i]<='z'&&ch[i]>='a')
			ch[i]=ch[i]-32;
		else
			ch[i]=ch[i]+32;
	}
}
void zstrrev(char ch[100])
{
	char cn[100];
	int i,j,g=zstrlen(ch);
	j=g-1;
	for (i=0;i<g;i++,j--)
	{
		cn[j]=ch[i];
	}
	cn[i]=0;
	zstrcpy(ch,cn);
}
void zstrmrr(char ch[100])
{
	int i,j,g=zstrlen(ch);
	j=g-1;
	for (i=0;i<g;i++,j--)
	{
		ch[j]=ch[i];
	}
	ch[i]=0;
}
int zstrscmp(char ch[100],char cn[100],int sens)
{
	int i;
	char tch[100],tcn[100];
	if(sens)
    {
        zstrcpy(tch,ch);
        zstrlwr(tch);
        zstrcpy(tcn,cn);
        zstrlwr(tcn);
    }
    else
    {
        zstrcpy(tch,ch);
        zstrcpy(tcn,cn);
    }
	for (i=0;tch[i]==tcn[i]&&(tch[i]||tcn[i]);i++)
	{
	}
	*y=ch[i]-cn[i];
	*(y+1)=i+1;
	return *y;
}
void zstrptrn(int x,int y,char ch[100],char cc[100],int ib[100],int it[100])
{
	int i;
	textcolor(BACK);
	for (i=0;ch[i];i++)
	{
		printc(&x,&y,ch[i],cc[i],ib[i],it[i]);
	}
	textcolor(TXET);
}
void zstrprnt(int x,int y,char ch[100])
{
	int i;
	for (i=0;ch[i];i++)
	{
		printc(&x,&y,ch[i],' ',1,1);
	}
}
