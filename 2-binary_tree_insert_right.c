#include "binary_trees.h"
/**
 * binary_tree_insert_right - new node as the right child of the binry tree
 *
 * @parent: ptr to new node of right child
 * @value: val for nn
 *
 * Description: parent with rn child replaced by new n and placed as rmc of nn
 *
 * Return: ptr to the node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = parent->right;
	parent->right = new;
	if (new->right)
		new->right->parent = new;
	return (new);
}
