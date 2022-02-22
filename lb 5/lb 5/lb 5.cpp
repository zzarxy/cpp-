#include <iostream>

using namespace std;

char *s;
int i, l;
bintree_node *root = NULL;

struct bintree_node
{
	bintree_node* left;

	bintree_node* right;

	char data;

    bool sym;

};

class bintree_class
{

	bintree_node* root;

public:

	bintree_class()
	{

		root = NULL;

	}

	int isempty()
	{

		return(root == NULL);

	}

	void insert_node(int item);

	void inorder_seq();

	void inorder(bintree_node*);

	void postorder_seq();

	void postorder(bintree_node*);

	void preorder_seq();

	void preorder(bintree_node*);

};

void insert_node(int item)
{

	bintree_node* p = new bintree_node;

	bintree_node* parent;

	p->data = item;

	p->left = NULL;

	p->right = NULL;

	parent = NULL;

	if (isempty())

		root = p;

	else
	{

		bintree_node* ptr;

		ptr = root;

		while (ptr != NULL) {

			parent = ptr;

			if (item > ptr->data)

				ptr = ptr->right;

			else

				ptr = ptr->left;

		}

		if (item<parent->data)

			parent->left = p;

		else

			parent->right = p;

	}

}

bintree_node *buildtree(bintree_node* r)
{
    int c = 0;
    bintree_node* temp, * b;
    char* num = new char[250];
    while (s[i] != ')') {
        if (i >= l) {
            return NULL;
        }
        switch (s[i]) {
        case '+':
        case '-':
            if (c == 0 && s[i - 1] != ')') {
                return NULL;
            }
            temp = r;
            r = new bintree_node();
            r->sym = true;
            r->data = s[i];
            r->right = NULL;
            if (s[i - 1] != ')') {
                if ((temp = insert_node(temp, num, c)) != NULL) {
                    r->left = temp;
                    c = 0;
                }
                else {
                    return NULL;
                }
            }
            else {
                r->left = temp;
            }
            break;
        case '*':
        case '/':
            if (c == 0 && s[i - 1] != ')') {
                return NULL;
            }
            if (s[i - 1] != ')' && r != NULL) {
                temp = new bintree_node();
                temp->sym = true;
                temp->data = s[i];
                temp->left = NULL;
                temp->right = NULL;
                if ((temp->left = add(temp->left, num, c)) != NULL) {
                    b = r;
                    while (b->right != NULL) {
                        b = b->right;
                    }
                    b->right = temp;
                    c = 0;
                }
            }
            else {
                temp = r;
                r = new bintree_node();
                r->sym = true;
                r->data = s[i];
                r->right = NULL;
                if (temp == NULL) {
                    if ((temp = add(temp, num, c)) != NULL) {
                        r->left = temp;
                        c = 0;
                    }
                    else {
                        return NULL;
                    }
                }
                else {
                    r->left = temp;
                }
            }
            break;
        case '(':
            i++;
            if (r == NULL) {
                if ((r = buildtree(r)) == NULL) {
                    return NULL;
                }
            }
            else {
                if ((r->right = buildtree(NULL)) == NULL) {
                    return NULL;
                }
            }
            break;
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case '.':
            num[c++] = s[i];
            break;
        case ' ':
            break;
        default:
            return NULL;
        }
        i++;
    }
    if (c > 0) {
        r = add(r, num, c);
        c = 0;
    }

    return r;
}

void bintree_class::inorder_seq()
{

	inorder(root);

}

void bintree_class::inorder(bintree_node* ptr)
{

	if (ptr != NULL)
	{

		inorder(ptr->left);

		cout << " " << ptr->data << " ";

		inorder(ptr->right);

	}

}

void bintree_class::postorder_seq()
{

	postorder(root);

}

void bintree_class::postorder(bintree_node* ptr)
{

	if (ptr != NULL) {

		postorder(ptr->left);

		postorder(ptr->right);

		cout << " " << ptr->data << " ";

	}

}

void bintree_class::preorder_seq()
{

	preorder(root);

}

void bintree_class::preorder(bintree_node* ptr)
{

	if (ptr != NULL) {

		cout << " " << ptr->data << " ";

		preorder(ptr->left);

		preorder(ptr->right);

	}

}

int main()
{

	bintree_class bintree;

	bintree.insert_node('1');

	bintree.insert_node('+');

	bintree.insert_node(3);

	bintree.insert_node(4);

	bintree.insert_node(5);

	bintree.insert_node(6);

	bintree.insert_node(7);

	cout << "Inorder traversal:" << endl;

	bintree.inorder_seq();

	cout << endl << "Postorder traversal:" << endl;

	bintree.postorder_seq();

	cout << endl << "Preorder traversal:" << endl;

	bintree.preorder_seq();

}

