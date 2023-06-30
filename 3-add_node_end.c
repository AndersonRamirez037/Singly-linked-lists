#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node_end - Function that adds a new node at the end of a list_t list. 
 * @head: Double pointer to the first node of the list. 
 * @str: String to be duplicated. 
 * Return: The address of the new element, or NULL if it failed. 
*/
list_t *add_node_end(list_t **head, const char *str) {
    int len = 0; 
    list_t *node  = (list_t*) malloc(sizeof(list_t));
    list_t *temp;
    if (node == NULL) {
        return NULL; 
    }
    while (str[len]) {
        len++; 
    }
    node->str = strdup(str);
    if (node->str == NULL) {
        free(node);
        return NULL; 
    }
    node->next = NULL; 
    if (*head == NULL) {
        *head = node; 
    } else {
        temp = *head; 
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = node; 
    }
    node->len = len; 
    return node; 
}