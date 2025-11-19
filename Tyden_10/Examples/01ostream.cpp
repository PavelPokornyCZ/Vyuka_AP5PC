// Priklad na vystupy na obrazovku

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{   
 

	char a = 'A';   
	int c = 1000;
	double d=123.457;
	bool pravda = true;

	cout << a <<" je to " << c <<" - "<<pravda<<endl;

	cout << setw(20) << setiosflags(ios::showpos|ios::right)<<d<<endl<<endl;
	
	return 0;
}