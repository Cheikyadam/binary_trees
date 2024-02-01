#include "binary_trees.h"

/**
 * binary_tree_uncle - uncle of a node
 * @node: the node
 *
 * Return: the uncle node or NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	if (node->parent->parent == NULL)
		return (NULL);
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
