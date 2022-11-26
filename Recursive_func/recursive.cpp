#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int toplamSayi(int a,int i)
{
	if(a > 0)
	{
		if(a > i)
		{
			if(i%2==0)
			{
				return i + toplamSayi(a,i+2);
			}
		}
	}
}
int main()
{
	int toplam = toplamSayi(8,0);
	cout << toplam;
	return 0;
}
