#include <iostream>

using namespace std;

void onlukToIkilik(int a)
{
	int basamak[50];
	int n = 0;
	while(a > 0)
	{
		if(a % 2 == 0)
		{
			basamak[n] = 0;
		}
		else
		{
			basamak[n] = 1;
		}
		a = a / 2;
		n++;
	}
	for(n = n-1;0 <= n; n--)
	{
		cout << basamak[n];
	}
}
void ikilikToOnluk(int sayi)
{
	int s = 1, basamak, toplam;
	while(sayi > 0)
	{
		basamak = sayi % 10;
		toplam = toplam + s * basamak;
		sayi = sayi / 10;
		s = s * 2;
	}
	toplam -= 1;
	cout << "Onluk sistemde karsiligi: " << toplam;
}

int main() {
	
	int a;
	cout << "Onluk bir Sayi Giriniz: ";
	cin >> a;
	onlukToIkilik(a);
	cout << endl;


	int b;
	cout << "Ikilik sistemde bir sayi giriniz: ";
	cin >> b;
	cout << endl;
	ikilikToOnluk(b);
    
	return 0;
}
