#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses through a binary tree using postorder
 * traversal
 *
 * @tree: Pointer to the root node of the tree
 * @func: Func pointer to print the value of each int
 * Return: None
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
