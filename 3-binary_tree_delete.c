#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_delete - deletes a binary tree
 * @tree: input tree
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
if (tree != NULL)
{
binary_tree_delete(tree->left);
binary_tree_delete(tree->right);
free(tree);
}
}
