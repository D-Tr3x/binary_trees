#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure
 *
 * Return: size, or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t left_side, right_side;

if (tree)
{
left_side = binary_tree_size(tree->left);
right_side = binary_tree_size(tree->right);
return (1 + left_side + right_side);
}
return (0);
}
