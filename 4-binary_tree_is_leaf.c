#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 *
 * @node: A pointer to the checked node
 * Return: 1 if node is a leaf, otherwiswe 0.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	int n = 0;

	if (node != NULL)
	{
		n = ((node->left == NULL) && (node->right == NULL) ? 1 : 0);
	}
	return (n);
}
