#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_tree_insert_right - inserts a new node in the right side
 * of the parent
 * @parent: pointer to the parent node
 * @value: the data to be added to the new node
 * Return: the pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *right_node_ref;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->right == NULL)
	{
		new_node->parent = parent;
		parent->right = new_node;
	}
	else
	{
		new_node->parent = parent;
		right_node_ref = parent->right;
		right_node_ref->parent = new_node;
		parent->right = new_node;
		new_node->right = right_node_ref;
		/* printf("Right Node ref value: %i\n", right_node_ref->n);*/
		/* printf("Right Node parent value: %i\n", right_node_ref->parent->n);*/
		/* printf("New Node ref value: %i\n", new_node->n);*/
		/* printf("New Node parent value: %i\n", new_node->parent->n);*/
		/* printf("New Node Right Node value: %i\n", new_node->right->n);*/
	}
	return (new_node);
}
