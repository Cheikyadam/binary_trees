#include "binary_trees.h"

/**
 * binary_trees_ancestor - Common ancestor
 * @first: first node
 * @second: scond node
 *
 * Return: First common parent
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return (NULL);
	if (first == second)
		return (first->parent->left);
	if (first->left == second || first->right == second)
		return (first->left->parent);
	if (second->left == first || second->right == first)
		return (second->left->parent);
	if (second->parent == first->parent)
		return (second->parent);
	return (binary_trees_ancestor(second->parent, first->parent));
}
