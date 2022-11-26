#include <iostream>
#define SIZE 5

using namespace std;

class Queue
{
	private:
		int items[SIZE];
		int front;
		int rear;
	public:
		Queue()
		{
			this->front = -1;
			this->rear = -1;
		}
		bool isFull()
		{
			if( front == 0 && rear == SIZE - 1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		bool isEmpty()
		{
			if (front == -1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		void enqueue(int element)
		{
			if(isFull())
			{
				cout << "Kuyruk dolu eleman eklenemez." << endl;
			}
			else
			{
				if (front == -1)
				{
					front = 0;
				}
				rear++;
				items[rear] = element;
				cout << "Eleman Eklendi : " << element << endl;
			}
		}
		int dequeue()
		{
			int element;
			if (isEmpty())
			{
				cout << "Eleman silinemez." << endl;
				return -1;
			}
			else
			{
				element = items[front];
				if(front >= rear)
				{
					front--;
					rear--;				
				}
				else
				{
					front++;
				}
				cout << endl << "Silindi ->" << element << endl;
				return (element);
			}
		}
		void display()
		{
			if(isEmpty())
			{
				cout << "Kuyruk bos" << endl;
			}
			else
			{
				cout << "Front indeks: "  << front;
				cout << "Elemanlar" << endl;
				for (int i=front; i <= rear;i++)
				{
					cout << items[i] << " ";
				}
				cout << endl
					<< "rear indeks -> " << rear;
			}
		}
};

int main()
{
	
	Queue q;
	
	q.dequeue();	
	
	q.enqueue(15);
	q.enqueue(25);
	q.enqueue(35);
	q.enqueue(45);
	q.enqueue(55);
	q.display();
	q.dequeue();
	q.display();

	return 0;
}
