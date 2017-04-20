#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#define m 49
#define no 9
void base();
void homey();
int feed(int flag[9],int i,char ch);
int check(int flag[9]);
int chek(int x,int flag[9]);

void main()
{
	int i,flag[9],result=77;
	char ch,home;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\TC\\BGI");
	cleardevice();
	for(i=0;i<9;i++)
	{
	       flag[i]=0;
	       printf("\n");
	}
       //	do
       //	{
	homey();
	home=getch();
	if(home=='1')          //start game
	{
		cleardevice();
		base();
		for(i=0;i<9;i++)
		{
		if(result==55)      //winning result
		{
			break;
		}
		ch=getch();
		if(flag[ch-m]==0)
		{
			result=feed(flag,i,ch);
		}
		else          //again same input
		{
			printf("\npress again");
			i--;
		}
		if(result==99)     //wrong input
		{
			printf("\n entered wrong input...\n plz again enter from 1 to 9 :\n");
			i--;
		}
		}
	}
	else if(home=='2')     //help
	{
		cleardevice();
		setbkcolor(5);
		base();
		settextstyle(10,0,5);
		outtextxy(325,50,"Help");
		settextstyle(7,0,2);
		outtextxy((m+10),(m),"1");
		outtextxy((m+10),(m+30),"4");
		outtextxy((m+10),(m+60),"7");
		outtextxy((30+m+10),(m),"2");
		outtextxy((30+m+10),(m+30),"5");
		outtextxy((30+m+10),(m+60),"8");
		outtextxy((60+m+10),(m),"3");
		outtextxy((60+m+10),(m+30),"6");
		outtextxy((60+m+10),(m+60),"9");
		setcolor(1);
		rectangle(250,150,570,400);
		settextstyle(2,0,8);
		outtextxy(280,200,"Enter from ======> ");
		outtextxy(340,250," 1 to 9");
		outtextxy(280,300,"To Play Tic Tac Toe");

	}

       //	}
       //	while(home!='3');
	getch();
}


void homey()
{
	setbkcolor(5);
	setcolor(1);
	settextstyle(10,0,5);
	outtextxy(100,50,"TIC TAC TOE");
	setcolor(15);
	settextstyle(6,0,3);
	outtextxy(100,200,"1. Start Game");
	outtextxy(100,250,"2. Help");
	outtextxy(100,300,"3. Exit");
	setcolor(14);
	line(375,200,525,350);
	line(525,200,375,350);
	setcolor(7);
	circle((375+75),200,35);      //top
	circle((375+75),355,35);      //bottom
	circle(375,275,35);         //left
	//line(,,,);
	//line();
	circle(525,275,35);           //right
	//line();
	//rline();
}

void base()
{
	setbkcolor(5);
	setcolor(15);
       //putpixel(10,10,4);
	line(0+m,0+m,90+m,0+m);
	//putpixel(40,40,4);
	line(0+m,0+m,0+m,90+m);
	//putpixel(10,40,4);
	line(30+m,0+m,30+m,90+m);
	line(0+m,30+m,90+m,30+m);
	line(60+m,0+m,60+m,90+m);
	line(0+m,60+m,90+m,60+m);
	line(90+m,0+m,90+m,90+m);
	line(0+m,90+m,90+m,90+m);
	setfillstyle(1,1); //block 1 //blue 19
	floodfill(10+m,10+m,15);
	setfillstyle(1,6);   //block 2 //brown 28    //19//28//37//46
	floodfill(40+m,10+m,15);
	setfillstyle(1,8);  //block 3  //dark gray 37
	floodfill(70+m,10+m,15);
	setfillstyle(1,4);  //block 4  //red 46
	floodfill(10+m,40+m,15);
	setfillstyle(1,2); //block 5    //green 5
	floodfill(40+m,40+m,15);
	setfillstyle(1,4); //block 6    //red 46
	floodfill(70+m,40+m,15);
	setfillstyle(1,8);  //block 7   //dark gray 37
	floodfill(10+m,70+m,15);
	setfillstyle(1,6); //block 8   //brown 28
	floodfill(40+m,70+m,15);
	setfillstyle(1,1); //block 9  //blue 19
	floodfill(70+m,70+m,15);

}

