#include "binary_trees.h"

/**
 * binary_tree_depth - depth of a node
 * @tree: the node
 *
 * Return: depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);
	return (1 + binary_tree_depth(tree->parent));
}
