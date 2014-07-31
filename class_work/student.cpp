
#include <iostream>
using namespace std;

class student{
	public:
		int roll;
		string name;

};

int main(void)
{
	student s1;
	cout << "Enter the name amd roll no. of the student\n";
	cin >> s1.roll >> s1.name;
	cout << s1.roll << "\t " << s1.name; 
	return 0;
}
