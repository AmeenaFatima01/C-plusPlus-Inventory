#include<iostream>
using namespace std;
class Bank
{
	private:
		char name[40],type[40];
		int bal,num;
	public:
		Bank()
		{
			cout<<"\nENTER THE ACCOUNT NAME : ";
			cin.getline(name,40);
			cout<<"ENTER THE ACCOUNT TYPE : ";
			cin.getline(type,40);
			cout<<"ENTER THE ACCOUNT NUMBER : ";
			cin>>num;
			cout<<"ENTER THE OPENING BALANCE : ";
			cin>>bal;
		}
		void deposit(int amount)
		{
			bal+=amount;
			cout<<"\n YOUR CURRENT BALANCE NOW IS : "<<bal;
		}
		void withdraw(int amount)
		{
			if(amount>bal)
			{
				cout<<"LESS BALANCE THAN WITHDRAW AMOUNT";
			}
			else
			{
				bal-=amount;
				cout<<"\n YOUR CURRENT BALANCE NOW IS : "<<bal;
			}
			
			
		}
		void transfer(int amount)
		{
			int transfer;
			cout<<"\nENTER THE ACCOUNT NUMBER TO WHICH TRANSFER MONEY : ";
			cin>>transfer;
			if(amount>bal){
				cout<<"LESS BALANCE THAN TRANSFER AMOUNT";
			}
			else
			{
				bal-=amount;
				cout<<"\n YOUR CURRENT BALANCE NOW IS : "<<bal;
			}
			
			
		}
		void display()
		{
			cout<<"\n\n YOUR ACCOUNT ";
			cout<<"\n NAME : "<<name;
			cout<<"\n NUMBER : "<<num;
			cout<<"\n TYPE : "<<type;
			cout<<"\n BALANCE : "<<bal;
		} 
};

int main()
{
	Bank b;
	int choice,amount;
	cout<<"\n\n\n               ========================="<<endl;
	cout<<"               ENTER"<<endl;
	cout<<"               1. TO DEPOSIT MONEY"<<endl;
	cout<<"               2. TO WITHDRAW MONEY"<<endl;
	cout<<"               3. TO TRANSFER MONEY"<<endl;
	cout<<"               4. TO DISPLAY"<<endl;
	cout<<"               5. TO EXIT"<<endl;
	cout<<"               =========================\n\n"<<endl;
	
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			cout<<"\nENTER THE AMOUNT TO DEPOSIT : ";
			cin>>amount;
			b.deposit(amount);
		break;
		
		case 2:
			cout<<"\nENTER THE AMOUNT TO WITHDRAW : ";
			cin>>amount;
			b.withdraw(amount);
		break;
		
		case 3:
			cout<<"\nENTER THE AMOUNT TO TRANSFER : ";
			cin>>amount;
			b.transfer(amount);
		break;
		
		case 4:
			b.display();
		break;
		
		case 5:
			return 0;
		break;
		
		default :
			cout<<"\nWRONG CHOICE\n ";
		break;
	}
	
	return 0;
	
}
