#include <iostream>

using namespace std;

int main() {
	cout << endl;
	for(int i=0; i<9; i++)
	{
		for(int j=0;j<9;j++)
		{
			if(i==0 || j == 0 || i == 8 || j == 8)
			{
				cout << "* ";
			}
			else
			{
				cout << "  ";
			}	
		}
		cout << endl;
	}	
	return 0;
}
