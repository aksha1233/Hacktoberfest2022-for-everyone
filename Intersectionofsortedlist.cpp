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
struct Node *intersections(Node *head1,Node *head2)
{
    Node result;
    Node *tail=&result;
    result.next=NULL;
    Node *temp,*temp2;
    temp=head1;
    temp2=head2;
    while(temp != NULL && temp2 != NULL)
    {
       
        if(temp->data == temp2->data)
        {
           push(&tail->next,temp->data);
           tail=tail->next;
           temp=temp->next;
           temp2=temp2->next;
        }
        else if(temp->data < temp2->data)
        {
            temp=temp->next;
            // cout<<"14\n";
        }
        else{
            temp2=temp2->next;
        }
        }
       return (result.next);
    }

void printList(Node* node)
{
    while (node != NULL) {
        cout << node->data <<" ";
        node = node->next;
    }
}
int main(){

    Node* a = NULL;
    Node* b = NULL;
    Node* intersect = NULL;

    push(&a, 6);
    push(&a, 5);
    push(&a, 4);
    push(&a, 3);
    push(&a, 2);
    push(&a, 1);

    push(&b, 8);\
    push(&b, 6);
    push(&b, 4);
    push(&b, 2);
    intersect = intersections(a, b);
    cout<<"Linked list containing common items of a & b \n";
    printList(intersect);
}