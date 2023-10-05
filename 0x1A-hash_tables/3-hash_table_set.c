#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
  * hash_table_set - Adds an element to the hash table
  * @ht: The hash table to add or update the key/value to
  * @key: The key of a value
  * @value: The value associated with the key
  * Return: 1 if it succeeded, 0 if otherwise
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

hash_node_t *element = NULL, *new = NULL;
unsigned long int index = 0;

if (ht == NULL || key == NULL || (strcmp(key, "") == 0))
return (0);

index = key_index((unsigned char *) key, ht->size);
element = ht->array[index];

if (element && strcmp(key, element->key) == 0)
{
free(element->value);
element->value = strdup(value);
return (1);
}

new = malloc(sizeof(hash_node_t));
if (new == NULL)
return (0);

new->key = strdup(key);
new->value = strdup(value);
new->next = ht->array[index];
ht->array[index] = new;
return (1);
}
