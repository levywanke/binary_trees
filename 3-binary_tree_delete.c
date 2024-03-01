#include "binary_trees.h"
/**
 * binary_tree_delete -remove the bst
 * @tree: ptr to root of bst
 * Description: none if empty
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
