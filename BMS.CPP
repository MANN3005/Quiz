#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdio.h>
class theater
{
	public:
	char theatrename[40];
	int j;
	char theatrecode[5];
	char rating[10];
	char area[40];
	showtheatre();
	selecttheatre();
};
theater::showtheatre()
{
	 cout<<"theaters :"<<endl;
	 cout<<"1.miraj"<<endl;
	 cout<<"2.pvr";
};
class mdns
{
	public:
		char movname[30];
		int i;
		showmovie();
		selectmovie();
};
mdns::showmovie()
{
	cout<<"movies this month\n";


};
void main()
{
	mdns q;
	theater s;
	clrscr();
	cout<<".............................."<<endl;
	cout<<".  WELCOME TO BOOK MY SHOW   ."<<endl;
	cout<<".............................."<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<"TO RECIVE UPADTES ABOUT NEW MOVIES PLEASE ENTER YOUR NUMBER : ";
	int a;
	cin>>a;
	cout<<"PRESS ANY KEY TO CONTINUE...";
	getch();
	clrscr();
	cout<<"admin or customer??(a/c)";
	char b;
	cin>>b;
	if(b=='a')
	{
		clrscr();
		cout<<"welcome to the admin side "<<endl;
		cout<<"............"<<endl;
		cout<<".admin side."<<endl;
		cout<<"............"<<endl;
		char pass[32],a,realpass[12]="mannpatel";
		int y=0;
		start:
		cout<<"enter password : ";
		for(y=0;;)
		{
			a=getch();
			if(a>='a'&&a<='z'||a>='A'&&a<='Z'||a>='0'&&a<='9')
			{
				pass[y]=a;
				y++;
				cout<<"*";
			}
			if(a=='\b'&&y>=1)
			{
				cout<<"\b \b";
				y--;
			}
			if(a=='\r')
			{
				pass[y]='\0';
				break;
			}
		}
		cout<<endl;
		if(y<=5)
		{
			cout<<"password too small"<<endl;
			goto start;
		}
		for(y=0;y<9;y++)
		{
			if(pass[y]==realpass[y])
			{
				cout<<"1.add a movie"<<endl;
				cout<<"2.edit a movie"<<endl;
				cout<<"3.enter new theatre"<<endl;
				cout<<"please enter the choice"<<endl;
				break;
			}
			else
			{
				cout<<"wrong password";
				break;
			}
		}
	}
	else if(b=='c')
	{
		clrscr();
		cout<<"welcome to book my show ";
		cout<<"";
		cout<<"";
		cout<<"for booking please enter any key...";
		getch();
		clrscr();
		s.showtheatre();
		q.showmovie();
	}
	getch();
}