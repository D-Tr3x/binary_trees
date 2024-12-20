#include "binary_trees.h"
/**
 * binary_tree_preorder - Transverses through a binary tree using pre-order
 * @tree: pointer to root node of the tree to transverse
 * @func: pointer to a function to call for each node.
 *
 * Do nothing if `tree` or `func` is NULL
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;

func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
}
