#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	string password;
	char ch;
	cout<<"\n Enter your password : ";
	do
	{
		ch=getch();
		if(isdigit(ch) || isalpha(ch) || ispunct(ch)){
			password+=ch;
			cout<<"*";
		}	
	}while(isdigit(ch) || isalpha(ch) || ispunct(ch));
	cout<<"\n\n Your password is : "<<password;
	cout<<endl;
	return 0;
}
