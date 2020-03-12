#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_left - function to insert in the left of the binary tree
 * @parent: pointer of binary_tree
 * @value: integer
 * Return: binary_tree_t
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new_b;
new_b = malloc(sizeof(binary_tree_t));
if (new_b == NULL)
return (NULL);
if (parent == NULL)
return (NULL);
new_b->parent = parent;
new_b->n = value;
if (parent->left != NULL)
parent->left->parent = new_b;
new_b->right = NULL;
new_b->left = parent->left;
parent->left = new_b;
return (new_b);
}
