#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds a sibling of a node
 * @node: pointer to the Node to find the siblings
 * Return: pointer to the sibling Node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	if ((node->parent->left) == node)
		sibling = node->parent->right;
	else
		sibling = node->parent->left;
	if (sibling == NULL)
		return (NULL);
	return (sibling);
}


/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: pointer to the Node to find the uncle
 * Return: pointer to the uncle Node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	uncle = binary_tree_sibling(node->parent);
	if (uncle == NULL)
		return (NULL);
	return (uncle);
}
