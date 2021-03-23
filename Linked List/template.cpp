#include <bits/stdc++.h>

using namespace std;

template<class T>
class Node{
    public:
        T val;
        Node* next = NULL;
};

template<class T>
Node<T>* insertAtStart(Node<T>*head,T val){
    Node<T>* temp = new Node<T>();
    temp->val = val;
    temp->next = head;
    return temp;
}


template<class T>
Node<T>* insertAtEnd(Node<T>*head,T val){
    Node<T>* start = head;
    while (start->next != NULL )
    {
        // cout<<head->val<< " ";
        start = start ->next;
    }
    Node<T>* temp = new Node<T>();
    temp->val = val;
    temp->next = NULL;
    start->next = temp;
    return head;
}

template<class T>
void print(Node<T>*head){
    while (head != NULL )
    {
        cout<<head->val<< " ";
        head = head ->next;
    }
    return ;
    
}

int main()
{
    // template<class T>
    Node<int>*head = NULL;
    head = insertAtStart(head,23);
    head = insertAtEnd(head,30);
    head = insertAtStart(head,25);
    head = insertAtStart(head,27);
    head = insertAtEnd(head,1);
    head = insertAtEnd(head,33);

    print(head);

    // Node<double>*head1 = NULL;
    // head1 = insertAtStart(head1,23.22);
    // head1 = insertAtEnd(head1,30.22);
    // head1 = insertAtStart(head1,25.22);
    // head1 = insertAtStart(head1,27.22);
    // head1 = insertAtEnd(head1,1.22);
    // head1 = insertAtEnd(head1,33.22);
    // print(head1);

    return 0;
}
