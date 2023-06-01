#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_list - frees a list_t list.
 * @head: original linked list
 * Return: void
 */
void free_list(list_t *head)
{
list_t *tmplist;

while (head)
{
tmplist = head;
head = head->next;
free(tmplist->str);
free(tmplist);
}
free(head);
}
