#include "lists.h"

/**
* add_nodeint - adding a new node at the beginning of the function
* of a linked list or function
* @head: head of a list or function
* @n: n element.
*
* Return: address of the new element. NUll if it failed.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *old_dav;

old_dav = malloc(sizeof(listint_t));

if (old_dav == NULL)
return (NULL);

old_dav->n = n;
old_dav->next = *head;
*head = old_dav;

return (*head);
}
