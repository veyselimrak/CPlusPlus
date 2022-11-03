#include <iostream>

using namespace std;

void asal(int a, int i)
{
	if(i == 2 || i == 3 || i == 5 || i == 7)
	{
		cout << i << " asaldir."<< endl;
		asal(a,i+=1);
	}
	else if(i == a)
	{
		cout << "Uygulama sona erdi." << endl;
	}
	else if(i%2==0 || i%3==0 || i%5==0 || i%7==0)
	{
		cout << i << " asal degildir." << endl;
		asal(a,i+=1);
	}
	else
	{
		cout << i << " asaldir." << endl;
		asal(a,i+=1);
	}
}
int main() {
	int a;
	cout << "Bir sayi giriniz: ";
	cin >> a;
	asal(a,2);
	
	return 0;
}
