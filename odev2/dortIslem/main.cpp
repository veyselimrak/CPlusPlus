#include <iostream>

using namespace std;

double toplama(double a, double b)
{
	double toplam;
	toplam = a + b;
	return toplam;
}
double cikarma(double a, double b)
{
	double cikarma;
	cikarma = a - b;
	return cikarma;
}
double carpma(double a, double b)
{
	double carpma;
	carpma = a * b;
	return carpma;
}
double bolme(double a, double b)
{
	double bolme;
	bolme = a / b;
	return bolme;
}

int main() {
	double a = 25.6;
	double b = 30.5;
	
	double sonuc = toplama(a,b);
	cout << sonuc << endl;

	sonuc = cikarma(a,b);
	cout << sonuc <<endl;;
	
	sonuc = carpma(a,b);
	cout << sonuc << endl;

	sonuc = bolme(a,b);
	cout << sonuc << endl;
	
	return 0;
}
