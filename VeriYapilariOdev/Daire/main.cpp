#include <iostream>

using namespace std;

void yildiz()
{
	cout << "*";
}
void yildizAlt()
{
	cout << "*";
	cout << "        ";
	cout << "*" << endl;
}
int main() {
	cout << "   ";
	for(int i = 0;i < 4;i++)
	{
		yildiz();
	}
	cout << endl;
	cout << " *      *";
	cout << endl;
	for(int i = 0; i < 2;i++)
	{
		yildizAlt();
	}
	cout << " *      *";
	cout << endl;
		cout << "   ";
	for(int i = 0;i < 4;i++)
	{
		yildiz();
	}	
	return 0;
}
