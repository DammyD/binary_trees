#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node
 * @tree: The node to measure the depth
 * Return: The depth of the tree.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	binary_tree_t *node = NULL;

	if (tree != NULL)
	{
		node = tree->parent;
		while (node != NULL)
		{
			depth++;
			node = node->parent;
		}
	}
	return (depth);
}
