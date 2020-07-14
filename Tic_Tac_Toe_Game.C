//DEVELOPER : SAWANT BAPUSO
//PROJECT : TIC_TAC_TOE GAME
#include<stdio.h>
#include<conio.h>

int counter=0;
int n=2;
char a[]={'1','2','3','4','5','6','7','8','9'};
void input();
void player();
void check(char ,char);
void layout();
int conjucate();
void block1();
void block2();
void inputshowonly();
int replay();
void loading();

void main()
{
	int k,t;
	clrscr();
	loading();
	delay(1000);
	label:
	layout();
	player();
	block1();
	input();
	if(counter<10)
	{
		k=conjucate();
		if(k==100)
		{
			layout();
			player();
			inputshowonly();
			block2();
			gotoxy(42,17);
			printf("Result:");
			gotoxy(42,19);
			printf("Player 1 won this game...");
			counter=0;
			delay(2500);
			t=replay();
			if(t==1)
				goto label;
			else if(t==0)
				goto label1;
		}
		else if(k==200)
		{
			layout();
			player();
			inputshowonly();
			block2();
			gotoxy(42,17);
			printf("Result:");
			gotoxy(42,19);
			printf("Player 2 won this game...");
			counter=0;
			delay(2500);
			t=replay();
			if(t==1)
				goto label;
			else if(t==0)
				goto label1;
		}
		else if(k==300)
			goto label;
	}
	else
	{
		counter=0;
		printf("\nGame draw...");
		delay(500);
		t=replay();
		if(t==1)
			goto label;
		else if(t==0)
			goto label1;
	}
		label1:
		printf("Press any key to exit\n");
	getch();
}

void layout()
{
	clrscr();
	gotoxy(33,2);
	printf("Tic-toe game:");
	gotoxy(33,4);
	printf("---|---|---\n\t\t\t\t %c | %c | %c \n\t\t\t\t---|---|---\n\t\t\t\t %c | %c | %c\n\t\t\t\t---|---|---\t\t\t\t\n\t\t\t\t %c | %c | %c\n\t\t\t\t---|---|--- ",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);
}

void player()
{
	gotoxy(1,11);
	printf("Symbols:");
	printf("\n\nPlayer 1 : x\n");
	printf("Player 2 : 0");
}

void input()
{
	int i;
	char P,S;
	block1();
	gotoxy(6,17);
	if(n%2==0)
	{
		printf("Enter symbol & position:\n");
		gotoxy(7,19);
		printf("\tPlayer 1:");
		//gotoxy(7,20);
	       //printf("\t\tSymbol:");
		//fflush(stdin);
		//scanf("%c",&S);
		S='x';
		gotoxy(7,21);
		printf("\t\tEnter Position:");
		fflush(stdin);
		scanf("%c",&P);
		counter++;
		n++;
		check(S,P);
	}
	else
	{
		printf("Enter symbol & position:\n\n");
		gotoxy(7,19);
		printf("\tPlayer 2:\n");
		//gotoxy(7,20);
		//printf("\t\tSymbol:");
		//fflush(stdin);
		//scanf("%c",&S);
		S='0';
		gotoxy(7,21);
		printf("\t\tEnter Position:");
		fflush(stdin);
		scanf("%c",&P);
		counter++;
		n++;
		check(S,P);
	}
}

void inputshowonly()
{
		block1();
		gotoxy(6,17);
		printf("Enter symbol & position:\n\n");
		gotoxy(7,19);
		printf("\tPlayer 2:\n");
		gotoxy(7,20);
		printf("\t\tSymbol:");
		gotoxy(7,21);
		printf("\t\tPosition:");
}

void check(char s,char p)
{
	int i;
	for(i=0; i<=8; i++)
	{
		if(a[i]==p)
		{
			a[i]=s;
		}
	}
}

