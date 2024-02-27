#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 *
 * @parent: Pointer to the node to insert the left-child in
 * @value: value of the new node
 *
 * Return: Pointer to the new left-child node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node;

	left_node = binary_tree_node(parent, value);
	if (left_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		parent->left->parent = left_node;
		left_node->left = parent->left;
	}

	parent->left = new;

	return (left_node);
}
