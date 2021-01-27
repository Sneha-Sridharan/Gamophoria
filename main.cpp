#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <graphics.h>
#include <time.h>
#include <stdio.h>
#include<math.h>
using namespace std;
int prime(int num)

{
	int flag,i;
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			flag=0;
			break;
		}
		else
			flag=1;
	}
	return flag;
}
int perfect(int num)
{
	int sum=0,i;
	for(i=1;i<=num/2;i++)
	{
	if(num%i==0)
			sum+=i;
	}
	if(num==sum)
		return 1;
	else
		return 0;
}
int krishnamurthy(int num)
{
	int temp,rem,fact,i,sum=0;
    temp=num;
	while(num>0)
	{
		fact=1;
		rem=num%10;
		for(i=1;i<=rem;i++)
			fact*=i;
		sum+=fact;
		num=num/10;
	}
	if(sum==temp)
		return 1;
	else
		return 0;
}
int palindrome(int num)
{
	int temp,sum=0,rem;
 	temp=num;
 	while(num!=0)
	{
		rem=num%10;
		sum=sum*10+rem;
		num/=10;
	}
	if(sum==temp)
		return 1;
	else
		return 0;

}
int armstrong(int num)
{
	int temp,rem,j;
	double sum=0;
	temp=num;
	if(num<1000)
        j=3;
	else
		j=4;
	while(num>0)
	{
		rem=num%10;
		sum=sum+pow(rem,j);
		num/=10;
	}
	if(temp==sum)
		return 1;
	else
		return 0;
}
void first_two()
{
    int gd = DETECT, gm, c;
    initgraph(&gd, &gm, "");
    setcolor(5);
    rectangle(25,25,615,450);
    rectangle(35,35,605,440);
    settextstyle(2,0,8);
    outtextxy(183,230,"THE GAMING ARENA");
    settextstyle(2,0,8);
    outtextxy(225,260,"FOR ALL AGES");
    for(int i=0;i<20;i++)
    {
        setcolor(10);
        rectangle(150,140,500,210);
        setcolor(11);
        settextstyle(6,0,4);
        outtextxy(170,160,"GAMOPHORIA");
        delay(150);
        setcolor(12);
        rectangle(150,140,500,210);
        setcolor(14);
        settextstyle(6,0,4);
        outtextxy(170,160,"GAMOPHORIA");
        delay(150);
    }
    cleardevice();
    setcolor(14);
    rectangle(25,25,615,450);
    settextstyle(6,0,1);
    setcolor(10);
    outtextxy(100,150,"FUN GAMES TO ENTERTAIN YOU!");
    setcolor(12);
    outtextxy(120,210,"1. ROCK-PAPER-SCISSORS-GLUE");
    outtextxy(120,240,"2. NUMBER MADNESS");
    getch();
    closegraph();
}
void rpsg_graph(void)
{
    int gd = DETECT, gm; int arr1[]={499,185,475,190,499,195,499,185},arr2[]={499,155,475,160,499,165,499,155};
    initgraph(&gd, &gm, "");
    setcolor(5);
    rectangle(25,25,615,450);
    rectangle(35,35,605,440);
    setcolor(10);
    rectangle(165,80,480,120);
    setcolor(11);
    outtextxy(180,90,"LET'S PLAY ROCK-PAPER-SCISSORS-GLUE");
    for(int i=0;i<10;i++)
    {
        delay(300);
        setcolor(0);
        setfillstyle(1,0);
        rectangle(240,180,280,230);
        floodfill(270,190,0);
        circle(378,322,8);
        circle(378,322,5);
        floodfill(379,323,0);
        circle(402,322,8);
        circle(402,322,5);
        floodfill(403,323,0);
        line(380,330,400,360);
        line(400,330,380,360);
        rectangle(500,180,560,200);
        floodfill(540,190,0);
        fillpoly(4,arr1);
        ellipse(465,190,0,360,6,3);
        floodfill(465,190,0);
        ellipse(150,322,0,90,30,25);
        line(150,297,110,322);
        line(110,322,120,353);
        line(120,353,183,348);
        line(183,348,193,333);
        line(193,333,180,322);
        floodfill(150,322,0);
        setcolor(15);
        setfillstyle(1,15);
        rectangle(240,150,280,200);
        floodfill(270,170,15);             //paper
        setcolor(14);
        setfillstyle(1,14);
        circle(378,292,8);
        circle(378,292,5);
        floodfill(379,293,14);   //scissors
        circle(402,292,8);
        circle(402,292,5);
        floodfill(403,293,14);
        setcolor(8);
        line(380,300,400,330);
        line(400,300,380,330);
        setcolor(12);
        setfillstyle(1,12);
        rectangle(500,150,560,170); //glue
        floodfill(540,160,12);
        setcolor(9);
        setfillstyle(1,9);
        fillpoly(4,arr2);
        setcolor(15);
        setfillstyle(1,15);
        ellipse(465,160,0,360,6,3);
        floodfill(465,160,15);
        setcolor(8);
        setfillstyle(1,8);
        ellipse(150,292,0,90,30,25);
        line(150,267,110,292);
        line(110,292,120,323);
        line(120,323,183,318);
        line(183,318,193,303);
        line(193,303,180,292);
        floodfill(150,292,8);
        delay(300);
        setcolor(0);
        setfillstyle(1,0);
        rectangle(240,150,280,200);
        floodfill(270,170,0);
        setfillstyle(1,0);
        circle(378,292,8);
        circle(378,292,5);
        floodfill(379,293,0);
        circle(402,292,8);
        circle(402,292,5);
        floodfill(403,293,0);
        line(380,300,400,330);
        line(400,300,380,330);
        rectangle(500,150,560,170);
        floodfill(540,160,0);
        fillpoly(4,arr2);
        ellipse(465,160,0,360,6,3);
        floodfill(465,160,0);
        ellipse(150,292,0,90,30,25);
        line(150,267,110,292);
        line(110,292,120,323);
        line(120,323,183,318);
        line(183,318,193,303);
        line(193,303,180,292);
        floodfill(150,292,0);
        setcolor(15);
        setfillstyle(1,15);
        rectangle(240,180,280,230);
        floodfill(270,190,15);
        setcolor(14);
        setfillstyle(1,14);
        circle(378,322,8);
        circle(378,322,5);
        floodfill(379,323,14);
        circle(402,322,8);
        circle(402,322,5);
        floodfill(403,323,14);
        setcolor(8);
        line(380,330,400,360);
        line(400,330,380,360);
        setcolor(12);
        setfillstyle(1,12);
        rectangle(500,180,560,200);
        floodfill(540,190,12);
        setcolor(9);
        setfillstyle(1,9);
        fillpoly(4,arr1);
        setcolor(15);
        setfillstyle(1,15);
        ellipse(465,190,0,360,6,3);
        floodfill(465,190,15);
        setcolor(8);
        setfillstyle(1,8);
        ellipse(150,322,0,90,30,25);
        line(150,297,110,322);
        line(110,322,120,353);
        line(120,353,183,348);
        line(183,348,193,333);
        line(193,333,180,322);
        floodfill(150,322,8);
    }
    setcolor(14);
    cleardevice();
    setcolor(14);
    rectangle(25,25,615,450);
    rectangle(35,35,605,440);
    setcolor(10);
    outtextxy(250,100,"HERE YOU GO!!");
    outtextxy(250,113,"______________");
    setcolor(13);
    outtextxy(55,180,"-> You can choose from three levels of difficulty: 1.Easy  2.Medium  3.Hard ");
    setcolor(11);
    outtextxy(95,200,"- Easy level - 5 rounds ");
    outtextxy(95,220,"- Medium level - 7 rounds ");
    outtextxy(95,240,"- Hard level - 10 rounds ");
    setcolor(13);
    outtextxy(55,260,"-> Rock beats glue and scissors ");
    outtextxy(55,280,"-> Glue beats paper and scissors");
    outtextxy(55,300,"-> Paper beats rock");
    outtextxy(55,320,"-> Scissors beats paper");
    outtextxy(55,340,"-> Rock and glue (win = +10 points ; lose = -10 points)");
    outtextxy(55,360,"-> Scissors and paper (win = +20 points ; lose = -5 points)");
    getch();
    closegraph();
}
void fin_graph(int pointus,int pointuser)
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    char arr[5];
    sprintf(arr,"%d",pointus);
    initgraph(&gd, &gm, "");
    setcolor(9);
    rectangle(150,100,450,250);
    rectangle(160,110,460,260);
    line(290,110,290,250);
    line(160,180,450,180);
    settextstyle(6,0,2);
    outtextxy(190,135,"Player 1");
    outtextxy(313,135,"Player 2");
    outtextxy(210,210,arr);
    sprintf(arr,"%d",pointuser);
    outtextxy(355,210,arr);
    if(pointus>pointuser)
        outtextxy(200,350,"Player 1 Wins!");
    else
        outtextxy(250,350,"Player 2 Wins!");
    for(int i=0;i<475;i+=10)
    {
        setcolor(14);
        setfillstyle(1,1);
        arc(100,455-i,0,180,20);
        line(80,455-i,100,495-i);
        line(100,495-i,120,455-i);
        floodfill(100,455-i,14);
        setcolor(10);
        arc(144,520-i,150,210,50);
        setcolor(14);
        setfillstyle(1,2);
        arc(520,455-i,0,180,20);
        line(500,455-i,520,495-i);
        line(520,495-i,540,455-i);
        floodfill(520,455-i,14);
        setcolor(12);
        arc(564,520-i,150,210,50);
        delay(100);
        setcolor(0);
        setfillstyle(1,0);
        arc(100,455-i,0,180,20);
        line(80,455-i,100,495-i);
        line(100,495-i,120,455-i);
        floodfill(100,455-i,0);
        arc(144,520-i,150,210,50);
        arc(144,520-i,150,210,50);
        arc(520,455-i,0,180,20);
        line(500,455-i,520,495-i);
        line(520,495-i,540,455-i);
        floodfill(520,455-i,0);
        arc(564,520-i,150,210,50);
    }
    getch();
    closegraph();
}
void number_graph()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    setcolor(14);
    rectangle(25,25,615,450);
    rectangle(35,35,605,440);
    setcolor(10);
    outtextxy(95,65,"WELCOME TO THE NUMBER GAME");
    outtextxy(95,78,"__________________________");
    setcolor(13);
    outtextxy(44,120,"-> This is a fun number guessing game");
    outtextxy(44,140,"-> You will have to guess the type of number displayed from the options given");
    outtextxy(44,160,"-> If none of the options are valid, choose 'None'");
    outtextxy(44,180,"-> For each right guess, you will be awarded 10 points");
    outtextxy(44,200,"-> You have 30 seconds to make a guess for each number generated");
    outtextxy(44,220,"-> Definition for each number:");
    outtextxy(44,240,"-> A PERFECT NUMBER is the sum of its positive divisors excluding the number itself");
    outtextxy(44,260,"-> A PRIME NUMBER is a natural number greater than 1 that cannot be formed by");
    outtextxy(44,280,"  multiplying two smaller natural numbers");
    outtextxy(44,300,"-> A KRISHNAMURTHY NUMBER is a number which is equal to the sum of the");
    outtextxy(44,320,"  factorials of its digits");
    outtextxy(44,340,"-> A PALINDROME NUMBER is a number which reads the same backward as forward");
    outtextxy(44,360,"-> An ARMSTRONG NUMBER is a number that is the sum of its own digits each raised");
    outtextxy(44,380,"  to the power of the number of the digits");
    getch();
    closegraph();
}
int main()
{
    first_two(); int c;
    cout<<"What would you like to play?:";
    cin>>c;
    if(c==1)
    {
        rpsg_graph();
        int n,pointuser1=0,pointuser2=0,ch,norounds;
        char inp1,inp2,cho;
        system("color E");
        cout<<"Make your choice of difficulty : \n 1. Easy\n 2. Medium\n 3. Hard \n";
        cin>>ch;
        if(ch==1)
            norounds=5;
        else if(ch==2)

            norounds=7;
        else
            norounds=10;
        for(int i=0;i<norounds;i++)
        {
        cout<<"\nPlayer-1\nEnter your choice:\n Round "<<i+1<<":.....\n Press:\n r - Rock \n p - Paper \n s - Scissor\n g - Glue\n";
        cin>>inp1;
       system("cls");
        cout<<"\nPlayer-2\nEnter your choice:\n Round "<<i+1<<":.....\n Press:\n r - Rock \n p - Paper \n s - Scissor\n g - Glue\n";
        cin>>inp2;
       system("cls");
        if(inp1=='r')
        {
           // cout<<"\nComputer chooses ROCK\n";
            switch(inp2)
            {
                case 'r':
                    cout<<"Match draw!\n";
                    break;

                case 'p':
                    cout<<"Player 2 wins! \n";
                    pointuser1-=10;
                    pointuser2+=20;
                    break;
                case 's':
                    cout<<"Player 1 wins! \n";
                    pointuser1+=10;
                    pointuser2-=5;
                    break;
                case 'g':
                    cout<<"Player 1 wins! \n";
                    pointuser1+=10;
                    pointuser2-=10;
                    break;
                default:cout<<" This choice does not exist ";

            }

        }
        else if(inp1=='p')
        {
            //cout<<"\nComputer chooses PAPER \n";
            switch(inp2)
            {
                case 'r':
                    cout<<"Player 1 wins! \n";
                    pointuser1+=20;
                    pointuser2-=10;
                    break;

                case 'p':
                    cout<<"Match draw!\n";
                    break;

                case 's':
                    cout<<"Player 2 wins! \n";
                    pointuser1-=5;
                    pointuser2+=20;
                    break;

                case 'g':
                    cout<<"Player 2 wins! \n";
                    pointuser1-=5;
                    pointuser2+=10;
                    break;
                default:cout<<" This choice does not exist ";
            }
        }
        else if(inp1=='s')
        {
            //cout<<"\nComputer chooses SCISSORS\n";
            switch(inp2)
            {
                case 'r':
                    cout<<"Player 2 wins! \n";
                    pointuser1-=5;
                    pointuser2+=10;
                    break;

                case 'p':
                    cout<<"Player 1 wins! \n";
                    pointuser1+=20;
                    pointuser2-=5;
                    break;

                case 's':
                    cout<<"Match draw!\n";
                    break;

                case 'g':
                    cout<<"Player 2 win! \n";
                    pointuser1-=5;
                    pointuser2+=10;
                    break;
                    default:cout<<" This choice does not exist ";
            }
        }
        else
        {
            //cout<<"\nComputer chooses GLUE\n";
            switch(inp2)
            {
                case 'r':
                    cout<<"Player 2 wins! \n";
                    pointuser1-=10;
                    pointuser2+=10;
                    break;

                case 'p':
                    cout<<"Player 1 wins! \n";
                    pointuser1+=10;
                    pointuser2-=5;
                    break;

                case 's':
                    cout<<"Player 1 wins! \n";
                    pointuser1+=10;
                    pointuser2-=5;
                    break;

                case 'g':
                    cout<<"Match draw!\n";
                    break;
                default:cout<<" This choice does not exist ";
                }
            }
            cho=getche();
        }
        fin_graph(pointuser1,pointuser2);
    }
    else
    {
        int num,i,j,choice,time_taken,time1,time2,point=0;
        int numarr[]={3270,2090,865,4124,4571,1160,1497,9680,1041,5241,351,583,635,209,153,370,371,407,1634,8208,9474,28,496,8128,145,23,43,71,59,97,19,83,113,157,349,269,701,547,821,1019,1543,4327,2713,3853,4643,7211,8353,252,464,131,1221,8558,898,3663,515};
        time_t timer;
        char continue_key;
        number_graph();
        system("color E");
        cout<<"LET'S START THE GAME!";
        for(i=0;i<10;i++)
        {
            srand(time(0));
            j=(rand()%55);
            num=numarr[j];
            cout<<"\n\nRound :"<<i+1<<" Number is "<<num;
            cout<<"\nOPTIONS:\n\n1.Perfect number\n2.Prime number\n3.Krishnamurthy number\n4.Palindrome number\n5.Armstrong number\n6.None\n ENTER YOUR CHOICE: ";
            time1=time(&timer);
            cin>>choice;
            time2=time(&timer);
            time_taken=time2-time1;
            if(time_taken>30)
            cout<<"\nSorry! You took too long! :(";
            else
            {
                switch(choice)
                {
                    case 1:
                    if(perfect(num)==1)
                    {
                        cout<<"\nCorrect!";
                        point+=10;
                    }
                    else
                        cout<<"\nSorry! You got it wrong :(";
                    break;
                    case 2:
                    if(prime(num)==1)
                    {
                        cout<<"\nCorrect!";
                        point+=10;
                    }
                    else
                        cout<<"\nSorry! You got it wrong :(";
                    break;
                    case 3:
                    if(krishnamurthy(num)==1)
                    {
                        cout<<"\nCorrect!";
                        point+=10;
                    }
                    else
                        cout<<"\nSorry! You got it wrong :(";
                    break;
                    case 4:
                    if(palindrome(num)==1)
                    {
                        cout<<"\nCorrect!";
                        point+=10;
                    }
                    else
                        cout<<"\nSorry! You got it wrong :(";
                    break;
                    case 5:
                    if(armstrong(num)==1)
                    {
                        cout<<"\nCorrect!";
                        point+=10;
                    }
                    else
                        cout<<"\nSorry! You got it wrong :(";
                    break;
                    case 6:
                    if(perfect(num)==0&&prime(num)==0&&krishnamurthy(num)==0&&palindrome(num)==0&&armstrong(num)==0)
                    {
                        printf("\nCorrect!");
                        point+=10;
                    }
                    else
                        cout<<"\nSorry! You got it wrong :(";
                    break;
                }
            }
            continue_key=getchar();
            cout<<"\nPress Enter to continue";
            continue_key=getchar();
        }
        cout<<"\nFINAL SCORE: "<<point<<"/100";
        if(point>=80)
            cout<<"\nCongratulations! Great Score!";
        else if(point>=50)
            cout<<"\nGood Score!";
        else
            cout<<"\nIt's okay. There is always room for improvement :)";
        cout<<"\nThank you for playing. Come back for more :)";
    }
}
