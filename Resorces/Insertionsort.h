#ifndef INCLUDED_Insertionsort_H
#define INCLUDED_Insertionsort_H

#include "List.h"
#include "Vectorfunctions.h"
#include "Figurefunctions.h"
template<typename T>
void sortedInsert(struct Node<T>** head_ref, Node<T>* new_node)
{
    Node<T>* current;
    if (*head_ref == NULL || (*head_ref)->data >= new_node->data)
    {
        new_node->next = *head_ref;
        *head_ref = new_node;
    }
    else
    {
        current = *head_ref;
        while (current->next != NULL &&
            current->next->data < new_node->data)
        {
            current = current->next;
        }
        new_node->next = current->next;
        current->next = new_node;
    }
}
template<typename T>
void insertionsortel(struct Node<T>** head_ref)
{
    struct Node<T>* sorted = NULL;
    struct Node<T>* current = *head_ref;
    while (current != NULL)
    {
        struct Node<T>* next = current->next;
        sortedInsert(&sorted, current);
        current = next;
    }

    *head_ref = sorted;
}

template<typename T>
void sortedInsertvec(struct Nodev<T>** head_ref, Nodev<T>* new_node)
{
    Nodev<T>* current;
    if (*head_ref == NULL || (bigger((*head_ref)->data, new_node->data) == 1 || arequal((*head_ref)->data, new_node->data) == 1))
    {
        new_node->next = *head_ref;
        *head_ref = new_node;
    }
    else
    {
        current = *head_ref;
        while (current->next != NULL &&
            smaller(current->next->data, new_node->data) == 1)
        {
            current = current->next;
        }
        new_node->next = current->next;
        current->next = new_node;
    }
}
template<typename T>
void insertionsortelvec(struct Nodev<T>** head_ref)
{
    struct Nodev<T>* sorted = NULL;
    struct Nodev<T>* current = *head_ref;
    while (current != NULL)
    {
        struct Nodev<T>* next = current->next;
        sortedInsertvec(&sorted, current);
        current = next;
    }

    *head_ref = sorted;
}

void sortedInsertf(struct Nodef** head_ref, Nodef* new_node,int p);

void insertionsortelf(struct Nodef** head_ref,int p);
#endif