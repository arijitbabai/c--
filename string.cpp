#include <iostream>
#include <string>

using namespace std;

	

main ()
{
  string name,s;
  int n;
  cout << "Please, enter your full name: ";
  
  getline (cin,name);
  getline (cin,s);
  cin >> n;
  cout << "Hello, " << name << "!\n";

  return 0;
}
