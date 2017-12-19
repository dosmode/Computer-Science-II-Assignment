#include <iostream>
using namespace std;


class binarySearchTree
{
private:
    class node
    {
    public:
        double data;
        node * left;
        node * right;

        node(double x)
        {
            data = x;
            left = NULL;
            right = NULL;
        }
    };

    //root of the tree
    node * root;
    //private helper methods

    //insert x into tree rooted at p
    void insert(node * &p, double x)
    {
        if( p == NULL )
        {
            p = new node(x);
        }
        else
        {
            if( x > p->data )
            {
                insert(p->right, x);
            }
            else
            {
                insert(p->left, x);
            }
        }
    }

public:
    binarySearchTree()
    {
        root = NULL;
    }

    ~binarySearchTree() {
    }

    void removeHelper(node *&p){
        if(p->left == NULL && p->right == NULL){
            delete p;
            p=NULL;
        }else if(p->right == NULL){
            node * temp = p->left;
            delete p;
            p= temp;
        }

    }

    void display(node * p){
        if(p==NULL){

        }else {
            display(p->left);
            cout<<p->data<<endl;
            display(p->right);
        }
    }

    int numItems(node * tree) {
        if (tree == NULL) {
            return 0;
        } else {
            return numItems(tree->left) + numItems(tree->right) + 1;
        }
    }

    int numLeaves(node * tree) {
        if (tree == NULL) {
            return 0;
        } if (tree->left == NULL && tree->right == NULL){
            return 1;
        } else
            return numLeaves(tree->left) + numLeaves(tree->right);
    }

    int getHeight(node * tree) {
        if (tree == NULL) {
            return 0;
        }else{
            int left = getHeight(tree->left);
            int right= getHeight(tree->right);

            if(left>right)
                return left + 1;
            else
                return right + 1;
        }
    }

    int extractMin(node *& tree){
        if(tree->left == NULL){
            node * temp = tree;
            int var = tree->data;
            tree = tree->right;
            delete temp;
            return var;
        } else
            return extractMin(tree->left);
    }
    int extractMax(node *& tree){
        if(tree->right == NULL){
            node * temp = tree;
            int var = tree->data;
            tree = tree->left;
            delete temp;
            return var;
        } else
            return extractMax(tree->right);
    }

    //A wrapper
    void insert(double x)
    {
        insert(root, x);
    }

    int numItems(){
        return numItems(root);
    }

    int numLeaves(){
        return numLeaves(root);
    }

    int getHeight(){
        return getHeight(root);
    }

    int extractMin(){
        return extractMin(root);
    }
    int extractMax(){
        return extractMax(root);
    }
    void display() {
        display(root);
    }
//    void remove(int data){
//        remove(root, data);
//    }

int fullNodes() {
    return fullNodes(root);
}

    int fullNodes (node * p) {
        if(p==NULL) {
        }else if(p->left == NULL && p->right ==NULL){
            return 0;
        }else if (p->left != NULL && p->right != NULL) {//full node
            return 1 + fullNodes(p->left) + fullNodes(p->right);
        } else if (p->left != NULL && p->right == NULL){ //go to left
            return fullNodes(p->left);
        } else if (p->left == NULL && p->right !=NULL){ //go to right
            return fullNodes(p->right);
        }
    }


};



int main(){
	binarySearchTree tree;

	tree.insert(53);
	tree.insert(18);
	tree.insert(72);
	tree.insert(32);
	tree.insert(59);
	tree.insert(12);
	tree.insert(96);
	tree.insert(23);
	tree.insert(34);
	tree.insert(51);
	tree.insert(1);

	tree.display();

	//part 1:  warmup with some basic methods
	cout << "number of items: " << tree.numItems() << endl;
	cout << "number of leaves: " << tree.numLeaves() << endl;
	cout << "height: " << tree.getHeight() << endl;
    cout << "full node"<<tree.fullNodes()<<endl;
//
//	//part 2: implement removal of smallest or largest items
//	cout << tree.extractMin() << endl; //displays -10
//	cout << tree.extractMin() << endl; //displays -3
//	cout << tree.extractMax() << endl; //displays 100
//	cout << tree.extractMax() << endl; //displays 77
//
//	tree.display(); //verify above 4 values have been removed
//
//
//	tree.insert(43);
//
//	tree.display(); //verify above 3 have been removed and insert still works.


	return 0;
}