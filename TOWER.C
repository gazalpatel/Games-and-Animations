#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

#define P printf
void towers();
void moving(int x);

void main()
{
int i,j,ch,ans[5]={2,5,1,3,4},a[5]={0,0,0,0,0},flag=0;
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\TC\\BGI");

	//towers();
       //	setfillstyle(1,WHITE);
	//fillellipse(50,100,40,40);
	setcolor(4);
	circle(50,100,40);
	circle(170,100,60);
	circle(280,100,30);
	circle(350,100,20);
	circle(440,100,50);
	towers();
       P("\n\n\n\n\n\n\n\n\n");
	for(i=0;i<5;i++)
	{
		a[i]= (getch()-48);
		if(a[i]!=ans[i])
		{
			P("\n you entered wrong number ---> you loose ");
			flag=77;
			break;
		}
		else
		{
			moving(i);
			P("\n great going --->keep playing ---> a{%d}= %d ",i,a[i]);
			flag=55;
		}
	}
	P("\n------------------------");
	if(flag==55)
	{
		P("\n\n\n                        ----> you won <----");
	}
	for(i=0;i<5;i++)
	{
		P("\na{%d}= %d",i,a[i]);
	}
getch();
}

void towers()
{
	int i;
	setcolor(RED);
	for(i=170;i>30;i--)
	{

		circle(50,i,10);
		circle(170,i,10);
		circle(280,i,10);
		circle(350,i,10);
		circle(440,i,10);
		circle(280,(i+200),10);
	}
	setcolor(4);
	setfillstyle(SLASH_FILL,RED);
	//floodfill(2,2,4);
	bar(40,30,60,170);
	bar(160,30,180,170);
	bar(270,30,290,170);
	bar(340,30,360,170);
	bar(430,30,450,170);
	bar(270,230,290,370);

	//bar3d(40,30,60,170,10,10);

}

void moving(int x)
{
       /*	circle(50,100,40);
	circle(170,100,60);
	circle(280,100,30);
	circle(350,100,20);
	circle(440,100,50);     */

	if(x==0)
	{
	    cleardevice();
	    towers();

		circle(50,100,40);
		circle(280,300,60); //changed
		circle(280,100,30);
		circle(350,100,20);
		circle(440,100,50);
	}
	else if(x==1)
	{
		cleardevice();
		towers();
		circle(50,100,40);
		circle(280,300,60); //changed
		circle(280,100,30);
		circle(350,100,20);
		circle(280,300,50); //changed
	}
	else if(x==2)
	{
		cleardevice();
		towers();
		circle(280,300,40); //changed
		circle(280,300,60); //changed
		circle(280,100,30);
		circle(350,100,20);
		circle(280,300,50); //changed
	}
	else if(x==3)
	{
		cleardevice();
		towers();
		circle(280,300,40);//changed
		circle(280,300,60);//changed
		circle(280,300,30);//changed
		circle(350,100,20);
		circle(280,300,50);//changed
	}
	else if(x==4)
	{
		cleardevice();
		towers();
		circle(280,300,40); //changed
		circle(280,300,60); //chnaged
		circle(280,300,30); //changed
		circle(280,300,20); //changed
		circle(280,300,50); //changed
	}
}