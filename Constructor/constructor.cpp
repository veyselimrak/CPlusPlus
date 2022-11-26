#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>

using namespace std;

// Constructorlarda geri dönüþ tipi veya void yazmamýza gerek yoktur.
// Constructurlar private kýsmýna hiçbir zaman yazýlmaz.
// Constructurlar class ile ayný isimde olur.

class Bilgisayar
{
	private:
		int agirlik;
		string islemci;
		int ram;
		
	public:
		//Yapýcý Constructor
		Bilgisayar()
		{
			cout << "Constructor Baslatildi." << endl;
			this->agirlik = 15;
			this->islemci = "Inteli5";
			this->ram = 8;
		}
		
		//Yýkýcý Constructor
		~Bilgisayar()
		{
			cout << "Constructur Kapatildi." << endl;
		}
		
		string getIslemci()
		{
			return this->islemci;
		}
		void setIslemci(string islemci)
		{
			this->islemci = islemci;
		}		
};

int main()
{
	
	Bilgisayar bilgisayar;
	
	string islemci = bilgisayar.getIslemci();
	cout << islemci << endl;
	bilgisayar.setIslemci("AMD Ryzen");
	islemci = bilgisayar.getIslemci();	
	cout << islemci << endl;
	
	
	return 0;
}
