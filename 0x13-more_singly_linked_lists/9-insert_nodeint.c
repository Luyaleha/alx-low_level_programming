#include "lists.h"
/**
 * insert_nodeint_at_index- function that inserts a new
 * node at a given position
 * @head: pointer to pointer to node
 * @idx: index where node is to be inserted
 * @n: data of new node
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *temp, *ptr;
unsigned int i;
temp = *head;
if (head == NULL)
return (NULL);
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
if (idx == 0)
*head = new;
for (i = 0; i < idx - 1 && temp != NULL && idx != 0; i++)
{
temp = temp->next;
}
if (temp == NULL)
{
return (NULL);
}
if (idx == 0)
new->next = temp;
else
{
ptr = temp->next;
temp->next = new;
new->next = ptr;
}
return (new);
}
