#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to first node
 * Return: the number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
int count = 0;
while (h)
{
printf("%d\n", h->n);
h = h->next;
count++;
}
return (count);
}
