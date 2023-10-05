#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
  * hash_table_get - Retrieves a value associated with a key
  * @ht: The hash table to look into
  * @key: The key being searched for
  * Return: The value with the element, NULL if key couldn't be found
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *x = NULL;
unsigned long int ind = 0;

if (ht == NULL || key == NULL)
return (NULL);

ind = key_index((unsigned char *) key, ht->size);
x = ht->array[ind];

if (x == NULL)
return (NULL);

while (strcmp(key, x->key) != 0)
x = x->next;

return (x->value);
}
