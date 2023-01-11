#include "hash_tables.h"

/**
 * create_node - creates and adds a new node to the hash table
 * @ht: hash table to add node to
 * @key: the key; cannot be an empty string
 * @value: value to be inserted
 * @idx: index to add the node to
 *
 * Return: 1 if successul, 0 otherwise
*/

int create_node(hash_table_t* ht, char* key, char* value, unsigned long int idx) {

    hash_table_t *node = NULL;
    char *dup_key;
    char *dup_value;

    node = malloc (sizeof(hash_node_t));

    if (!node)
        return (0);

    dup_key = strdup(key);
    if (!dup_key)
    {
        free(node);
        return (0);
    }

    dup_value = strdup(value);
    if (!dup_value)
    {
        free(dup_key);
        free(node);
        return (0);
    }

    node->key = dup_key;
    node->value = dup_value;

    if ((ht->array)[idx] == NULL)
		node->next = NULL;
	else
		node->next = (ht->array)[idx];
	(ht->array)[idx] = node;

	return (1);
    
}

/**
 *
 * hash_table_set - inserts into the hash table
 * @ht: hash table to insert into
 * @key: key
 * @value: value to be inserted or updated
 *
 * Return: 1 if successul, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int idx;
	hash_node_t *node = NULL;
	char *v;

	if (!ht || !(ht->array) || !key || strlen(key) == 0 || !value)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	node = (ht->array)[idx];
	while (node && (strcmp(key, node->key) != 0))
		node = node->next;
	if (node != NULL)
	{
		v = strdup(value);
		if (!v)
			return (0);
		if (node->value)
			free(node->value);
		node->value = v;
		return (1);
	}

	return (create_node(ht, key, value, idx));
}