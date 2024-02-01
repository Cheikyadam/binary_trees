#include "binary_trees.h"

/**
 * max - maximum
 * @a: first param
 * @b: second param
 *
 * Return: a or b
 */

int max(int a, int b)
{
	if (a >= b)
		return (a);
	return (b);
}
/**
 * height - the height
 * @tree: the tree
 *
 * Return: the height
 */

int height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (1 + max(height(tree->left),
				height(tree->right)));
}
/**
 * size - size of a tree
 * @tree: the tree
 *
 * Return: the size
 */

int size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (1 + size(tree->left) + size(tree->right));
}

/**
 * binary_tree_is_perfect - is full or not
 * @tree: the tree
 *
 * Return: 0 if not 1 otherelse
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h, s;

	if (tree == NULL)
		return (0);
	h = height(tree);
	s = size(tree);
	if (s == (((1 << h) - 1)))
		return (1);
	return (0);
}
