#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Tree Node Template
template <class ItemType>
struct TreeNode {
    ItemType info;
    TreeNode<ItemType>* left;
    TreeNode<ItemType>* right;
};

// Binary Search Tree Template Class
template <class ItemType>
class TreeType {
public:
    TreeType();
    ~TreeType();
    void InsertItem(ItemType item);
    void PrintTree(ofstream& outFile);

private:
    TreeNode<ItemType>* root;
    void InsertHelper(TreeNode<ItemType>*& ptr, ItemType item);
    void PrintHelper(TreeNode<ItemType>* ptr, ofstream& outFile);
    void DestroyHelper(TreeNode<ItemType>* ptr);
};

// Constructor
template <class ItemType>
TreeType<ItemType>::TreeType() {
    root = nullptr;
}

// Destructor
template <class ItemType>
TreeType<ItemType>::~TreeType() {
    DestroyHelper(root);
}

// Insert Public Method
template <class ItemType>
void TreeType<ItemType>::InsertItem(ItemType item) {
    InsertHelper(root, item);
}

// Insert Helper
template <class ItemType>
void TreeType<ItemType>::InsertHelper(TreeNode<ItemType>*& ptr, ItemType item) {
    if (ptr == nullptr) {
        ptr = new TreeNode<ItemType>;
        ptr->info = item;
        ptr->left = nullptr;
        ptr->right = nullptr;
    }
    else if (item < ptr->info) {
        InsertHelper(ptr->left, item);
    }
    else {
        InsertHelper(ptr->right, item);
    }
}

// Print Tree Public Method
template <class ItemType>
void TreeType<ItemType>::PrintTree(ofstream& outFile) {
    PrintHelper(root, outFile);
}

// Print Helper (Inorder Traversal)
template <class ItemType>
void TreeType<ItemType>::PrintHelper(TreeNode<ItemType>* ptr, ofstream& outFile) {
    if (ptr != nullptr) {
        PrintHelper(ptr->left, outFile);
        outFile << ptr->info << endl;
        PrintHelper(ptr->right, outFile);
    }
}

// Destroy Helper (Destructor)
template <class ItemType>
void TreeType<ItemType>::DestroyHelper(TreeNode<ItemType>* ptr) {
    if (ptr != nullptr) {
        DestroyHelper(ptr->left);
        DestroyHelper(ptr->right);
        delete ptr;
    }
}

// ----------------- MAIN FUNCTION TO USE IT -----------------
int main() {
    TreeType<string> tree;
    string arr[] = { "banana", "apple", "cherry", "date", "fig", "elderberry" };
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
        tree.InsertItem(arr[i]);
    }

    ofstream out("sorted_strings.txt");
    if (out.is_open()) {
        tree.PrintTree(out);
        out.close();
        cout << "Strings sorted and written to sorted_strings.txt\n";
    }
    else {
        cerr << "Unable to open output file.\n";
    }

    return 0;
}
