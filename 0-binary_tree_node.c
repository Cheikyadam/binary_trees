#include "binary_trees.h"

/**
 * binary_tree_node - creating binary tree
 * @parent: the parent node
 * @value: the value
 *
 * Return: Binary tree
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);
	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
