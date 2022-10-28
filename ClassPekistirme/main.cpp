#include <iostream>
#include <string>

using namespace std;

class Silah
{
	public:
		string isim;
		int mermiSayisi;
		int silahUzunlugu;
		bool seriTek;
		
		void sarjorDegistir()
		{
			cout << "Sarjor Degistirildi." << endl;
		}
};
class Ak47 : public Silah
{
	public:
		
		void atesEt()
		{
			cout << "Ates Edildi" << endl;
		}
};
class M1 : public Silah 
{
	public:

		bool durbun;	
		
		void atesEt()
		{
			cout << "Ates Edildi" << endl;
		}
};
int main() {
	Ak47 ak47;
	ak47.isim = "Ak47";
	ak47.mermiSayisi = 30;
	ak47.seriTek = true;
	ak47.silahUzunlugu = 80;
	ak47.sarjorDegistir();	
	
	M1 m1;
	
	m1.isim = "M1";
	m1.sarjorDegistir();
	return 0;
}
