/* Node structure  used in the program

struct Node{
    int data;
    struct Node * next;
    struct Node * bottom;

    Node(int x){
        data = x;
        next = NULL;
        bottom = NULL;
    }

};
*/

class Solution {
public:
    Node* merge(Node* a, Node* b) {
        if (a == NULL) return b;
        if (b == NULL) return a;

        Node* result;

        if (a->data < b->data) {
            result = a;
            result->bottom = merge(a->bottom, b);
        } else {
            result = b;
            result->bottom = merge(a, b->bottom);
        }

        result->next = NULL;   // flattened list uses only bottom
        return result;
    }

    Node* flatten(Node* root) {
        if (root == NULL || root->next == NULL)
            return root;

        // flatten the remaining list
        root->next = flatten(root->next);

        // merge current list with flattened next list
        root = merge(root, root->next);

        return root;
    }
};