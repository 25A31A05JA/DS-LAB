#include <iostream>
using namespace std;class Node
{
public:
    int data;
    Node *next;
};
int main()
{
    int n, value;
    Node *head = NULL, *newnode = NULL, *temp = NULL;
    cout << "Enter number of nodes: ";
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        newnode = new Node();
        cout << "Enter data for node " << i << ": ";
        cin >> value;
        newnode->data = value;        newnode->next = NULL;
        if(head == NULL)
        {
            head = newnode;
            temp = head;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
    temp = head;
    cout << "Single Linked List Elements are:\n"
;
    while(temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";   
 return 0;
}
