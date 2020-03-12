#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_node - function to create a binary tree
 * @parent: pointer of struct binary tree
 * @value: integer
 * Return: binary tree
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new_b;
new_b = malloc(sizeof(binary_tree_t));
if (new_b == NULL)
return (NULL);
new_b->parent = parent;
new_b->n = value;
return (new_b);
}
