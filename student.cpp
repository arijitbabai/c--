#include <iostream>

using namespace std;

class student
{
	int roll;
	float m1, m2 , m3 , total , avg;
	string name,d;
	public:void getdetail()
		{
			cout << "Enter the name of the student : " ;
			getline(cin,d);
			getline(cin,name);
			cout << "Enter the roll : ";
			cin >> roll;
			cout << "Enter the marks1,  marks2 , marks3 : ";
			cin >> m1 ;
			cin >> m2 ;
			cin >> m3 ;
			
			total = m1 + m2 + m3;
			avg = total/3;
		}
		
				
		
		void show()
		{
			cout << name << "\t\t" 
				<< roll << "\t\t"
				<<m1 << "\t\t"
				<< m2 << "\t\t"
				<< m3 << "\t\t"
				<< total << "\t\t"
				<< avg << endl;
			
		}

};


int main(void)
{
	int n,i;
	student s[20];
	cout << "Enter the no. of the student" << endl;
	cin >> n;
	for(i = 0 ; i < n ; i++)
	{	
		s[i].getdetail();
	}
	
	cout <<"\t"<< "Name" << "\t\t"
		<<"Roll"<< "\t\t"
		<<"Marks1"<< "\t\t"
		<<"Marks2"<< "\t\t"
		<<"Marks3"<< "\t\t"
		<<"Total"<< "\t\t"
		<<"Average"<< endl;
 
	for(i = 0 ; i < n ; i++)
	{	
		s[i].show();
	}
 }
