#ifndef INCLUDED_Quicksort_H
#define INCLUDED_Quicksort_H
#include "List.h"
#include "Vectorfunctions.h"
#include "Figurefunctions.h"

template<typename T>
void quicksortel(Node<T>* head)
{
    Node<T>* p;
    Node<T>* left = head;
    Node<T>* right = head->next;

    Node<T>* temp = new Node<T>;

    while (left->next) {
        while (right) {
            if ((left->data) < (right->data)) {
                temp->data = left->data;
                left->data = right->data;
                right->data = temp->data;
            }
            right = right->next;
        }
        left = left->next;
        right = left->next;
    }

}
template<typename T>
void quicksortelvec(Nodev<T>* head)
{
    Nodev<T>* p;
    Nodev<T>* left = head;
    Nodev<T>* right = head->next;

    Nodev<T>* temp = new Nodev<T>;

    while (left->next) {
        while (right) {
            if (smaller((left->data), (right->data)) == 1)
            {
                temp->data = left->data;
                left->data = right->data;
                right->data = temp->data;
            }
            right = right->next;
        }
        left = left->next;
        right = left->next;
    }

}

void quicksortelf(Nodef* head,int p);

#endif
