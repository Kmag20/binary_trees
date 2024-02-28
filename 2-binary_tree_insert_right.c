#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 *
 * @parent: Pointer to the node to insert the left-child in
 * @value: value of the new node
 *
 * Return: Pointer to the new left-child node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node;

	right_node = binary_tree_node(parent, value);

	if (parent->right != NULL)
	{
		parent->right->parent = right_node;
		right_node->right = parent->right;
	}

	parent->right = right_node;

	return (right_node);
}
