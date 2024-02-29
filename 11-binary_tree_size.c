#include "binary_trees.h"

/**
 * binary_tree_size - Meausres the size of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the size
 * Return: If tree is NULL ret 0, otherwise sizoe of the node
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree != NULL)
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}
	return (size);
}
