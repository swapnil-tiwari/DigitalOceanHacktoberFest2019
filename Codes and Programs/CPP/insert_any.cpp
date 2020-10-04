//Any element will be added at any valid position

#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* link;
};

struct Node* head;

void Print()
{
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->link;
    }
    cout << "NULL\n"; 
}

void Insert(int data, int pos)
{
    Node* next = new Node(); //Creating new node
    next->data = data; //Transferring data to newly created node
    next->link = NULL; //Setting its address to be null

    if (pos == 1) //Inserting element at the beginning. (Special Case)
    {
        next->link = head; //This is necessary as user can enter pos 1 anytime.Otherwise we would have used if (head == NULl)

        head = next; //Newly created node giving its address to the head
        return;
    }

    Node *prev = head; //Creating prev
    for (int i=0; i<pos-2; i++) //Going to (n-2)th node {as we are starting from 0 so (n-1)-1} 
    {
        prev = prev->link; //Making prev as (n-1)th node
    }
    next->link = prev->link; //setting the next->link same as prev link ie (n+1)th node
    prev->link = next; //breaking link between prev and (n+1)th node and prev now pointing at next
}

int main()
{
    head = NULL; //Empty List

    Insert(2, 1); //List: 2
    Insert(3, 2); //List: 2 3
    Insert(4, 1); //List: 4 2 3
    Insert(5, 2); //List: 4 5 2 3

    Print();

}