#include "Quicksort.h"

void quicksortelf(Nodef* head,int p)
{
    Nodef* q;
    Nodef* left = head;
    Nodef* right = head->next;

    Nodef* temp = new Nodef;

    while (left->next) {
        while (right) {
            if (smallerf((left->data), (right->data),p) == 1)
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