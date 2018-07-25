#include<stdio.h>
#include<conio.h>
char ele[10]={'0','1','2','3','4','5','6','7','8','9'};
void board();
void main()
{
int player=1,a,w=10,winner,d=4;
char s,b;
clrscr();
board();
printf("TIC TAC TOE\n");
printf("HOW TO PLAY\nEnter the number of the respective place to play your turn\nEG:\n");
printf("PLAYER 1 is X\nPLAYER 2 is O\n");
invalid:
printf("PRESS S TO START\n");
scanf("%s",&s);
if(s=='s')
clrscr();
else if(s=='S')
clrscr();
else
{
printf("Invalid Response\n");
goto invalid;
}
while(w!=1)
{
board();
player=(player%2)?1:2;
invalid1:
printf("PLAYER %d:",player);
scanf("%d",&a);
if(player==1)
b='x';
else if(player==2)
b='o';
if (a==1 && ele[1]=='1')
ele[1]=b;
else if(a==1 && (ele[1]=='x'||ele[1]=='o'))
{
printf("Invalid option\n");
goto invalid1;
}
if (a==2 && ele[2]=='2')
ele[2]=b;
else if(a==2 && (ele[2]=='x'||ele[2]=='o'))
{
printf("Invalid option\n");
goto invalid1;
}
if (a==3 && ele[3]=='3')
ele[3]=b;
else if(a==3 && (ele[3]=='x'||ele[3]=='o'))
{
printf("Invalid option\n");
goto invalid1;
}
if (a==4 && ele[4]=='4')
ele[4]=b;
else if(a==4 && (ele[4]=='x'||ele[4]=='o'))
{
printf("Invalid option\n");
goto invalid1;
}
if (a==5 && ele[5]=='5')
ele[5]=b;
else if(a==5 && (ele[5]=='x'||ele[5]=='o'))
{
printf("Invalid option\n");
goto invalid1;
}
if (a==6 && ele[6]=='6')
ele[6]=b;
else if(a==6 && (ele[6]=='x'||ele[6]=='o'))
{
printf("Invalid option\n");
goto invalid1;
}
if (a==7 && ele[7]=='7')
ele[7]=b;
else if(a==7 && (ele[7]=='x'||ele[7]=='o'))
{
printf("Invalid option\n");
goto invalid1;
}
if (a==8 && ele[8]=='8')
ele[8]=b;
else if(a==8 && (ele[8]=='x'||ele[8]=='o'))
{
printf("Invalid option\n");
goto invalid1;
}
if (a==9 && ele[9]=='9')
ele[9]=b;
else if(a==9 && (ele[9]=='x'||ele[9]=='o'))
{
printf("Invalid option\n");
goto invalid1;
}
winner=player;
player--;
w=win();
d=draw();
if(d==2)
break;
}
board();
if(w==1)
printf("PLAYER %d WINS",winner);
else if(d==2)
printf("DRAW");
getch();
}
void board()
{
clrscr();
printf(" %c | %c | %c \n",ele[1],ele[2],ele[3]);
printf("___|___|___ \n");
printf(" %c | %c | %c \n",ele[4],ele[5],ele[6]);
printf("___|___|___ \n");
printf(" %c | %c | %c \n",ele[7],ele[8],ele[9]);
printf("___|___|___ \n");
}
int win()
{
if(ele[1]==ele[2]&&ele[2]==ele[3])
return(1);
else if(ele[4]==ele[5]&&ele[5]==ele[6])
return(1);
else if(ele[7]==ele[8]&&ele[8]==ele[9])
return(1);
else if(ele[1]==ele[4]&&ele[4]==ele[7])
return(1);
else if(ele[2]==ele[5]&&ele[5]==ele[8])
return(1);
else if(ele[3]==ele[6]&&ele[6]==ele[9])
return(1);
else if(ele[1]==ele[5]&&ele[5]==ele[9])
return(1);
else if(ele[3]==ele[5]&&ele[5]==ele[7])
return(1);
else
return(10);
}
int draw()
 {
if(ele[1]!='1' && ele[2]!='2' && ele[3]!='3' && ele[4]!='4' && ele[5]!='5' && ele[6]!='6'&& ele[7]!='7' && ele[8]!='8'&& ele[9]!='9')
return(2);
else
return(4);
}
