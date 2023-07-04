#include <stdlib.h>
#include "lists.h"
/**
 * free_list - Function that frees a list_t list. 
 * @head: Pointer to the first node of the list.
 * Return: Nothing. 
*/
void free_list(list_t *head) {
    list_t *actual;
    while (head != NULL) {
        actual = head;
        head = head->next;
        free(actual->str);
        free(actual);
    }
}