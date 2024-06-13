
#include <iostream>
#include <string>
using namespace std;

class Node 
{
public:
    string info;
    Node* leftchild;
    Node* rightchild;

    Node(string i, Node* l, Node* r)
    {
        info = i;
        leftchild = l;
        rightchild = r;
    }
}

class BinaryTrees
{
public:
    Node* ROOT;
    BinaryTrees()
    {
        ROOT = nullptr;
    }
    void insert(string element)
    {
        Node*
    }
};

int main()
{
    
}