int feed(int flag[9],int i,char ch)
{
	int res;
	setcolor(15);
	if(flag[ch-m]==0)
	{
	if(ch=='1')
	{
		putch(i);
		if(i % 2==0)
		{
			flag[ch-m]=2;
			line(5+m,5+m,25+m,25+m);
			line(25+m,5+m,5+m,25+m);
		}
		else
		{
			flag[ch-m]=1;
			circle(15+m,15+m,10);
		}
	}
	else if(ch=='2')
	{
		if(i%2==0)
		{
			flag[ch-m]=2;
			line(35+m,5+m,55+m,25+m);
			line(55+m,5+m,35+m,25+m);
		}
		else
		{
			flag[ch-m]=1;
			circle(45+m,15+m,10);
		}
	}
	else if(ch=='3')
	{
		if(i%2==0)
		{
			flag[ch-m]=2;
			line(65+m,5+m,85+m,25+m);
			line(85+m,5+m,65+m,25+m);
		}
		else
		{
			flag[ch-m]=1;
			circle(75+m,15+m,10);
		}
	}
	else if(ch=='4')
	{
		if(i%2==0)
		{
			flag[ch-m]=2;
			line(5+m,35+m,25+m,55+m);
			line(25+m,35+m,5+m,55+m);
		}
		else
		{
			flag[ch-m]=1;
			circle(15+m,45+m,10);
		}
	}
	else if(ch=='5')
	{
		if(i%2==0)
		{
			flag[ch-m]=2;
			line(35+m,35+m,55+m,55+m);
			line(55+m,35+m,35+m,55+m);
		}
		else
		{
			flag[ch-m]=1;
			circle(45+m,45+m,10);
		}
	}
	else if(ch=='6')
	{
		if(i%2==0)
		{
			flag[ch-m]=2;
			line(65+m,35+m,85+m,55+m);
			line(85+m,35+m,65+m,55+m);
		}
		else
		{
			flag[ch-m]=1;
			circle(75+m,45+m,10);
		}
	}
	else if(ch=='7')
	{
		if(i%2==0)
		{
			flag[ch-m]=2;
			line(5+m,65+m,25+m,85+m);
			line(25+m,65+m,5+m,85+m);
		}
		else
		{
			flag[ch-m]=1;
			circle(15+m,75+m,10);
		}
	}
	else if(ch=='8')
	{
		if(i%2==0)
		{
			flag[ch-m]=2;
			line(35+m,65+m,55+m,85+m);
			line(55+m,65+m,35+m,85+m);
		}
		else
		{
			flag[ch-m]=1;
			circle(45+m,75+m,10);
		}
	}
	else if(ch=='9')
	{
		if(i%2==0)
		{
			flag[ch-m]=2;
			line(65+m,65+m,85+m,85+m);
			line(85+m,65+m,65+m,85+m);
		}
		else
		{
			flag[ch-m]=1;
			circle(75+m,75+m,10);
		}
	}
	else
	{
		return 99;   //no such input available
	}
	}
	res=check(flag);
       //	printf("\nflag{%d} = %d,status= %d",(ch-m+1),flag[ch-m],res);
	return res;

}

int check(int flag[9])
{
	int result=77;

	if(flag[1]==flag[2] && flag[2]==flag[3])
	{
		return result=chek(1,flag);
	}
	if(flag[4]==flag[5] && flag[5]==flag[6])
	{
		return result=chek(4,flag);
	}
	if(flag[7]==flag[8] && flag[8]==flag[9])
	{
		return result=chek(7,flag);
	}
	if(flag[1]==flag[4] && flag[4]==flag[7])
	{
		return result=chek(1,flag);
	}
	if(flag[2]==flag[5] && flag[5]==flag[8])
	{
		return result=chek(2,flag);
	}
	if(flag[3]==flag[6] && flag[6]==flag[9])
	{
		return result=chek(3,flag);
	}
	if(flag[1]==flag[5] && flag[5]==flag[9])
	{
	       return result=chek(1,flag);
	}
	if(flag[3]==flag[5] && flag[5]==flag[7])
	{
	       return result=chek(3,flag);
	}
	else
	{
		return result;
	}
}

int chek(int x,int flag[9])
{
int len;
char str[50];
	if(flag[x]==1)
	{
		cleardevice();
		fillellipse(325,200,150,150);
		setcolor(12);
		settextstyle(1,0,7);
		outtextxy(200,110,"Player 2");
		outtextxy(260,210,"Won.!!");
			return 55;         //game finish
	}
	else if(flag[x]==2)
	{
		cleardevice();
		fillellipse(325,200,150,150);
		setcolor(12);
		settextstyle(4,0,7);
		outtextxy(200,110,"Player 1");
		outtextxy(260,210,"Won.!!");
			return 55;          //game finish
	}
	else
	{
		return 77; // same flag =0
	}
}