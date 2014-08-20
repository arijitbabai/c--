#include <iostream>
#include <string>

using namespace std;

//Declesring the class
	
class acnt
{
    int acnt_no;
	float bal;
	string type,usrnm,psswd;
	string name,dummy,u,p;
	

	public:acnt(){
			bal = 00.00;
		}

		//Taking the usrname and password of the new user  
		void secure()
		{
			cout <<"<< Username :" << endl;
			cin >> usrnm;
			cout <<"<< Password :" << endl;
			cin >> psswd;

		}	
		//Taking the personal details of the user
		void getdata()
		{
			
			cout << "Enter your account no. :" << endl;
			cin >> acnt_no;
			getline(cin,dummy);
			cout << "Enter your name :"<<endl;     
			getline(cin,name);
			cout << "Enter your account type :"<< endl;
			cin >> type;
			//cout << "Enter your 1st depositing amount : " << endl;
			//cin >> bal;
			cout << "Your account is created" << endl;
		}

		//For depositing money
		void dposit()
		{
			float d;
			cout << "Enter your ammount :" << endl;
			cin >> d;
			bal =  d + bal;
			details();
			//cout << "Now your balance is : "<< bal;
		}
		
		//For withdrawling money
		void withdrawl()
		{
			float w;
			cout << "Enter your ammount to be withdrawn : " << endl;
			cin >> w;
			if(w > bal)
				cout << "You have not sufficient balance " << endl;
			else 
			{
				bal = bal - w;
				details();//cout << "Now your balance is :" << bal;
			}
		}

		//Checking the username and password of the user

		int check(acnt s)
		{
			if(s.u == usrnm && s.p == psswd)
				return 1;
			else 
				return 0;
		}
		//input usrname and password for checking

		void c()
		{
			cout <<"<< Username :" << endl;
			cin >> u;
			cout <<"<< Password :" << endl;
			cin >> p;
		}
		//print the details of the user account

		void details()
		{
			cout <<"Name = " << name << endl;
			cout <<"Account no. = " << acnt_no << endl;
			cout <<"Account type = " << type << endl;
			cout <<"Balance = " << bal << endl;
		}
};

//main function
int main(void)
{
	acnt a[10],s1;
	int i = 12;
	int j = 0,m;
	//cout << "Enter the details of the banker "<<endl;
	//a[j].secure();
	//a[j].getdata();	
	while(i != 0)
	{
		cout << "<< 1 to deposite " << endl
			<< "<< 2 to withdrawl" << endl
			<< "<< 3 to account details" << endl
			<< "<< 4 to add new user" << endl
			<< "<< 0 to exit"<<endl;

		cin >> i;
		if(i == 1)
		{
			s1.c();
			for(m = 0 ; m <= j ; m++)
			{
				
				if(a[m].check(s1))
				{
					a[m].dposit();
					break;
				}
				
			}
			if(a[m].check(s1) == 0)
				cout << "You have entered wrong Username or Password"<< endl;	
		}
		
		if(i == 2)
		{
			s1.c();
			for(m = 0 ; m <= j ; m++)
			{
				
				if(a[m].check(s1))
				{
					a[m].withdrawl();
					break;
				}
				
			}
			if(a[m].check(s1) == 0)
				cout << "You have entered wrong Username or Password"<< endl;	

		}
		
		if(i == 3)
		{
			s1.c();
			for(m = 0 ; m <= j ; m++)
			{
				
				if(a[m].check(s1))
				{	
					a[m].details();
					break;
				}
				
			}
			if(a[m].check(s1) == 0)
				cout << "You have entered wrong Username or Password"<< endl;	
		}
		
		if(i == 4)
		{
			
			a[j].secure();
			a[j].getdata();
			j = j+1;
		}
		
	}
	return 0;
	
}

	 	
					
		