int conjucate()
{
	if((a[0]=='x'&&a[1]=='x'&&a[2]=='x') || (a[0]=='x'&&a[3]=='x'&&a[6]=='x')||(a[0]=='x'&&a[4]=='x'&&a[8]=='x'))
		return 100;
	else if((a[0]=='0'&&a[1]=='0'&&a[2]=='0') || (a[0]=='0'&&a[3]=='0'&&a[6]=='0')||(a[0]=='0'&&a[4]=='0'&&a[8]=='0'))
		return 200;
	else if(a[1]=='x'&&a[4]=='x'&&a[7]=='x')
		return 100;
	else if(a[1]=='0'&&a[4]=='0'&&a[7]=='0')
		return 200;
	else if(a[2]=='x'&&a[5]=='x'&&a[8]=='x')
		return 100;
	else if(a[2]=='0'&&a[5]=='0'&&a[8]=='0')
		return 200;
	else if(a[3]=='x'&&a[4]=='x'&&a[5]=='x')
		return 100;
	else if(a[3]=='0'&&a[4]=='0'&&a[5]=='0')
		return 200;
	else if(a[6]=='x'&&a[7]=='x'&&a[8]=='x')
		return 100;
	else if(a[6]=='0'&&a[7]=='0'&&a[8]=='0')
		return 200;
	else if(a[6]=='x'&&a[4]=='x'&&a[2]=='x')
		return 100;
	else if(a[6]=='0'&&a[4]=='0'&&a[2]=='0')
		return 200;
	else
		return 300;
}

void block1()
{
	int i;
	gotoxy(4,16);
	printf("%c",218);
	for(i=1;i<=30;i++)
	{
		printf("%c",196);
	}
	printf("%c",191);
	gotoxy(4,17);
	printf("%c",179);
	gotoxy(4,18);
	printf("%c",179);
	gotoxy(4,19);
	printf("%c",179);
	gotoxy(4,20);
	printf("%c",179);
	gotoxy(4,21);
	printf("%c",179);
	gotoxy(4,22);
	printf("%c",192);
	for(i=1;i<=30;i++)
	{
		printf("%c",196);
	}
	printf("%c",217);
	gotoxy(35,17);
	printf("%c",179);
	gotoxy(35,18);
	printf("%c",179);
	gotoxy(35,19);
	printf("%c",179);
	gotoxy(35,20);
	printf("%c",179);
	gotoxy(35,21);
	printf("%c",179);
}

void block2()
{
	int i;
	gotoxy(40,16);
	printf("%c",218);
	for(i=1;i<=30;i++)
	{
		printf("%c",196);
	}
	printf("%c",191);
	gotoxy(40,17);
	printf("%c",179);
	gotoxy(40,18);
	printf("%c",179);
	gotoxy(40,19);
	printf("%c",179);
	gotoxy(40,20);
	printf("%c",179);
	gotoxy(40,21);
	printf("%c",179);
	gotoxy(40,22);
	printf("%c",192);
	for(i=1;i<=30;i++)
	{
		printf("%c",196);
	}
	printf("%c",217);
	gotoxy(71,17);
	printf("%c",179);
	gotoxy(71,18);
	printf("%c",179);
	gotoxy(71,19);
	printf("%c",179);
	gotoxy(71,20);
	printf("%c",179);
	gotoxy(71,21);
	printf("%c",179);
}

int replay()
{
	char ch;
	clrscr();
	label:
	gotoxy(28,5);
	printf("Do you want to play again:\n\n\t\t\t   Enter Y for 'yes' OR N for 'no':\n\n");
	fflush(stdin);
	scanf("%c",&ch);
	if(ch=='y'|| ch=='Y')
	{
		a[0]='1';
		a[1]='2';
		a[2]='3';
		a[3]='4';
		a[4]='5';
		a[5]='6';
		a[6]='7';
		a[7]='8';
		a[8]='9';
		return 1;
	}
	else if(ch=='n' || ch=='N')
	{
		return 0;
	}
	else
	{
		printf("\nInvalid input\n");
		delay(1000);
		clrscr();
		goto label;
	}
}
void loading()
{
	int i;
	clrscr();
	gotoxy(1,9);
	textcolor(13);
	cprintf("LOADING...\n");
	for(i=1;i<=80; i++)
	{
		textcolor(RED);
		gotoxy(i,11);
		cprintf("|");
	}
	delay(100);
	for(i=1;i<=80; i++)
	{
		textcolor(15);
		delay(20);
		gotoxy(i,11);
		cprintf("|");
	}
	textcolor(11);
	cprintf("Loading completed...");
}
