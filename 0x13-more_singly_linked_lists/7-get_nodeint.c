#include "lists.h"
/**
 * get_nodeint_at_index- function that returns the nth
 * node of a listint_t linked list
 * @head: pointer to node
 * @index: index of node
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
listint_t *temp;
temp = head;
for (i = 0; i < index; i++)
{
if (temp == NULL)
{
return (NULL);
}
temp = temp->next;
}
return (temp);
}
