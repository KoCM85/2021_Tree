#ifndef TREE_H

#define TREE_H

#include <iostream>
#include <memory>

template<class type1>
class tree {

    template<class type2>
    class node {
    public:
        type2 data;

        std::unique_ptr<node> left;
        std::unique_ptr<node> right;

        node(type2 data_in) : data(data_in) {}

        void cout_data() {
            std::cout << data << ' ';

            if (left)
                left->cout_data();
            if (right)
                right->cout_data();
        }
    };

    std::unique_ptr<node<type1>> root;

public:
    tree() = default;
    tree(const tree&) = delete;
    tree(tree&&) = delete;

    tree& operator=(const tree&) = delete;
    tree& operator=(tree&&) = delete;

    void add(type1 data_in) {
        std::unique_ptr<node<type1>>* node_cur = &root;

        while (*node_cur) {
            if (data_in > (*node_cur)->data)
                node_cur = &(*node_cur)->right;
            else
                node_cur = &(*node_cur)->left;
        }

        (*node_cur).reset(new node<type1>(data_in));
    }

    void cout_data() {
        if (root) {
            root->cout_data();
        }
    }
};

#endif // TREE_H