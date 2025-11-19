// Priklad na uziti datovych proudu pri praci s retezci

#include <string>
#include <iostream>

using namespace std;

int main(void) 
{
	string a="Ahoj", b("svete");
	string c,d;

	// logicke operace s retezci
	cout<<a<<" "<<c<<endl;
	c =a+string(" ")+b;
	cout<<c<<endl;
   
	// nacitani a vypis retezce
	cout<<"Neco napis : ";
	cin>>d;
	cout<<d<<endl<<endl;

	// pristup k jednotlivym znakum retezce a zjisteni jeho delky
	// metody .length() nebo .size()
	cout<<"3. znak:"<<c[2]<<" z poctu:"<<c.length()<<endl;

	cout<<endl<<endl;

	// porovnavani dvou retezcu
	if (b==d)
		cout<<"Retezce b a d jsou stejne."<<endl;
	else
		cout<<"Retezce b a d nejsou stejne."<<endl;

	//hledani rezce v casti jineho retezce - metoda .find(string)
	string e;
	size_t nalezeno;

	cout<<endl<<endl<<"Zadej hledany retezec: ";
	cin>>e;
	nalezeno=c.find(e);
	if(nalezeno == string::npos)
		cout<<endl<<"Retezec nenalezen!"<<endl<<endl;
	else
	{
	    cout<<endl<<"Retezec "<<c<<" obsahuje hledany retezec "<<e;
		cout<<" na pozici "<<int(nalezeno)<<"."<<endl<<endl;
	}

	// vymaz casti retezce - metoda .erase (pozice, kolik)
	e="Kdo chce psa bit, hul si vzdy najde.";
	e.erase(4,5);
	cout<<endl<<e<<endl<<endl;

	// zjisteni zda je retezec prazdny - metoda .empty()
	string f;
	if(f.empty())
		cout<<endl<<"Retezec je prazdny!"<<endl<<endl;

	system("pause");
	return 0;
}
