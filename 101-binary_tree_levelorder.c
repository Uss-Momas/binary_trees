#include "binary_trees.h"

/**
 * binary_tree_height - calculates the height of a binary tree
 * @tree: the pointer to the root node of the tree to measure the height
 * Return: the size of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (!tree)
		return 0;

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height >= right_height)
		return left_height + 1;
	return right_height + 1;
}


/**
 * binary_tree_levelorder - function that uses level order to traverse
 * binary tree
 * @tree: pointer to the root node
 * @func: pointer to the function that prints the value of node
 * Return: nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t h, i;

	if (tree == NULL || func == NULL)
		return;
	h = binary_tree_height(tree);
	for (i = 0; i < h; i++)
	{
		print_level(tree, i, func);
	}
}

/**
 * print_level - prints the current level
 * @tree: pointer to the root node
 * @level: the current level
 * @func: pointer to the function that prints the node value
 * Return: nothing
 */
void print_level(const binary_tree_t *tree, size_t level, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (level == 0)
		func(tree->n);
	else
	{
		print_level(tree->left, level - 1, func);
		print_level(tree->left, level - 1, func);
	}
}
