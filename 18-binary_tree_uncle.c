#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return: found uncle, or NULL if there's no uncle.
 *         NULL if node is NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (!node || !node->parent || !node->parent->parent)
return (NULL);

if (node->parent->parent->left == node->parent)
return (node->parent->parent->right);
else
return (node->parent->parent->left);
}
