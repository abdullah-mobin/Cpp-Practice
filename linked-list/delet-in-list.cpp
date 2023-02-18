#include <iostream>
#include <stdlib.h>
using namespace std;

void creatlist(int size);
void printList();

void delstrat();
void delmid(int x);
void dellast();

struct NODE
{
    int data;
    struct NODE *next;
};
typedef struct NODE node;
node *head = (node *)malloc(sizeof(node));

int main()
{
    int listsize, delpos;
    cout << "Give list size :";
    cin >> listsize;
    cout << "List is creating ---" << endl;
    creatlist(listsize);

    cout << "Printing liist --- before delete" << endl;
    printList();

    delstrat();
    cout << "DEL position :";
    cin >> delpos;
    delmid(delpos);
    dellast();

    cout << "Printing list --- after delete" << endl;
    printList();

    return 0;
}

void creatlist(int size)
{
    cout << "Input Data For 1 : ";
    cin >> head->data;
    head->next = NULL;
    node *temp = (node *)malloc(sizeof(node));
    temp = head;
    for (int i = 2; i <= size; i++)
    {
        node *newNode = (node *)malloc(sizeof(node));
        cout << "Input Data For " << i << " : ";
        cin >> newNode->data;
        newNode->next = NULL;
        temp->next = newNode;
        temp = temp->next;
    }
}

void printList()
{
    node *temp = (node *)malloc(sizeof(node));
    temp = head;
    int i = 1;
    while (temp != NULL)
    {
        cout << "DATA " << i++ << " : " << temp->data << endl;
        temp = temp->next;
    }
}

void delstrat()
{
    node *temp = (node *)malloc(sizeof(node));
    temp = head;
    head = head->next;
    free(temp);
}

void delmid(int x)
{
    node *p, *q;
    p = head;
    q = head->next;
    for (int i = 2; i < x; i++)
    {
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    free(q);
}

void dellast()
{
    node *p, *q;
    p = head;
    q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
}