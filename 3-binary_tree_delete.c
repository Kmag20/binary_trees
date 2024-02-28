#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - Deletes an entire binary tree
 *
 * @tree - pointer to the root node of the entire tree
 * Return: Returns nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *next_left;
	binary_tree_t *next_right;

	if (tree != NULL)
	{
		next_left = tree->left;
		next_right = tree->right;

		free(tree);
		binary_tree_delete(next_left);
		binary_tree_delete(next_right);
		return;
	}
	else
	{
		return;
	}
}
