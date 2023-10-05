#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
  * hash_table_delete - Deletes a hash table
  * @ht: The hash table to be deleted
  * Return: void
  */
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *x = NULL, *tmp = NULL;
unsigned long int b = 0;

if (ht && ht->size && ht->array)
{
for (; b < ht->size; ++b)
{
x = ht->array[b];

if (x)
{
if (x->next)
{
x = x->next;
while (x)
{
tmp = x;
x = x->next;
free(tmp->key);
free(tmp->value);
free(tmp);
}
}

x = ht->array[b];
if (x->key && x->value)
{
free(x->key);
free(x->value);
}
}

free(x);
}

free(ht->array);
free(ht);
}
}
