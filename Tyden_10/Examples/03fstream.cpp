// Priklad na uziti datovych proudu pri práci se soubory
// Zapis cisel 1 - 10 do souboru - kazde cislo na jeden radek

#include<iostream>
#include<fstream>

using namespace std;

int main(void)
{
	// fstream F;
	ofstream F;  // do souboru jen zapisujeme, proto muze byt F instanci teto tridy

    int i;

	F.open("data.dat", ios::out|ios::app);
	if(!F)
	{
		cout << "Chyba pri otevirani souboru";
		return(1);
	}
	
	for(i=1; i<=10; i++)
	{
       F << i << endl;
	}

	F.close();
	return 0;
}