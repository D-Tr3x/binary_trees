#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: balance factor, or NULL if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int left_height = 0, right_height = 0;

if (tree == NULL)
return (0);

if (tree->left != NULL)
left_height = 1 + binary_tree_height(tree->left);
if (tree->right != NULL)
right_height = 1 + binary_tree_height(tree->right);

return (left_height - right_height);
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
