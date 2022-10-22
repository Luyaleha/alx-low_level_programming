#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
*/
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *node, *tmp;
unsigned long int i;
if (!ht)
return;
if (!ht->array)
{
free(ht);
return;
}
for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
while (node)
{
tmp = node->next;
if (node->value)
free(node->value);
if (node->key)
free(node->key);
free(node);
node = tmp;
}
}
free(ht->array);
free(ht);
}
