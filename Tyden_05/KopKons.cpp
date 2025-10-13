// Ukazkovy priklad na kopirovaci konstruktor
// Pokud nenapiseme vlastni, dela se pouze plytke kopirovani (sdilena DYNAMICKA pamet)
// tj. zmena promenne jedne instance je automaticky i u druhe instance a program
// v OS s lepsi spravou pameti PADA!

#include<iostream>
#include<stdlib.h>

using namespace std;


class Pes{
		public:
			Pes (int Roky)   // Konstruktor
			{
				JehoVek = new int;
				*JehoVek = Roky;
			}
			~Pes()				// Destruktor
			{
				delete JehoVek;
				JehoVek = 0;
			}
//			Pes (const Pes & KopirovanyPes); // Kopirovaci konstruktor

			int DejVek() const	{return (*JehoVek);}
			void NastavVek(int a){*JehoVek=a;}

		private:
			 int *JehoVek;
};

/*
Pes::Pes(const Pes & KopirovanyPes)
{
	JehoVek = new int;
	*JehoVek = KopirovanyPes.DejVek();
}
*/

int main (void)
{
	Pes Cesar(5);

	Pes Rek (Cesar);  // vola se kopirovaci konstruktor, ktery zkopiruje instanci Cesar

	cout << "Cesar ma "<< Cesar.DejVek() << endl;
	cout << "Rek ma "<< Rek.DejVek() << endl<<endl<<endl;

	Cesar.NastavVek(6);
	cout << "Cesar ma "<< Cesar.DejVek() << endl;
	cout << "Rek ma "<< Rek.DejVek() << endl;

    cout<<endl<<endl;
	system("pause");

	return 0;
}
