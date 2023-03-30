#include "binary_trees.h"
/**
 * binary_tree_depth - find the depth of a node
 * @tree: pointer to the root node
 * Return: the depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	const binary_tree_t *root_ref;

	if (tree == NULL)
		return (0);
	root_ref = tree;
	while (root_ref->parent != NULL)
	{
		root_ref = root_ref->parent;
		depth++;
	}

	return (depth);
}
