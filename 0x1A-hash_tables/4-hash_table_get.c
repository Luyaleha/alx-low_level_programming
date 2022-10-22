#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 * Return: value associated with the key on success
 * or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *node;
unsigned long int index;
if (!ht || !key || strlen(key) == 0)
return (NULL);
index = key_index((const unsigned char *)key, ht->size);
node = ht->array[index];
while (node && strcmp(node->key, key) != 0)
node = node->next;
if (node == NULL)
return (NULL);
return (node->value);
}
