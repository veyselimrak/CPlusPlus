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

	Kisi kisiler[3];
	for(int i=0; i<3; i++)
	{
		Kisi a;
		cout << "Ad giriniz : ";
		cin >> a.ad;
		
		cout << "Soyad giriniz: ";
		cin >> a.soyad;
		
		cout << "Tc numarasi giriniz : ";
		cin >> a.TcNo;
		
		kisiler[i] = a;
	}
	
	for(int i=0; i<3; i++)
	{
		cout << "isim: "<< kisiler[i].ad << endl;
		cout << "Soyismi: "<< kisiler[i].soyad << endl;
		cout << "Tc Kimlik Numarasi : "<< kisiler[i].TcNo << endl;
		
	}
	
	return 0;
}
