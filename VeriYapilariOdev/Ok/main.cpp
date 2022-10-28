#include <iostream>

using namespace std;

int main() {
	
	for(int i = 0; i<9; i++)
	{
		for(int j=0; j<5;j++)
		{
			if(j == 2 || i == 2)
			{
				cout << "*";
			}
			else if( (i == 1 && j == 1) || (i == 1 && j == 3))
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
