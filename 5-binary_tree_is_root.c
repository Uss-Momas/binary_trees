#include "binary_trees.h"

/**
 * binary_tree_is_root - verifies if a node is root or not
 * @node: pointer to the node to be verified
 * Return: 1 if it's root, or 0 if not
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
