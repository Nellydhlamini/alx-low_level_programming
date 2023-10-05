#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
  * hash_table_create - Creates a hash table
  * @size: Size of the array
  * Return: A pointer to the newly created hash table
  */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *htable = NULL;
unsigned long int x = 0;
hash_node_t **b = NULL;

htable = malloc(sizeof(hash_table_t));
if (htable == NULL)
return (NULL);

b = malloc(sizeof(hash_node_t *) * size);
if (b == NULL)
return (NULL);

for (; x < size; ++x)
b[x] = NULL;

htable->size = size;
htable->array = b;

return (htable);
}
