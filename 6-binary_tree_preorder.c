#include "binary_trees.h"

/**
 * binary_tree_preorder - preorder traversal
 * @tree: the tree
 * @func: a function
 *
 * Return: Nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL)
		return;
	if (tree == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
