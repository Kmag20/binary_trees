#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - Deletes an entire binary tree
 *
 * @tree - pointer to the root node of the entire tree
 * Return: Returns nothing
 */
void binary_tree_delete(binary_tree_t *tree) {
    if (tree != NULL) {
        binary_tree_t *next_left = tree->left;
        binary_tree_t *next_right = tree->right;
        free(tree);
        binary_tree_delete(next_left);
        binary_tree_delete(next_right);
        return;
    } 
    else {
        return;
    }
} 
  /*if (tree->left == NULL && tree->right == NULL) {
    free(tree);
    return;
  }

  binary_tree_delete(tree->left);
  binary_tree_delete(tree->right);
  
  free(tree);*/
  

