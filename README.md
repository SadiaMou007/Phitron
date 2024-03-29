# C

- Snippet generate :

  1.  Generate snippet from [snippet generate](https://snippet-generator.app/?description=&tabtrigger=&snippet=%23include%3Cstdio.h%3E%0Aint+main%28%29%0A%7B%0A++++return+0%3B%0A%7D&mode=vscode)

  2.  settings - user snippet - paste snippet
  3.  Add prefix and initial point using "$0",

### <u>Range and Format specifier</u>

- int (4 byte (1 byte - 8 bit)) - %d range : -2^32 -1 -> 2^32 -1 (2^4\*8 - 1) `[10 digit: -10^9 to +10^9]`
- long long int (8 byte) - %lld range : `[20 digit: -10^18 to +10^18]`
- float (4 byte) - %f, %0.2f range : `[6 digit]`
- double (8 byte) - %lf, %0.2lf range : `[15 digit]`
- char (8 byte) - %c

### take input till EOF

```
while(scanf("%d",&num) != EOF)
```

### post Increment and Pre Increment

- In general i++ & ++i is same. Pre or Post increment matters when assign i to another variable.

```
 int i = 10;
 int a = i++ [ a-10 ,i=11 (post increment of i)]
 int a = ++i [a=11 , i=11 (pre increment of i)]
```

### max and min int

```
#include <limits.h>
...
int a= INT_MIN, b= INT_MAX
```

<hr/>  
### <u>Build in Functions</u>  
` Headerfiles --> #include<string.h> , #include<math.h> `

- array size : `sizeof(arrName) / sizeof(int/char)`
- string length: `int l= strlen(a)`
- copy string: strcpy(a,b) `copy b to a`
- compare string: `int value = strcmp(a, b)` <i>value < 0 (a<b)</i>, <i>value = 0 (a==b) </i>, <i>value > 0 (a>b)</i>
- concat string: strcat(a,b) `concat a & b to a`
- ceil(v)
- floor(v)
- round(v)
- sqrt(v)
- pow(a,b)
- abs() [not works for long long int, headerfile --> #include<stdlib.h>]

<hr/>

### Counting array algorithm:

```
1. Array input a[n]
2. initialize empty array `cnt[10]={0} (for number 0-9) || cnt[26]={0} (for char)`
3. for i=0 to n `cnt[a[i]]++`
4. print counting value according input or char order.
```

### Pattern

- take outer array > s for spaces && k for stars (initialize outside loop && inc/dec later) > break after every iteration

### Pointer

- call by value(pass value that store in another variable )
- call by reference(pass address as param to change data by dereferencing)

### Matrix

- Diagonal: all 0 except primary & secondary diagonal. Diagonal value itself can be 0.

```
primary diagonal values -> i+j = row - 1`
secondary diagonal values -> i = j
```

- Scalar: all 0 except primary & secondary diagonal. Diagonal values are equal.

```
secondary diagonal values -> i+j = row - 1`
primary diagonal values -> i = j
```

### Selection sort Algorithm

```
1. for i=0 to i<n-1
2. for j=i+1 to j<n
3. if a[i]<a[j] --> swap
```

# cpp

- stack vs heap memory(can remove/change)
- create data in dynamic memory: (stack memory store heap memory address )

```
int *a = new int
*a = 10
cout<<a<<*a //a--> memory address, *a-->10
```

## Dynamic array

- Initialize: `int *a = new int[5]` (as array work's as pointer rest will work as normal array)
- Increase size: initialize new array > copy old array value > delete old array
- Delete: `delete[] a`--> delete entire array, `delete a`--> delete first index address

## String build in functions

### Capacity

| Function          | Description                                                    |
| ----------------- | -------------------------------------------------------------- |
| \*s.size()        | returns the size of the string.                                |
| s.max_size()      | returns the maximum size that string can hold.                 |
| s.capacity()      | returns current available capacity of the string.              |
| \*s.clear()       | clear the string.                                              |
| \*s.empty()       | return true/false if the string is empty.                      |
| \*s.resize(n)     | decrease the size of the string to n.                          |
| \*s.resize(n,'X') | increase the size of the string to n and put value 'X' after n |

### Element access

| Function   | Description                                                   |
| ---------- | ------------------------------------------------------------- |
| \*s[i]     | access the ith index of the string.                           |
| s.at(i)    | access the ith index of the string.                           |
| \*s.back() | access the last element of the string.(same as s[s.size()-1]) |
| s.front()  | access the first element of the string.(same as s[0])         |

### Modifiers

| Function                | Description                                       |
| ----------------------- | ------------------------------------------------- |
| \*s+=                   | append another string.(addition)                  |
| s.append()              | append another string.                            |
| \*s.push_back()         | add character to the last of the string.          |
| \*s.pop_back()          | remove the last character of the string.          |
| s=                      | assign string.                                    |
| s.assign()              | assign string.                                    |
| \*s.erase(4)            | erase all characters after index 4.               |
| \*s.erase(4, 3)         | erase 3 characters from index 4.                  |
| \* s.replace(4,3,"abc") | replace a portion of the string.(erase + replace) |
| \* s.replace(4,0,"abc") | insert "abc" at index 4                           |
| s.insert(4,"abc")       | same as s.replace(4,0,"abc")                      |

### Iterators

| Function  | Description                                                       |
| --------- | ----------------------------------------------------------------- |
| s.begin() | pointer to the first element.                                     |
| s.end()   | pointer to the next element after the last element of the string. |

#### Example 1: string iterator

```
int main() {

    string s;
    //string :: iterator it; //can avoid using auto iteration [gnu 14+]
    cin >> s;

    for(auto it = s.begin();it < s.end(); it++)
    {
        cout<< *it <<endl;
    }
    return 0;
}
```

#### Example 2: Ignore newline for multiple input (int , getline)

```
int a;
cin >> a;
cin.ignore(); //for cpp or getchar()
string s;
getline(cin,s);
```

#### Example 3: stringstream

```
int main() {

   string s;
   getline(cin,s);
   stringstream ss(s);
   string word;

   while(ss >> word)
   {
       cout<<word<<endl;
   }

    return 0;
}
```

## Vector

- [Vector build In functions](https://docs.google.com/document/d/1-AlWED5nChiMx4iqH_E-dCTgZn2EmzpB1THvfw-L7pM/edit)

## Singely Linked list

## Doubly Linked list

- [List build In functions](https://docs.google.com/document/d/1ck7jVccsfKckkS9sB1BmE2COXRDvYOCEfIRX3Tu7SHQ/edit)

## Stack (array & doubly linked list)

- Abstract structure that works as container of array or linked list
- Not used for singly linked list as it takes 0(n) time

### Stack using stl

```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}
```

## Queue (singly & doubly linked list)

- Abstract structure that works as container of linked list
- Not used for array as it takes 0(n) time for insert/remove first element[can use circular queue]

### Queue using stl

```
#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    cout << q.size() << endl;
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}
```

## Binary Tree

#### Node class

```
class Node {
    public:
      int val;
      Node *left;
      Node *right;
    Node (int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

```

#### Usages

Observe binary search tree, decision tree, implement heap sort, compiler syntax tree making

#### Traversing Order

1.  <b>Depth wise</b>

Pre Order: `root -> left -> right`

```
void preOrder (Node * root)
{
if(root == NULL) return;
cout<<root->val<<" ";
preOrder(root->left);
preOrder(root->right);
}
```

post order: `left -> right -> root`  
in order: `left -> root -> right`

2.  <b>Level wise</b> (for take input)

### Input binary tree

- create root node
- input root to queue
-

```
while (!q.empty())
  1. take front node (p) then pop
  2. create 2 node left and right and add as (p->left) and (p -> right)
  3. push (p->left) and (p -> right) to queue

```

### Print binary tree

```
void level_order (Node * root)
{
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
      Node * f = q.front();
      q.pop();
      cout<< f->val<<" ";

      if(f->left) q.push(f->left);
      if(f->right) q.push(f->right);

    }
}
```

### Count number of node

```
int count(Node *root)
{
    if (root == NULL)
        return 0;
    int l = count(root->left);
    int r = count(root->right);
    return l + r + 1;
}
```

### Count number of leaf node

```
int count_leaf(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    else
    {
        int l = count_leaf(root->left);
        int r = count_leaf(root->right);
        return l + r;
    }
}
```

### Max height

```
int maxHeight(Node *root)
{
    if (root == NULL)
        return 0;
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    return max(l, r) + 1;
}
```

### Search node [solution](https://www.codingninjas.com/studio/problems/code-find-a-node_5682)

### Node Level [solution](https://www.codingninjas.com/studio/problems/node-level_920383?leftPanelTab=1)

- initialize queue that store pair `queue<pair<TreeNode<int> *, int>> q;`
- push root and level(1) `q.push({root, 1});`
-

```
 while (!q.empty())
    {
        pair<TreeNode<int> *, int> pr = q.front();
        TreeNode<int> *node = pr.first;
        int level = pr.second;
        q.pop();

        if (node->val == searchedValue)  return level;
        if (node->left) q.push({node->left, level + 1});
        if (node->right) q.push({node->right, level + 1});

    }
```

### Left view [solution](https://www.codingninjas.com/studio/problems/left-view-of-a-binary-tree_920519?leftPanelTab=1)

### Diameter Of Binary Tree [solution](https://www.codingninjas.com/studio/problems/diameter-of-the-binary-tree_920552?leftPanelTab=1)

- left max height + right max height

### Special Binary Tree [solution](https://www.codingninjas.com/studio/problems/special-binary-tree_920502?leftPanelTab=1)

- each node has 0 or 2 child

### Univalued Binary Tree [solution](https://leetcode.com/problems/univalued-binary-tree/submissions/)

### Pair Node and height

```
 queue<pair<Node *, int>> q;
    q.push({root, 0});
    while (!q.empty())
    {
        pair<Node *, int> pr = q.front();
        Node *node = pr.first;
        int level = pr.second;
        q.pop();

        if (level == s) v.push_back(node -> val);

        if (node->left) q.push({node->left, level + 1});
        if (node->right) q.push({node->right, level + 1});
    }
```

## Binary Search Tree(BST) (has stl - Set)

Complexity : O(height)  
Condition:

- node -> left < node
- node -> right > node
- Can't contain duplicate value (track duplicate count(frequency array) if required)

### Search

```
bool search(Node *root, int x)
{
    if (root == NULL)  return false;
    if (root->val == x) return true;
    if (x < root->val) return search(root->left, x);
    else return search(root->right, x);
}
```

### Insert

Complexity : O(height)

Traverse left/right according current root and value (less/greater) until find NULL children then Insert

```
void insert(Node *&root, int x)
{
    if (root == NULL)
    {
        root = new Node(x);
        return;
    }
    if (x < root->val)
    {
        if (root->left == NULL) root->left = new Node(x);
        else insert(root->left, x);
    }
    else
    {
        if (root->right == NULL) root->right = new Node(x);
        else insert(root->right, x);
    }
}
```

### Array to BST

```
Node *convert(int a[], int n, int l, int r)
{
    if (l > r)
        return NULL;
    int mid = (l + r) / 2;
    Node *root = new Node(a[mid]);
    Node *leftRoot = convert(a, n, l, mid - 1);
    Node *rootRight = convert(a, n, mid + 1, r);
    root->left = leftRoot;
    root->right = rootRight;
    return root;
}
```

## Heap (has stl - Priority queue)

### Perfect binary tree

All node have 2 child except child

- height : log(n)

### Complete binary tree

- Last level - 1: complete
- Last level: filled up from left

- height : log(n)

#### Array representation

- Take level order input
- Parent to child : `(2n+1) left` and `(2n+2) right`th index, where n = parent index
- Child to parent : `(n-1)/2`th index, where n = child index

#### Heap

- Complete binary tree array representation
- complexity: log(n)
- Max heap : children <= node
- Min heap : children >= node

### Insert

```
v.push_back(x);
int cur_idx = v.size() - 1;
while (cur_idx != 0)
{
    int parent_idx = (cur_idx - 1) / 2;
    if (v[parent_idx] < v[cur_idx]) swap(v[parent_idx], v[cur_idx]);
    else break;
    cur_idx = parent_idx;
}
```

[(`<` - max heap, `>` min heap)]

### Delete

- swap (root, last child)
- delete last child
- compare(until reach leaf node / (child root < root -> max heap) / (child root > root -> mean heap)) root with left and right root, swap with larger(max heap) / smaller(min heap) value

## Priority Queue (Heap stl/ heap sort)

- Complexity: `log(n)` for 1 element
- Max heap `priority_queue<int> pq`
- Min heap `priority_queue<int, vector<int>, greater<int>> pq`

```
pq.push(x); // O(logN)
pq.pop(); // O(logN)
cout << pq.top() << endl; // O(1)
```

## Map

- key (any type) value pair

## Set (BST stl)

- keep unique values in assending order

```
set<int> s;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        s.insert(x); // O(logN)
    }
```

- iteration

```
for (auto it = s.begin(); it != s.end(); it++) cout << *it << endl;

```

- search `1000` from set `s` [O(logN)]

```
s.count(1000)
```
