#include "binary_trees.h"
/**
 * binary_tree_depth - Checks the depth of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Depth of tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
	{
		return (0);
	}

	while (tree != NULL)
	{
		depth++;
		tree = tree->left;
	}
	return (depth);
}
/**
 * is_perfect - Helper function to check if the tree is perfect
 * @tree: Pointer to the root node of the tree
 * @depth: depth of the tree
 * @level: level in the tree
 * Return: a check if the tree is perfect or not
 */
int is_perfect(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
	{
		return (1);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (depth == level + 1);
	}
	if ((tree->left == NULL) || (tree->right == NULL))
	{
		return (0);
	}

	return (is_perfect(tree->left, depth, level + 1)
			&& is_perfect(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - Final function to check if it's perfect or not
 * @tree: Pointer to the root node of the tree
 * Return: The final check if it's perfect or not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth = (int) binary_tree_depth(tree);

	return (is_perfect(tree, depth, 0));
}
