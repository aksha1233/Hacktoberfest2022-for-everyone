#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
 

void push(struct Node** head, int data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

void printList(Node* node)
{
    while (node != NULL) {
        cout << node->data <<" ";
        node = node->next;
    }
}

struct Node* mergell(struct Node* head , struct Node* head1){
    Node *newnode = new Node;
    Node *tail=newnode;
    if(head == NULL)
    {
        return head1;
    }
    if(head1 == NULL)
    {
        return head;
    }
    if(head->data<head1->data){
        head->next=mergell(head->next,head1);
        return head;
    }
    else
    {
         head1->next=mergell(head,head1->next);
         return head1;
    }

}

int main(){

    Node* a = NULL;
    Node* b = NULL;
    Node* middle = NULL;

    push(&a, 7);
    push(&a, 5);
    push(&a, 4);
    push(&a, 3);
    push(&a, 2);
    push(&a, 1);

    push(&b, 6);
    push(&b, 3);
    push(&b, 2);
    push(&b, 1);
    printList(a);
    Node *m=mergell(a,b);
    cout<<"\n";
    printList(m);

}