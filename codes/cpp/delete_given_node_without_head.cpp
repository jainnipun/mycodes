
/* Link list node 
struct Node
{
    int data;
    Node* next;
}*/
// This function should delete node from linked list. The function
// may assume that node exists in linked list and is not last node
void deleteNode(Node *node)
{
    Node *temp = node->next;
    node->data = node->next->data;
    node->next = node->next->next;
    free(temp);
}
