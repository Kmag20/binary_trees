#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 *
 * @tree: Pointer to the root node of the tree
 * Return: 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves;

	leaves = 0;
	if (tree == NULL)
		return (leaves);
	if (tree->left == NULL && tree->right == NULL)
		leaves += 1;
		return (leaves);
	else
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
