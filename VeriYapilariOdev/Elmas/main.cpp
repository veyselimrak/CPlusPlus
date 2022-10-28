#include <iostream>

using namespace std;

int main(){	
	for(int i = 0; i < 9; i++)
	{
		for(int j = 0; j < 9; j++)
		{
			if(i+j == 4 || j - i == 4 || i - j == 4 || i+j == 12)
			{
				cout << " *";
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
