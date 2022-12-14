#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

// ENCAPSULATION
// amacı class içerisinde tanımlanan private özelliklerine erişim sağlamaktır.
// get metotları ile özelliklerin değerlerini getiririz.
// set metotları ile özelliklerin değerlerini değiştiririz.


class Kitap
{
	// private özellikler
	// private özelliklere dışarıdan erişim sağlanamamaktadır.
	// gizli özelliklerdir.dışarıya kapalıdır.
	
	private:
		string kitapAdi = "Kitap 1";
		string yazar = "Veysel";
		int sayfaSayisi = 256;
		
	// private özelliklere erişim sağlayabilmek için aynı class içerisinde public metotlat tanımlanır.
	// private özelliklere bu metotlar üzerinden erişim sağlanır.
	public:
		string getKitapAdi()
		{
			return this->kitapAdi;
		}
		void setKitapAdi(string kitapAdi)
		{
			this->kitapAdi = kitapAdi;
		}
		string getYazar()
		{
			return this->yazar;
		}		
		void setYazar()
		{
			string yeniYazar;
			cout << "Yeni yazarin ismini giriniz: ";
			cin >> yeniYazar;
			this->yazar = yeniYazar;
		}
		int getSayfaSayisi()
		{
			return this->sayfaSayisi;
		}
		void setSayfaSayisi(int sayfaSayisi)
		{
			this->sayfaSayisi = sayfaSayisi;
		}
};

int main() {
	
	Kitap kitap1;
	kitap1.setKitapAdi("Istanbul Hatirasi");
	kitap1.setSayfaSayisi(300);
	kitap1.setYazar();
	cout << kitap1.getKitapAdi() << endl;
	cout << kitap1.getSayfaSayisi() << endl;
	cout << kitap1.getYazar() << endl;
	return 0;
}
