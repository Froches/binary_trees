#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least one child
 * @tree: pointer to the root node of the tree
 * Return: 0 if NULL else number of nodes with >1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes;
	size_t right_nodes;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	left_nodes = binary_tree_nodes(tree->left);
	right_nodes = binary_tree_nodes(tree->right);

	return (left_nodes + right_nodes + 1);
}
