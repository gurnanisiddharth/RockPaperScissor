#include<iostream>
#include<ctime>
#include<cstdlib>
#include<conio.h>
#include<stdlib.h>
using namespace std;



 main()
{   srand(time(0));
	int i,t,s;
	char you;
	char a;
	int choice=2;
	t=0;
	s=0;
	do{ t++;
	cout<<" Welcome to rock paper scissors , press r if you choose rock , p for paper , s for scissors ";
	cin>>you;
	i = rand()%3;
	if(i==0)
		{
		a='r';
		}
		else if(i==1)
		{
		a='p';
		}
		else if(i==2)
		{
		a='s';
		}
		else
		{
		cout<<"error";
		}
	 if(you==a)
	 {
	 	cout<<"DRAW,you selected "<<you<<" and computer selected "<<a;
	 	t--;
	 }
	 else if(you=='s'&&a=='p')
	 {
	 	cout<<"YOU WIN,you selected "<<you<<" and computer selected "<<a;
	 	s++;
	 }
	 else if(you=='p'&&a=='r')
	 {
	 	cout<<"YOU LOSE,you selected "<<you<<" and computer selected "<<a;
	 }
	 else if(you=='r'&&a=='s')
	 {
	 	cout<<"YOU WIN,you selected "<<you<<" and computer selected "<<a;
	 	s++;
	 }
	  else if(you=='s'&&a=='r')
	 {
	 	cout<<"YOU LOSE,you selected "<<you<<" and computer selected "<<a;
	 }
	  else if(you=='p'&&a=='s')
	 {
	 	cout<<"YOU WIN,you selected "<<you<<" and computer selected "<<a;
	 	s++;
	 }
	  else if(you=='r'&&a=='p')
	 {
	 	cout<<"YOU LOSE,you selected "<<you<<" and computer selected "<<a;
	 } 
	  else 
	 {
	 	cout<<"error2";
	 }
	 cout<<"\nDo you Want to play again??1 for yes , 0 for no\n";
	 cin>>choice;
	 }while(choice!=0);
	 cout<<"Your total score is "<<s<<"/"<<t<<" without counting draws.\n";
	 cout<<"Thank you for playing !";
	
	
	getch();
}
