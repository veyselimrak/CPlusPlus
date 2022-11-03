#include <iostream>

using namespace std;

int ekok(int m, int n,int i)
{
	if(i%m==0 && i%n==0)
	{
		return i;
	}
	else
	{
		i = i + 1;
		return ekok(m,n,i);
	}
}
int main() {
	int m,n;
	cout << "Bir sayi giriniz: ";
	cin >>  m;
	cout << "Bir sayi giriniz: ";
	cin >> n;
	int result = ekok(m,n,1);
	cout << "Ekok: " << result; 
	return 0;
}
