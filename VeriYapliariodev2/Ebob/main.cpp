#include <iostream>

using namespace std;

void ebob(int m, int n)
{
	if(m>n)
	{
		int r = m%n;
		if(r == 0)
		{
			cout << "Ebob: " << n;
		}
		else
		{
			m = n;
			n = r;
			ebob(m,n);
		}
	}
	else
	{
		int r = n%m;
		if(r == 0)
		{
			cout << "Ebob: " << m;
		}
		else
		{
			n = m;
			m = r;
			ebob(n,m);
		}
	}
}

int main() {
	int m,n;
	cout << "Bir sayi giriniz: ";
	cin >> m;
	cout << "Bir sayi giriniz: ";
	cin >> n;
	ebob(m,n);	
	
	return 0;
}
