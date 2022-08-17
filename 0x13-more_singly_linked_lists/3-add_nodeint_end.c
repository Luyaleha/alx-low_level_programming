#include "lists.h"
/**
 * add_nodeint_end- function that adds a new node
 * at the beginning of a listint_t list
 * @head: pointer to pointer to node
 * @n: integer value of struct
 * Return: address to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *ptr;
new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = NULL;
ptr = *head;
if (ptr == NULL)
{
*head = new;
return (new);
}
while (ptr->next != NULL)
{
ptr = ptr->next;
}
ptr->next = new;
return (new);
}
