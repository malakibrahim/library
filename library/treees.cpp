#include<stdio.h>

struct root {
	int data; // each node has a data stored in it
	struct node*left;// and apointer to the next left node
	struct node*right; // a pointer to the next right node
};

int search_bst(node*&root, int x) //to search we need to clarift the first node which isthe rot and
// the value we want to search for
{
	node*temp= root; //bA3ml temp asawi belnode amshy bi
	while (temp!=NULL){ //tool ma el tree msh fadia
	if(x > temp-> data)
	{temp = temp-> right ; //ba move the temp to thr right
} else if (x< temp-> data ){
	temp = temp-> left ;
}
return 1;
	}
	return 0;
}

int max(node*&root){ //refrence l node t root
	node*temp = root ; //b3ml temp amshy bi
	while (temp -> right !=NULL){
		temp = temp -> right ; //bfdal amshy right w a return rl data
	}
	return temp-> data ;
	
}

void insert( node *&root , int x){ //to insert  node we need refr to the root and the insert data into it
	if (root == NULL){ //lw mafish root ba add new node msh mohm left wala right
	
		node *p = new node ; //pointer byshawr 3ala el new node
		p -> data = x;
		p-> left = NULL;
		p -> right = NULL;
		root= p ;
	}
	else if(x < root->data){
		insert (root -> left , x);
		
	}
	else { insert(root -> right ,x );
	}
}

int check_iden(node *&root1 , node *&root2){
	if (root1 == NULL &&  root2 == NULL){
		return 1;
		
	}
	
	else if (root1 == NULL || root2== NULL ){ return 0;
	}
	
	else if(root1 -> data != root2-> data)
	{
		return 0;
	}
	else
	return check_iden( root1-> left , root2-> left )&& check_iden( root1-> right , root2-> right);
}


int main (){

		struct root= insert(10);
		
	
}
