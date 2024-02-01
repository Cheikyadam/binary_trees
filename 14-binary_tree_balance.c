#include "binary_trees.h"
#include <stdio.h>

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
 * binary_tree_balance - balance factore
 * @tree: the tree
 *
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int hd, hg;

	if (tree == NULL)
		return (0);
	hd = height(tree->right);
	printf("hd ==== %d\n", hd);
	hg = height(tree->left);
	printf("hg ====== %d\n", hg);
	return (hg - hd);

}
