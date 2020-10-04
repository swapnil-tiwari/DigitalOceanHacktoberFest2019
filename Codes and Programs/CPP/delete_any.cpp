//Any element will be deleted from any valid position

#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* link;
};

struct Node* head;

void Insert(int x)
{
    Node* next = new Node();
    next->data = x;
    next->link = NULL;

    if (head == NULL)
        head = next;

    else
    {
        struct Node* prev = head;
        while (prev->link != NULL) //Till n=2 while loop won't be considered. 
        //When n=3 while loop will run till n=1 coz n=2 will be storing null at that time.

            prev = prev->link; // We are telling that from that node go to link node and consider that as temp1 which is storing null in link.

        prev->link = next; // Removing prev->link = NULl by the next's node address
    }
}

void Print()
{
    Node* temp = head; //Taking the address from head of 1st element to transverse the linked list.
    cout << "Linked List is : \n";
    while (temp != NULL)
    {
        cout << temp->data << " -> "; //Printing the data stored.

        temp = temp->link; //To go to the link element where it is pointing.
    }
    cout << "NULL" << endl;
}

void Delete(int n)
{
    
    Node* prev=head; //prev stores address which was stored by head

    if (n==1) //Special Case to delete 1st element
    {
        head = prev->link; // Wherever next was pointing earlier that address is given to head so that head breaks the link from next.
        delete prev; //Deleting next

    }
    for (int i=0; i<n-2;i++) //Going till (n-2)th node
        prev = prev->link; //temp pointing to (n-1)th node

    Node* next = prev->link; //Pointing at nth node
    prev->link = next->link; //Now prev node will point at wherever next was pointing earlier
    delete next; //Deleting next to free memory
}


int main()
{
    head = NULL;

    Insert(2);
    Insert(4);
    Insert(6);
    Insert(5);
    Print();

    cout << "Enter the position you want to delete:";
    int n;
    cin >> n;
    Delete(n);
    Print();
}