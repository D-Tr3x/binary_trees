#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count `leaves` from
 *
 * Return: number of leaves, or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t leaves = 0;

if (tree)
{
leaves += (!tree->left && !tree->right);
leaves += binary_tree_leaves(tree->left);
leaves += binary_tree_leaves(tree->right);
}

return (leaves);
}
