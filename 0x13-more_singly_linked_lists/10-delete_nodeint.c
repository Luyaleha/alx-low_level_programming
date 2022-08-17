#include "lists.h"
/**
 * delete_nodeint_at_index- function that deletes the node
 * at index index of a listint_t linked list
 * @head: pointer to pointer to linked list
 * @index: index of node to be deleted
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *temp, *ptr;
temp = *head;
if (*head == NULL || head == NULL)
return (-1);
for (i = 0; i < index - 1 && index != 0 && temp != NULL; i++)
{
temp = temp->next;
}
if (temp == NULL)
return (-1);
if (index == 0)
{
ptr = temp->next;
free(temp);
*head = ptr;
}
else
{
if (temp->next == NULL)
ptr = temp->next;
else
ptr = temp->next->next;
free(temp->next);
temp->next = ptr;
}
return (1);
}
