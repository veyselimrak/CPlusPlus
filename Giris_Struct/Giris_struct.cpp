#include <iostream>

using namespace std;


struct Kisi 
{
	string ad;
	string soyad;
	int TcNo;		
};

int main()
{
	cout << "Merhaba Dunya" << endl;
	Kisi biri;
	biri.ad = "Veysel";
	biri.soyad = "Imrak";
	biri.TcNo = 12345;
	
	cout << "Adi : " << biri.ad << endl;
	cout << "Soyadi : " << biri.soyad << endl;
	cout << "Tc Kimlik Numarasi : " << biri.TcNo << endl;
	
	return 0;
}
