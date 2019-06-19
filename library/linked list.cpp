#include <stdio.h>


struct node { //fahmna el code y3ni eh node
	int data; //kol node gowaha data
	node *next; / w pointer yshawr 3aleha
};


void add_to_start(struct node*& head ,int x){ //mhataga a5od mluser dataw pointer
	node *p= new node; //samena el node p w olna enha new
	p->data= x; //el data bt3t el node el esmaha p
	p->next= head ; //elpointer elhaysahawr 3alaelp esmo head
	head = p ; //wel head hayshawy 3ala awl node 3shan ba add to start
	
	
}

void add_to_end (struct node*&head , int x){
	node *p = new node;
	p->data=x;
	p->next= null;

 if (head == NULL){ //lw already mafish haga fhead howa howa tail
 	head = p; //fhanswiha b p 3adi
 }
 else {
 	node *temp =head; //lw la2  han3ml temp 3shan we dont want to loose track
 }
 
 while (temp->next !=NULL){ //hanwsal  a5r node
 	temp= temp->next;}
 	temp->next=p; //nsawi bl p el hia el node bt3tna
 }

void print_all_elements( struct *& head ){

	node *& temp = head;
	while(temp != NULL){
		printf("%d", temp->data );
		temp = temp->next;
	}
}

double print_av(struct *& head){
	node *&temp = head;
	int counter= 0 ;
	int sum= 0;
	while ( temp->next != NULL){
		counter++ ;
		sum +=temp->data;
	}
	return sum/counter ;
	
}

void print_max( struct node*&head){
	
 int max= 0;
 node *&temp = head;
 
 int m= temp->data;
 while (temp != NULL){
 	if (m > temp->data){
 		m= temp->data;
 		temp=temp->next;
	 }
 }
 return m;
}

int search_Nonrec(struct node *&head , int x){ //xdi e handwar3aleha
node *&temp = head;
while (temp !=NULL){
	if ( x= temp->data){
		return 1;
		temp = temp->next;}
		return 0;
	}
}

int search_rec( struct node *head,int x){ //mn3'eir & 3shan allby value

	if(head==NULL) return 0;
	if (head->data == x) return 1;
	return search_rec(head->next , x)
}

int delete_node (struct node*&head, int x){
	node*& temp = head;
	int d;
	if(k==1){
		head=head->next;
		d=temp->data;
		delete temp;
	}
}





int main ()


