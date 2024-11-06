#include <iostream>

// Non linear: Tree, Sparse Matrix
// Tree types: Binary tree, BST, AVL Tree, Heap, B (Balanced) tree, B+ tree, B* tree, Red Black tree, Splay tree, Multiway tree {Not known yet}

namespace nonLinear
{
    namespace Tree
    {
        typedef struct TreeNode
        {
            int data;
            struct TreeNode *parent;
            struct TreeNode *right;
            struct TreeNode *left;
        } T_Node;

        class BinaryTree
        {
            private:
                T_Node *root;
                // int depth = 1; // Look into how to use this variable to measure depth of the tree
            
            public:
                BinaryTree(int data);
                
                void traversal();
                void insertion();
                void deletion();
                void searchData(); // Show value
                
        };
        class BinarySearchTree // Inherits binary tree
        {
            public:
                BinarySearchTree();
                
                void traversal();
                void insertion();
                void deletion();
                void searchData(); // Show value
        };

        class AVLTree // Inherits binary tree
        {
            public:
                AVLTree();
                
                
                bool existenceOfTree();
                void traversal();
                void height();
                void insertion();
                void deletion();
                void searchData(); // Show value
                void mergeTwoAVLTree();
        };

        class Heap
        {
            public:
                Heap(); 

                void traversal();
                void height();
                void insertion(); // Data to be filled at the left most side of the branch
                void deletion();
                void searchData(); // Show value            
        };

        class BalancedTree
        {
            public:
                BalancedTree();
                
                void traversal();
                void height();
                void insertion();
                void deletion();
                void searchData(); // Show value
        };

        class BalancedPlusTree
        {
            public:
                BalancedPlusTree();

                void traversal();
                void height();
                void insertion();
                void deletion();
                void searchData(); // Show value
        };

        class BalancedStarTree
        {
            public:
                BalancedStarTree();

                void traversal();
                void height();
                void insertion();
                void deletion();
                void searchData(); // Show value
        };

        class RedBlackTree
        {
            public:
                RedBlackTree();

                bool existenceOfTree();
                void traversal();
                void height();
                void insertion();
                void deletion();
                void searchData(); // Show value
        };

        class SplayTree
        {
            public:
                SplayTree();

                void traversal();
                void height();
                void insertion();
                void deletion();
                void searchData(); // Show value
        };

        class Trie
        {
            public:
                Trie();
                
                void traversal();
                void height();
                void insertion();
                void deletion();
                void searchData(); // Show value
        };

        class MultiWayTree
        {
            public:
                MultiWayTree();

                void traversal();
                void height();
                void insertion();
                void deletion();
                void searchData(); // Show value
        };

        class SuffixTree
        {
            public:
                SuffixTree();
                
                void traversal();
                void searchData(); // Show value
                void compressTree();
        };

        // Not taught yet
        class SegmentTree
        {};

    };

    class SparseMatrix
    {
        public:
            void multiply();
            void addition();
            void searching();
            void printAllNonZero();
    };
};