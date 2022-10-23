#include <iostream>
#include <iterator>

using namespace std;

int main(int argc, char** argv) {
	
	int dizi[3][2] 
	{
		{
			1,10	
		},
		{
			2,20
		},
		{
			3,30
		}
	};
	
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			cout << dizi[i][j] << endl;;	
		}	
	} 
	
	return 0;
}
