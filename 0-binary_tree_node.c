#include "binary_trees.h"

/*
 * binary_tree_node - create a binary tree node
 * @parent - pointer to the parent node of the node to create
 * @value - the value to put in the node
 *
 * Return: a pointer to the parent node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(*newnode));
	if (newnode == NULL)
		return (NULL);

	newnode->parent = parent;
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;

	return (newnode);
}
