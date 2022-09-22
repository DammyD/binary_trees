#include "binary_trees.h"
/**
 * binary_tree_postorder - Performs a post-order traversal on a binary tree
 * @tree: A pointer to the root node
 * @func: A function to call for each node.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree != NULL) && (func != NULL))
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}

