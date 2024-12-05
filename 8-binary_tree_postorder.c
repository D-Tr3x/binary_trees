#include "binary_trees.h"
/**
 * binary_tree_postorder - Transverses a binary tree using post-order method
 * @tree: pointer to the root node of the tree to transverse
 * @func: pointer to function to call for each node
 *
 * Do nothing if `tree` or `func` is NULL
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;

binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
