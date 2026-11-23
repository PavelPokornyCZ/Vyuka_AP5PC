// Priklad na vstupy a vystupy s datovymi proudy


#include <iostream>
#include <iomanip>

using namespace std;

int main (void)
{
	double vyska, hmotnost;

	cout << "Vyska osoby (v cm): ";
	cin >> vyska;
	cout << "Hmotnost osoby (v kg:) ";
	cin >> hmotnost;

	cout << "Clovek merici " << setprecision(4) << vyska/100 <<" m ";
	cout << "a vazici " << hmotnost << " kg ma";

	if (hmotnost < vyska/2.5)
		cout << " podvahu." << endl;
	else if (vyska/2.5 <= hmotnost && hmotnost <= vyska/2.3)
		cout << " normalni hmotnost." << endl;
	else
		cout << " nadvahu." << endl;

	return 0;
}