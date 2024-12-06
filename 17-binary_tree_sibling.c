#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: pointer to the node to find the sibling
 *
 * Return: found sibling, or NULL if node has no sibling.
 *         NULL if node or parent is NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (!node || !node->parent)
return (NULL);

if (node->parent->left == node)
return (node->parent->right);
else
return (node->parent->left);
}
