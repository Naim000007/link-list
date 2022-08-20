#include <bits/stdc++.h>
using namespace std ;
class node{
public :
    int data;
    node *next;
    node(int a)
    {
        this -> data =a;
        this -> next = NULL;
    }
};
void print(node* &head)
{
    node* temp = head;
    while (temp!= NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}
void inseartathead (node* &head , int a)
{
    node* temp = new node(a) ;
    temp -> next = head;
    head = temp;
}
void inseartattail (node* &tail , int a)
{
    node* temp = new node(a);
    tail -> next = temp;
    tail = temp;
}
void insertatposition(node* head, node* tail , int position , int a)
{
    if (position == 1)
    {
        inseartathead(head, a);
        return ;
    }
    node* temp = head;
    int cnt = 1;
    while (cnt <position-1)
    {
      cnt++;
      temp = temp -> next;
    }
    if ( temp -> next == NULL)
    {
        inseartattail(tail , a);
        return;
    }
    node* node1 = new node (a);
    node1 -> next = temp -> next;
    temp -> next = node1;
    return ;
}
node* reverse(node* &head)
{
    node* prevptr = NULL;
    node* currentptr = head;
    node* nextptr = NULL;
    while (current!= NULL)
    {
        nextptr = currentptr -> next;//traverse the link
        current -> next = prevptr;//change the link

        prevptr = currentptr;
        currentptr = nextptr;
    }
    return prevptr;
}



int main ()
{
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;
    inseartathead(head, 9);
    inseartattail(tail , 12);
    insertatposition(head, tail , 3 ,11);
    print(head);
    node* newhead = reverse(head);
    print(newhead);

    return 0;
}
