#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

// ENCAPSULATION
// amacý class içerisinde tanýmlanan private özelliklerine eriþim saðlamaktýr.
// get metotlarý ile özelliklerin deðerlerini getiririz.
// set metotlarý ile özelliklerin deðerlerini deðiþtiririz.


class Kitap
{
	// private özellikler
	// private özelliklere dýþarýdan eriþim saðlanamamaktadýr.
	// gizli özelliklerdir.dýþarýya kapalýdýr.
	
	private:
		string kitapAdi = "Kitap 1";
		string yazar = "Veysel";
		int sayfaSayisi = 256;
		
	// private özelliklere eriþim saðlayabilmek için ayný class içerisinde public metotlat tanýmlanýr.
	// private özelliklere bu metotlar üzerinden eriþim saðlanýr.
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
