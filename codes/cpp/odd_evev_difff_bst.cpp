 #include <bits/stdc++.h>
using namespace std;
/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};

void getOddEven(Node *root,int level, int *oddSum,int *evenSum)
{
    if(root==NULL)
        return;
    if(level%2==0)
        *evenSum += root->data;
    else
        *oddSum += root->data;
        
    getOddEven(root->left,level+1,oddSum,evenSum);
    getOddEven(root->right,level+1,oddSum,evenSum);
}

int getLevelDiff(Node *root)
{
   //Your code here
   int oddSum=0,evenSum=0;
   getOddEven(root,1,&oddSum,&evenSum);
   return oddSum- evenSum;
}

{

int getLevelDiff(Node *root);
/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
struct Node* newNode(int data)
{
  struct Node* node = (struct Node*)
                       malloc(sizeof(struct Node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return(node);
}
/* Driver program to test size function*/
int main()
{
  int t;
  struct Node *child;
  scanf("%d
", &t);
  while (t--)
  {
     map<int, Node*> m;
     int n;
     scanf("%d
",&n);
     struct Node *root = NULL;
     while (n--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        scanf("%d %d %c", &n1, &n2, &lr);
        if (m.find(n1) == m.end())
        {
           parent = newNode(n1);
           m[n1] = parent;
           if (root == NULL)
             root = parent;
        }
        else
           parent = m[n1];
        child = newNode(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }
   cout<<getLevelDiff(root);
     cout << endl;
  }
  return 0;
}

}
