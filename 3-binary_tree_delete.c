#include "binary_trees.h"

/**
 * binary_tree_delete - deleting
 * @tree: the tree to be deleted
 *
 * Return: Nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *tmp = NULL;

	if (tree == NULL)
		return;
	if (tree != NULL && tree->left == NULL && tree->right == NULL)
	{
		tmp = tree;
		if (tree->parent != NULL)
		{
			if (tree->parent->left == tree)
				tree->parent->left = NULL;
			if (tree->parent->right == tree)
				tree->parent->right = NULL;
		}
		free(tmp);
		tmp = NULL;
	}
	else
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		binary_tree_delete(tree);
	}
}
