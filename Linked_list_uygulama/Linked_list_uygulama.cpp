#include <iostream>

using namespace std;

class Number
{
	public:
		int data;
		Number *next;
		
		Number(int data, Number *next=NULL)
		{
			this->data = data;
			this->next = next;
		}
};
int yazdir(Number *temp)
{
	int sayac = 0;
	while (temp!=NULL)
	{
		sayac = sayac + 1;
		cout << temp->data << endl;
		temp=temp->next;
	}
	return sayac;
}
int main()
{
	Number *head,*temp;
	head = new Number(5);
	temp = head;
	temp->next = new Number(3);
	temp = temp->next;
	temp->next = new Number(7);
	temp = temp->next;
	temp->next = new Number(8);
	temp = temp->next;
	
	cout << "Elemanlar" << endl;
    int info = yazdir(head);
	cout << "Eleman Sayisi: " << info;  
	return 0; 
}
