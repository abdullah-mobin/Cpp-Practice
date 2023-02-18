#include <iostream>
#include <stdlib.h>
using namespace std;

void creatlist(int size);
void printList();
void insertB();
void insertE();
void insertM(int x);

struct NODE
{
    int data;
    struct NODE *next;
};
typedef struct NODE node;
node *head = (node *)malloc(sizeof(node));

int main()
{
    int listsize, pos, delpos;
    cout << "Give list size :";
    cin >> listsize;

    cout << "List is creating ---" << endl;
    creatlist(listsize);

    cout << "First Add" << endl;
    insertB();
    cout << "last add" << endl;
    insertE();
    cout << "input mid pos" << endl;
    cin >> pos;
    insertM(pos);

    cout << "Printing liist ---" << endl;
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

void insertB()
{
    node *newNode = (node *)malloc(sizeof(node));
    cout << "Input Data For 1 : ";
    cin >> newNode->data;
    newNode->next = head;
    head = newNode;
}

void insertE()
{
    node *newNode = (node *)malloc(sizeof(node));
    cout << "Input Data For last : ";
    cin >> newNode->data;
    newNode->next = NULL;
    node *temp = (node *)malloc(sizeof(node));
    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertM(int x)
{
    int pos = x;
    node *newNode = (node *)malloc(sizeof(node));
    cout << "Input Data For " << pos << " : ";
    cin >> newNode->data;
    newNode->next = NULL;
    node *p, *q;
    p = head;
    q = head->next;
    for (int i = 2; i < pos; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = newNode;
    newNode->next = q;
}