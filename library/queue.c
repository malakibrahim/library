#include<stdio.h>

 typedef struct queue{
	int x ;
	queue*next;
} queue ;

void enque(queue*& H , queue*& T , int x){
	queue*p= new queue;
	p->data = x;
	p ->next =NULL;
if (H=NULL && T=NULL){
	H=p;
	T=p;
}
else { T->next =p
T=p;
}
}

int dequeue (queue*&H, queue *&T ,int*empty){
	if (H==NULL){
		*empty= 1;
		return -1;}
		*empty=0;
		int x = H->data;
		queue *p=H;
		H=H->next ;
		delete p;
		if(H=NULL)
		{T= NULL ;}
		return x;
		}
}

