#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert left
 * @parent: parent node
 * @value: the value of the left node
 *
 * Return: New node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);
	node = binary_tree_node(NULL, value);
	if (node == NULL)
		return (NULL);
	if (parent->left == NULL)
	{
		parent->left = node;
		node->parent = parent;
		return (node);
	}
	node->left = parent->left;
	parent->left->parent = node;
	node->parent = parent;
	parent->left = node;
	return (node);
}
