//Double linked list node insertion at the beginning

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node* prev;
};

struct Node* head;

void Print()
{
    struct Node* temp = head;

    cout << "Forward: " << endl;
    while(temp != NULL)
    {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl ;
}

void revPrint()
{
    struct Node* temp = head;
    if( temp == NULL) return;
    
    while (temp->next != NULL)
    temp = temp->next;

    cout << "Reverse: " << endl;
    while(temp != NULL)
    {
        cout << temp->data << " <-> ";
        temp = temp->prev;
    }
    cout << "HEAD" << endl ;

}

struct Node* GetNewNode(int x)
{
    Node* temp = new Node();
    temp->data = x;
    temp->prev = NULL;
    temp->next = NULL;
    return temp;
}

//This func is to insert node at head at anytime and not just for 1st insert
void InsertAtHead(int x)
{
    struct Node* newNode = GetNewNode(x); //Getting a node from GetNewNode

    if (head == NULL) //If the list is empty
    {
        head = newNode; //newNode is head now
        return;
    } 

    //If the list is not empty:
    head->prev = newNode; //"Old head" prev pointing to newNode
    newNode->next = head; //"newNode" next pointing to old head
    head = newNode; //newNode becoming new head
}

int main()
{
    head = NULL;
    
    InsertAtHead(5); Print(); revPrint();
    InsertAtHead(10); Print(); revPrint();
    InsertAtHead(15); Print(); revPrint();
    InsertAtHead(20); Print(); revPrint();
    InsertAtHead(25); Print(); revPrint();


}