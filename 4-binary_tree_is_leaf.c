#include "binary_trees.h"
/**
 * binary_tree_is_leaf - if a node is a leaf, means the node
 * does not have any child
 * @node: node to study
 * Return: 1 if it's leaf or 0 if it's not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
