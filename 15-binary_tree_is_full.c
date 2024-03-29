#include "binary_trees.h"

/**
 * binary_tree_is_full - is full or not
 * @tree: the tree
 *
 * Return: 0 if not 1 otherelse
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
