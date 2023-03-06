#ifndef INCLUDED_Functions_H
#define INCLUDED_Functions_H

#include "List.h"
#include "Triangle.h"
#include "Circle.h"
#include "Parallelogram.h"
#include "Pkutnuk.h"

using namespace std;

template<typename T>
Node<T>* Head(int n)
{
    Node<T>* p = NULL; Node<T>* q = NULL;
    for (int i = 0; i < n; i++)
    {
        T x;
        cin >> x;
        p = new Node<T>;
        p->data = x;
        p->next = q;
        q = p;
    }
    return p;
}

template<typename T>
void Npush_back(struct Node<T>** head_ref, T new_data)
{
    struct Node<T>* new_node
        = (struct Node<T>*)malloc(sizeof(struct Node<T>));

    new_node->data = new_data;
    new_node->next = (*head_ref);

    (*head_ref) = new_node;
}

template<typename T>
void Npush_backv(struct Nodev<T>** head_ref, vector<T> new_data)
{
    
    Nodev<T>* new_node = new Nodev<T>;
    new_node->data = new_data;
    new_node->next = (*head_ref);

    (*head_ref) = new_node;
}

template<typename T>
Nodev<T>* Headv(int n)
{
    Nodev<T>* p = NULL; Nodev<T>* q = NULL;
    int m;
    for (int i = 0; i < n; i++)
    {
        cout << "enter size of new vector-";
        cin >> m;
        cout << endl;
        vector<T> A(m);
        vector<T> B(m);
        cout << "enter elements of vector" << endl;
        for (int j = 0; j < m; j++)
        {
            T x;
            cin >> x;
            A[j] = x;
            cout << "added" << endl;
        }
        cout << "vector added" << endl;
        p = new Nodev<T>;
        p->data = A;
        p->next = q;
        q = p;
        A = B;
    }
    return p;
}

Nodef* Headf(int n);

Nodef* reversef(Nodef* list);

void printflist(Nodef* A);

void Npush_backf(struct Nodef** head_ref, Figure* new_data);




template<typename T>
void printvlist(Nodev<T>* root)
{
    while (root)
    {
        vector<T> A;
        A = root->data;
        cout << "(";
        for (int i = 0; i < A.size(); i++)
        {
            if (i + 1 == A.size())
            {
                cout << A[i] << ")";
            }
            else
                cout << A[i] << ",";
        }
        cout << endl;
        root = root->next;
    }
}
template<typename T>
void printlist(Node<T>* root)
{
    while (root)
    {
        cout << root->data << " ";
        root = root->next;
    }
}
template<typename T>
void del(Node<T>* head)
{
    Node<T>* p;
    while (head)
    {
        p = head;
        head = head->next;
        delete p;
    }
}
template<typename T>
int maxel(Node<T>* head)
{
    Node<T>* p = head;
    int x = -100000;
    while (p)
    {
        if (p->data > x)
        {
            x = p->data;
        }
        p = p->next;
    }
    return x;
}
template<typename T>
int minel(Node<T>* head)
{
    Node<T>* p = head;
    int x = 1000000;
    while (p)
    {
        if (p->data < x)
        {
            x = p->data;
        }
        p = p->next;
    }
    return x;
}
template<typename T>
Node<T>* reverse(Node<T>* list)
{
    Node<T>* reversed_list = NULL;

    for (Node<T>* node = list, *next_node; node != NULL; node = next_node)
    {
        next_node = node->next;
        node->next = reversed_list;
        reversed_list = node;
    }

    return reversed_list;
}
template<typename T>
Nodev<T>* reversev(Nodev<T>* list)
{
    Nodev<T>* reversed_list = NULL;

    for (Nodev<T>* node = list, *next_node; node != NULL; node = next_node)
    {
        next_node = node->next;
        node->next = reversed_list;
        reversed_list = node;
    }

    return reversed_list;
}


#endif
