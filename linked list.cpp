#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
typedef struct node Node;

Node *head = (Node *)malloc(sizeof(Node));

void creatlist(int a)
{
    cout << "Enter Data 1 : ";
    cin >> head->data;
    head->next = NULL;
    Node *tem = (Node *)malloc(sizeof(Node));
    tem = head;
    for (int i = 2; i <= a; i++)
    {
        Node *newNode = (Node *)malloc(sizeof(Node));
        cout << "Enter Data " << i << " : ";
        cin >> newNode->data;
        newNode->next = NULL;
        tem->next = newNode;
        tem = tem->next;
    }
}
void insBegin()
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    cout << "Enter Data 1 : ";
    cin >> newNode->data;
    newNode->next = head;
    head = newNode;
}
void insEnd()
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    cout << "Enter Data for last node : ";
    cin >> newNode->data;
    newNode->next = NULL;
    Node *tem = (Node *)malloc(sizeof(Node));
    tem = head;
    while (tem->next != NULL)
    {
        tem = tem->next;
    }
    tem->next = newNode;
}
void insMid(int x)
{
    int pos = x;
    Node *newNode = (Node *)malloc(sizeof(Node));
    cout << "Enter Data for " << x << " position : ";
    cin >> newNode->data;
    Node *p = head;
    Node *q = head->next;
    for (int i = 2; i <= pos - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = newNode;
    newNode->next = q;
}
void showList()
{
    int i = 0;
    Node *tem = (Node *)malloc(sizeof(Node));
    tem = head;
    while (tem != NULL)
    {
        cout << "Data " << ++i << " : " << tem->data << endl;
        tem = tem->next;
    }
}

int main()
{
    int a, x;
    cout << "Number of list : ";
    cin >> a;
    creatlist(a);
    insBegin();
    insEnd();
    cout << "Number of position : ";
    cin >> x;
    insMid(x);
    showList();

    return 0;
}