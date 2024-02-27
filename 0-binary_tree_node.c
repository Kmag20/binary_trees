#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - creates a singular binary tree node
 * 
 * @parent: Pointer to the created node
 * @value: value of the new node
 * 
 * Return: Pointer to the newly created node
*/
binary_tree_t* binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t* node = malloc(sizeof(binary_tree_t));
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	return node;
}
