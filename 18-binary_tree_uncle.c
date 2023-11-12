#include "binary_trees.h"

/**
 * binary_tree_sibling - Checks if binary tree nodes are siblings
 * @node: node in binary tree
 * Return: the sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	else
	{
		return (node->parent->left);
	}
}

/**
 * binary_tree_uncle - Checks for the uncle of a node
 * @node: Node in the binary tree
 * Return: The uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	return (binary_tree_sibling(node->parent));
}
