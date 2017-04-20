#include<stdio.h>
#include<conio.h>
#include<graphics.h>
//game for pair (1,6),(2,7),(3,8),(4,9)
void base();

void flags(int flag[4]);
void check(char ch[2],int flag[4]);

void main()
{
int gd=DETECT,gm;
int i,flag[4],temp=0;
char ch[2];
initgraph(&gd,&gm,"c:\\TC\\BGI");

	for(i=0;i<4;i++)
	{
		flag[i]=0;
	}
	base();
	flags(flag);
	for(i=0;i<4;i++)
	{
		puts("1st=> ");
		ch[0]=getch();
		printf("char %c",ch[0]);
		puts("2nd=> ");
		ch[1]=getch();
		printf("char %c",ch[1]);
		delay(500);
		printf("printed");
		check(ch,flag);
		cleardevice();
		base();
		flags(flag);
	}
	for(i=0;i<4;i++)
	{
		if(flag[i]==0)
		{
			temp=1;
			break;
		}
	}
	cleardevice();
	setbkcolor(9);
	setcolor(10);
	settextstyle(3,0,10);
	outtextxy(100,50,"you");

	if(temp==0)
	{
		outtextxy(160,160,"won");
	}
	else
	{
		outtextxy(160,160,"loose");
	}

getch();
}

void base()
{
       //	setbkcolor(12);
	setcolor(15);
	line(50,50,350,50);
	line(50,350,350,350);
	line(50,50,50,350);
	line(350,50,350,350);

	line(150,50,150,350);
	line(250,50,250,350);
	line(50,150,350,150);
	line(50,250,350,250);
			      //block,object,background
	setfillstyle(1,8);    //1,1,8
	floodfill(100,100,15);
	setfillstyle(1,11);    //2,6,11
	floodfill(200,100,15);
	setfillstyle(1,12);    //3,8,12
	floodfill(300,100,15);
	setfillstyle(1,2);    //4,4,2
	floodfill(100,200,15);
	setfillstyle(1,8);    //6,1,8
	floodfill(300,200,15);
	setfillstyle(1,11);    //7,6,11
	floodfill(100,300,15);
	setfillstyle(1,12);    //8,8,12
	floodfill(200,300,15);
	setfillstyle(1,2);    //9,4,2
	floodfill(300,300,15);
	setcolor(12);
	settextstyle(2,0,7);
	outtextxy(160,160,"where's");
	outtextxy(180,190,"my");
	outtextxy(160,220,"buddy");
}

void flags(int flag[4])
{
	if(flag[0]==0)
	{
		setcolor(0);
		setfillstyle(1,1);
		fillellipse(100,100,30,30);
		fillellipse(300,200,30,30);
	}
	if(flag[1]==0)
	{
		setcolor(0);
		setfillstyle(1,6);
		fillellipse(200,100,30,30);
		fillellipse(100,300,30,30);
	}
	if(flag[2]==0)
	{
		setcolor(0);
		setfillstyle(1,8);
		fillellipse(300,100,30,30);
		fillellipse(200,300,30,30);
	}
	if(flag[3]==0)
	{
		setcolor(0);
		setfillstyle(1,4);
		fillellipse(100,200,30,30);
		fillellipse(300,300,30,30);
	}
}
void check(char ch[2],int flag[4])
{
	if((ch[0]=='1' && ch[1]=='6') || (ch[0]=='6' && ch[1] == '1'))
	{
		flag[0]=1;
		printf("matched first pair");
	}
	if((ch[0]=='2' && ch[1]=='7') || (ch[0]=='7' && ch[1] == '2'))
	{
		flag[1]=1;
		printf("matched 2nd pair");
	}
	if((ch[0]=='3' && ch[1]=='8') || (ch[0]=='8' && ch[1] == '3'))
	{
		flag[2]=1;
		printf("matched 3rd pair");
	}
	if((ch[0]=='4' && ch[1]=='9') || (ch[0]=='9' && ch[1] == '4'))
	{
		flag[3]=1;
		printf("matched 4th pair");
	}
}