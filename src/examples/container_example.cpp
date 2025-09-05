#include <iostream>
#include <vector>
#include <utility>

struct Container {
    int id;
    bool isActive{true};
    std::vector<Container> children;

    Container() = default;
    Container(int id_, bool active = true) : id(id_), isActive(active) {}

    // Convenience: add a child by value and return reference to it (for chaining)
    Container& addChild(Container child) {
        children.push_back(std::move(child));
        return children.back();
    }
};

// A simple visitor that "does something" with a visited node.
// Per requirements, it prints the node's id.
struct PrintIdVisitor {
    void visit(const Container& node) const {
        std::cout << node.id << "\n";
    }
};

// Depth-first (preorder) traversal that skips inactive nodes *and their subtrees*.
// If a node is inactive, neither it nor its descendants are visited.
// Tree is assumed (no cycles), so no need for a visited set.

template <typename Visitor>
void dfs_visit(const Container& node, const Visitor& visitor) {
    if (!node.isActive) return;                 // prune inactive subtree

    visitor.visit(node);                        // preorder: visit this node first

    for (const auto& child : node.children) {   // then visit active children
        dfs_visit(child, visitor);
    }
}

int main() {
    // Build an example tree:
    //           (1)
    //         /  |  \
    //       (2) (3) (4*)   <-- 4 is inactive, so it's skipped along with its subtree
    //       / \      \
    //     (5) (6*)    (7)
    //                 /
    //               (8)

    Container root{1};

    // First branch under root: 2 -> {5, 6*}
    Container& n2 = root.addChild(Container{2});
    n2.addChild(Container{5});
    n2.addChild(Container{6, /*isActive=*/false}); // inactive

    // Second branch: 3 -> {7 -> {8}}
    Container& n3 = root.addChild(Container{3});
    Container& n7 = n3.addChild(Container{7});
    n7.addChild(Container{8});

    // Third branch: 4* (inactive)
    root.addChild(Container{4, /*isActive=*/false});

    PrintIdVisitor printer;

    // Expected output (preorder, skipping inactive subtrees):
    // 1 2 5 3 7 8
    dfs_visit(root, printer);

    return 0;
}
