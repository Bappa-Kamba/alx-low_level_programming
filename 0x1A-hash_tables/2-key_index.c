#include "hash_tables.h"

/**
 *
 * key_index - function to get the index of the key
 * @key: key
 * @size: size of the hash table array
 *
 * Return: index of the key
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int idx;

    if (size == 0)
        return (0);
    
    idx = hash_djb2(key);

    return (idx % size);
}