#include "binary_trees.h"

/**
 * max - maximum
 * @a: first param
 * @b: second param
 *
 * Return: a or b
 */

size_t max(size_t a, size_t b)
{
	if (a >= b)
		return (a);
	return (b);
}
/**
 * binary_tree_height - the height
 * @tree: the tree
 *
 * Return: the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	return (1 + max(binary_tree_height(tree->left),
				binary_tree_height(tree->right)));
}
