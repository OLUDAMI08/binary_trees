#include "binary_trees.h"

/**
 * binary_tree_node - creates a new node
 * @parent: pointer to the parent node of the node to create
 * @value: value to store in the new node
 * Return: pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	/*allocate space for the node*/

	newnode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (!newnode)
	{
		return (NULL);
	}

	/* properties of the newnode*/

	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;
	return (newnode);
}
