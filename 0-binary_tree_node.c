#include "binary_trees.h"

 /**
 *binary_tree_node - Creates a binary tree node.
 *
 *@parent: Pointer to the parent node of the node to create.
 *@value: Value to be assigned in the new node.
 *
 *@return: Pointer to the newly created node or NULL in case of failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
