// Given a linked list of size N. The task is to reverse every k nodes 
// (where k is an input to the function) in the linked list.

#include <bits/stdc++.h>

using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int x)
        {
            this->data = x;
            this->next = NULL;
        }
};

void print(Node* curr)
{
    while(curr != NULL)
    {
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}

//Linked list based approach to reverse the link list
//prev is the previous node ,curr is the current node and 
//next is the next node 
Node* reverse(Node* curr,int k)
{
    int cnt = 0;
    Node* prev=NULL,*next = NULL;
    Node* temp = curr;
    while(curr != NULL && cnt<k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        cnt++;
    }
    if(curr != NULL)
    {
        temp->next = reverse(curr,k);
    }
    return prev;
}


int main()
{
    Node* node = new Node(1);
    int cnt = 2;
    Node* root = node;
    while(cnt<11)
    {
        node->next = new Node(cnt);
        node = node->next;
        cnt++;
    }
    cout<<"Before reverasal"<<endl;
    print(root);
    root = reverse(root,4);
    cout<<endl<<"After reversal"<<endl;
    print(root);
    return 0;
}
