#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - Function that adds a new node at the beginning of a list_t list.  
 * @head: Double pointer to the first node of the list. 
 * @str: String to be duplicated. 
 * Return: The address of the new element, or NULL if it failed. 
*/
list_t *add_node(list_t **head, const char *str) {
    int len = 0; 
    list_t *node = (list_t*) malloc(sizeof(list_t));
    if (node == NULL) {
        return NULL;
    } 
    while(str[len]) {
        len++; 
    }
    node->str = strdup(str); 
    if (node->str == NULL) {
        free(node);
        return NULL;
    }
    node->next = *head;
    node->len = len; 
    *head = node; 
    return node; 
}