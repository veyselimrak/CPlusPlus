#include <iostream>

using namespace std;

class Node
{
public:
	int data;
	Node *next;
	Node(int data,Node *next=NULL)
	{
		this->data = data;
		this->next = next; 
	}
};
int print(Node *temp)
{
	int sayac = 0;
	while (temp != NULL)
	{
		cout << temp->data << endl;
		temp = temp->next;
		sayac += 1;
	}
	return sayac;
}
void yazdir(Node *temp)
{
	if(temp != NULL)
	{
		cout << temp->data << endl;
		yazdir(temp->next);
	}
}
int main() {
	
//	Node *myNode = new Node(5);
//	Node *myNode2 = new Node(8);
//	Node *myNode3 = new Node(12);	
//	
//	
//	Node *head;
//	head = new Node(5);
//	head->next = new Node(3);
//	head->next->next = new Node(7);
//	head->next->next->next = new Node(11);
//	head->next->next->next->next = NULL;
	
	Node *head = new Node(5); 
	Node *temp;
	temp = head;
	temp->next=new Node(3);
	temp= temp->next;
	temp->next = new Node(7);
	temp = temp->next;
	temp->next = new Node(11);
	temp = temp->next;
	
	Node *head2 = new Node(4);
	head2->next = head;
	head = head2;
	
	int sayac = print(head);
	cout << "***************************"<< endl;
	yazdir(head);
	
	cout <<  sayac;
		
	return 0;
}
