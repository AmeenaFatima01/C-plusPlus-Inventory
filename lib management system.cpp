#include<iostream>
using namespace std;
int i=0;
struct Library
{
		string name,author_name;
		float price;
		int yearOfPublication;		
}L[25];
void addBook()
{
	cout<<"ENTER BOOK NAME : ";
	cin>>L[i].name;
	cout<<"ENTER AUTHOR NAME : ";
	cin>>L[i].author_name;
	cout<<"ENTER YEAR OF PUBLICATION : ";
	cin>>L[i].yearOfPublication;
	cout<<"ENTER PRICE : ";
	cin>>L[i].price;
	
}
void searchBook()
{
	string n;
	cout<<"\nENTER THE NAME OF THE BOOK YOU WANT TO SEARCH : ";
	cin>>n;
	for(int a=0;a<i;a++)
	{
		if(n==L[a].name)
		{
			cout<<"\nHERE IS THAT BOOK DETAIL - - - \n";
			cout<<"\nBOOK NAME : "<<L[a].name<<endl;
			cout<<"AUTHOR NAME : "<<L[a].author_name<<endl;
			cout<<"YEAR OF PUBLICATION : "<<L[a].yearOfPublication<<endl;
			cout<<"PRICE : "<<L[a].price<<endl;
			
		}
	}
	cout<<"\nSORRY! THIS BOOK IS NOT AVAILABLE IN BOOKSHOP!! ";
}
void updateBook()
{
	string n;
	cout<<"\nENTER THE NAME OF THE BOOK YOU WANT TO UPDATE : ";
	cin>>n;
	for(int a=0;a<i;a++)
	{
		if(n==L[a].name)
		{
			cout<<"ENTER BOOK NAME : ";
			cin>>L[a].name;
			cout<<"ENTER AUTHOR NAME : ";
			cin>>L[a].author_name;
			cout<<"ENTER YEAR OF PUBLICATION : ";
			cin>>L[a].yearOfPublication;
			cout<<"ENTER PRICE : ";
			cin>>L[a].price;
			
		}
	}
	cout<<"\nSORRY! THIS BOOK IS NOT AVAILABLE IN BOOKSHOP!! ";
}
void deleteBook()
{
	string n;
	cout<<"\nENTER THE NAME OF THE BOOK YOU WANT TO DELETE : ";
	cin>>n;
	for(int a=0;a<i;a++)
	{
		if(n==L[a].name)
		{
			for(int k=a;k<i;k++)
			{
				L[k].name=L[k+1].name;
				L[k].author_name=L[k+1].author_name;
				L[k].yearOfPublication=L[k+1].yearOfPublication;
				L[k].price=L[k+1].price;
			}
			
		}
	}
	cout<<"\nSORRY! THIS BOOK IS NOT AVAILABLE IN BOOKSHOP!! ";
}
void displayBooks()
{
	if(i==0)
	{
		cout<<"\nSORRY BOOKSHOP IS EMPTY NOW.\n";
	}
	else{
	for(int a=0;a<i;a++)
	{
		cout<<"\n\nBOOK NAME : "<<L[a].name<<endl;
		cout<<"AUTHOR NAME : "<<L[a].author_name<<endl;
		cout<<"YEAR OF PUBLICATION : "<<L[a].yearOfPublication<<endl;
		cout<<"PRICE : "<<L[a].price<<endl;
	}
}
}
int main()
{
	int choice;
	cout<<"\n\t\t\t\tLIBRARY MANAGEMENT SYSTEM\n";
	cout<<"ENTER FOR BOOK OPERATION\n";
	cout<<"1.TO ADD \n";
	cout<<"2.TO SEARCH \n";
	cout<<"3.TO UPDATE \n";
	cout<<"4.TO DELETE \n";
	cout<<"5.TO DISPLAY \n";
	cout<<"6.TO EXIT \n\n";
	cout<<"YOUR CHOICE : ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			addBook();
			break;
		case 2:
			searchBook();
			break;
		case 3:
			updateBook();
			break;
		case 4:
			deleteBook();
			break;
		case 5:
			displayBooks();
			break;
		case 6:
			return 0;
			break;
		default:
			cout<<"\nWRONG CHOICE ENTERED\n";
			break;
		
	}
	
	return 0;
}
