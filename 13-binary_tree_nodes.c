#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Return: number of nodes, or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t nodes = 0;

if (tree)
{
nodes += (tree->left || tree->right);
nodes += binary_tree_nodes(tree->left);
nodes += binary_tree_nodes(tree->right);
}

return (nodes);
}
