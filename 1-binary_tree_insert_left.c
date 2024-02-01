#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that inserts a node as the left-child of another node
 * @parent: parent is a pointer to the ewpaline node of the node to create,
 * @value: is the value to put in the new node
 * Return: pointer to the created node, or NULL on failure,
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value){
	binary_tree_t *new_ndl

	if (parent == NULL)
		return (NULL);
	new_ndl = binary_tree_node(parent, value);
	if (!new_ndl)
		return (NULL);
	if (parent->left)
	{
		new_ndl->left = parent->left;
		parent->left->parent = new_ndl;
	}
	parent->left = new_ndl;
	return (new_ndl);
}
