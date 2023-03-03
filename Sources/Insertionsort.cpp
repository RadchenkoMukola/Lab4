#include"Insertionsort.h"

void sortedInsertf(struct Nodef** head_ref, Nodef* new_node,int p)
{
    Nodef* current;
    if (*head_ref == NULL || (biggerf((*head_ref)->data, new_node->data,p) == 1 || arequalf((*head_ref)->data, new_node->data, p) == 1))
    {
        new_node->next = *head_ref;
        *head_ref = new_node;
    }
    else
    {
        current = *head_ref;
        while (current->next != NULL &&
            smallerf(current->next->data, new_node->data, p) == 1)
        {
            current = current->next;
        }
        new_node->next = current->next;
        current->next = new_node;
    }
}

void insertionsortelf(struct Nodef** head_ref,int p)
{
    struct Nodef* sorted = NULL;
    struct Nodef* current = *head_ref;
    while (current != NULL)
    {
        struct Nodef* next = current->next;
        sortedInsertf(&sorted, current,p);
        current = next;
    }

    *head_ref = sorted;
}