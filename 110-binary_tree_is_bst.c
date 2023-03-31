#include "binary_trees.h"
/**
 * binary_tree_is_bst - verifies if a tree is bst
 * @tree: pointer to the roo node
 * Return: 1 if true or 0 if false
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	if ((tree->left->n < tree->n) && (tree->right->n > tree->n))
		return (1);
	left = binary_tree_is_bst(tree);
	right = binary_tree_is_bst(tree);
	if (left == 0 || right == 0)
		return (0);
	return (1);
}
