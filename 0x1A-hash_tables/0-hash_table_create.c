#include "hash_tables.h"

/**
 * hash_table_create - creates the hash table
 * @size: size of the hash table
 * Return: hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
    // Creates a new hash_table_t
    hash_table_t* table = (hash_table_t*) malloc (sizeof(hash_table_t));
    table->size = size;
    table->arrays = (hash_node_t**) calloc (table->size, sizeof(hash_node_t*));
    for (int i=0; i<table->size; i++)
        table->arrays[i] = NULL;

    return table;

}