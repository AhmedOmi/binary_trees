#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_right - function to insert in the right of the binary tree
 * @parent: pointer of binary_tree
 * @value: integer
 * Return: binary_tree_t
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new_b;
new_b = malloc(sizeof(binary_tree_t));
if ((new_b == NULL) || (parent == NULL))
return (NULL);
new_b->parent = parent;
new_b->n = value;
if (parent->right != NULL)
parent->right->parent = new_b;
new_b->left = NULL;
new_b->right = parent->right;
parent->right = new_b;
return (new_b);
}
