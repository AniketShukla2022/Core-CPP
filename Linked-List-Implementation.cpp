#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    
    Node* next;
    Node(int x) : val(x), next(NULL)
    {
      
    }
};

int main()
{
    Node* head = NULL;
    Node* curr = NULL;
    int i;
    cout<<"Enter the number of linkedlist nodes: "<<endl;
    cin>>i;
    cout<<"Enter Nodes: "<<endl;
    
    while (i>0)
    {
        int x;
        cout<<"value of next node is: ";
        cin>>x;
        Node* newNode = new Node(x);
        if (head==NULL)
        {
            head = newNode;
            curr = head;
        }
        else
        {
            curr->next = newNode;
            curr = newNode;
        }
        i--;
    }
    Node* temp = head;
    cout<<"printing linked list: "<<endl;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    
    return 0;
}