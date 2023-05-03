#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: a pointer to the newly created hash table
 *         or NULL if something went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *ht = malloc(sizeof(hash_table_t));

    if (ht == NULL)
        return NULL;

    ht->array = calloc(size, sizeof(hash_node_t *));
    if (ht->array == NULL) {
        free(ht);
        return NULL;
    }

    ht->size = size;

    return ht;
}
