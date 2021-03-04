#include "tree.h"

int main() {
    tree<int> tree1;
    tree1.add(12);
    tree1.cout_data();

    std::cout << '\n';
    tree1.add(12);
    tree1.add(45);
    tree1.add(7);
    tree1.add(98);
    tree1.add(45);
    tree1.cout_data();

    std::cout << '\n';
    tree1.add(555);
    tree1.add(777);
    tree1.add(888);
    tree1.add(9898);
    tree1.add(134);
    tree1.add(88);
    tree1.add(909);
    tree1.add(321);
    tree1.add(687);
    tree1.cout_data();

    return 0;
}