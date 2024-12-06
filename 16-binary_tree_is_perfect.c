#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if perfect, otherwise 0 if tree is NULL or not perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t height, nodes, is_perfect;

if (tree == NULL)
return (0);

height = binary_tree_height(tree);
nodes = binary_tree_size(tree);
is_perfect = (1 << (height + 1)) - 1;

if (nodes == is_perfect)
return (1);

return (0);
}


/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: Height of the binary tree, or 0 if `tree` is `NULL`
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height = 0, right_height = 0;

if (tree == NULL)
return (0);

if (tree->left)
left_height = 1 + binary_tree_height(tree->left);
if (tree->right)
right_height = 1 + binary_tree_height(tree->right);

if (left_height > right_height)
return (left_height);
else
return (right_height);
}


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
