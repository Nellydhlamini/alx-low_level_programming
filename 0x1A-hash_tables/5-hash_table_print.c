#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
  * hash_table_print - Prints a hash table
  * @ht: The hash table to prints
  * Return: void
  */
void hash_table_print(const hash_table_t *ht)
{
short p = 0;
hash_node_t *a = NULL;
unsigned long int x = 0;

if (ht == NULL)
return;

printf("{");

for (; x < ht->size; ++x)
{
a = ht->array[x];

while (a)
{
if (p == 1)
printf(", ");

p = 1;
printf("'%s': '%s'", (char *) a->key,
(char *) a->value);

a = a->next;
}
}

printf("}\n");
}
