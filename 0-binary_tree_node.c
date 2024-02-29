#include "binary_trees.h"

/*
 * binary_tree_node - pointer funtion to parent and root binary tree
 * @parent: A pointer to the parent of the node.
 * @value: store value of new node
 * Return: if it fails - NULL else _ a pointer to new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));

	if(new == NULL)
		return NULL;

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
