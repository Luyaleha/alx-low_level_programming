#include "lists.h"
/**
 * pop_listint- function that deletes the head
 * node of a listint_t linked list
 * @head: pointer to pointer to node
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int p;
if (head == NULL || *head == NULL)
{
return (0);
}
p = (*head)->n;
temp = *head;
*head = (*head)->next;
free(temp);
return (p);
}
