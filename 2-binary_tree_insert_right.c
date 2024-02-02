#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert right
 * @parent: parent node
 * @value: the value of the left node
 *
 * Return: New node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);
	node = binary_tree_node(NULL, value);
	if (node == NULL)
		return (NULL);
	if (parent->right == NULL)
	{
		parent->right = node;
		node->parent = parent;
		return (node);
	}
	node->right = parent->right;
	parent->right->parent = node;
	node->parent = parent;
	parent->right = node;
	return (node);
}
