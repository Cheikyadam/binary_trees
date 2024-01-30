#include "binary_trees.h"

/**
 * binary_tree_delete - deleting
 * @tree: the tree to be deleted
 *
 * Return: Nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	if (tree != NULL && tree->left == NULL && tree->right == NULL)
	{
		free(tree);
		tree = NULL;
	}
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
}
