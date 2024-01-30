#include "binary_trees.h"

/**
 * binary_tree_is_root - to check if a node is a root
 * @node: the node
 *
 * Return: 0 if not a root 1 otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
