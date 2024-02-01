#include "binary_trees.h"

/**
 * binary_tree_nodes - count number of leaves
 * @tree: the tree
 *
 * Return: number of leaves
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	if (tree->parent != NULL && (tree->left != NULL || tree->right != NULL))
		return (1);
	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
