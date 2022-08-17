#include "lists.h"
/**
 * listint_len- function that returns the number
 * of elements in a linked listint_t list
 * @h: pointer to node
 * Return: number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
const listint_t *temp;
int printed = 0;
temp = h;
while (temp != NULL)
{
printed += 1;
temp = temp->next;
}
return (printed);
}
