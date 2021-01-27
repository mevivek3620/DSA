// Given pointer to the head node of a linked list, 
// the task is to reverse the linked list. 

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

//Iterative approach to reverse the link list
//prev is the previous node , curr is the current node and 
//next is the next node 
Node* reverse(Node* curr)
{
    Node* prev = NULL;
    Node* next = NULL;
    while(curr != NULL)
    {
        next = curr->next;         
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

//Recursive approach to reverse the link list
// 1->2->3->4->5
//reverse1 function will give you the pointer to the first node after reversal
Node* reverse1(Node* node)
{
    // base condition(if there is a single node or ll is empty)
    if(node == NULL || node->next == NULL)return node;
    
    // hypothesis(temp will give you the reverse of the remaining ll)
    Node* temp = reverse1(node->next);

    // LL becomes till now as : 1->2<-3-4<-5 and node is at 1 and temp is at node 5
    //induction (change the next pointer of node2 to node1 and node1 to NULL)
    node->next->next = node;
    node->next = NULL;
    return temp;
}

int main()
{
    Node* node = new Node(1);
    int cnt = 2;
    Node* root = node;
    while(cnt<10)
    {
        node->next = new Node(cnt);
        node = node->next;
        cnt++;
    }
    cout<<"Before reverasal"<<endl;
    print(root);
    // root = reverse(root);
    root = reverse1(root);
    cout<<endl<<"After reversal"<<endl;
    print(root);
    return 0;
}
