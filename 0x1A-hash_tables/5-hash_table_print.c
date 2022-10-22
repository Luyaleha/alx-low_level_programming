#include "hash_tables.h"
/**
 * hash_table_print - print hash table
 * @ht: hash table
*/
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *node;
unsigned long int i;
char *sep = "";
if (!ht || !ht->array)
return;
printf("{");
for (i = 0 ; i < ht->size; i++)
{
node = ht->array[i];
while (node)
{
printf("%s'%s': '%s'", sep, node->key, node->value);
sep = ", ";
node = node->next;
}
}
puts("}");
}
