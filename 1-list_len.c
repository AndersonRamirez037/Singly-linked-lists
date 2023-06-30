#include <stdio.h>
#include "lists.h"
/**
 * list_len - Function that returns the number of elements in a linked list_t list. 
 * @h: Pointer to the head of the list. 
 * Return: The number of elements in the list. 
*/
size_t list_len(const list_t *h){
    int n_elements = 0;
    while (h != NULL) {
        n_elements++;
        h = h->next;
    }
    return n_elements;
}