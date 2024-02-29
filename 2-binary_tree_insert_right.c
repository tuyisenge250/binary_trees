#include "binary_trees.h"

/*
 * binary_tree_insert_right - function to insert new node on right side
 * @parent: pointer to store node
 * @value: value of new node created
 * Return : null if is Null - node in right side
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value){
	binary_tree_t *new;

	if (parent == NULL)
		return NULL;
	

	new = binary_tree_node(parent, value);

	if(new == NULL)
		return NULL;
	if(parent->right != NULL){
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return(new);
}
