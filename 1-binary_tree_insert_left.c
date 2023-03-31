#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_tree_insert_left - inserts node in the left of the parent
 * @parent: pointer to the node to insert the left child
 * @value: the data to insert to the node
 * Return: the pointer to the new left child node
 *
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *left_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL || parent == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->left == NULL)
	{
		parent->left = new_node;
		new_node->parent = parent;
	}
	else
	{
		new_node->parent = parent;
		left_node = parent->left;
		left_node->parent = new_node;
		parent->left = new_node;
		new_node->left = left_node;
		/* printf("Left node save value: %i\n", left_node->n);*/
		/* printf("Left node parent value: %i\n", left_node->parent->n);*/
		/* printf("New Node value: %i\n", new_node->n);*/
		/* printf("New Node parent value: %i\n", new_node->parent->n);*/
	}
	return (new_node);
}
