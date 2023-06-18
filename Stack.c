#include<stdio.h>
#include<stdlib.h>

struct node{
	
	int data;
	struct node *link;
};

struct node *top = 0;

void push(int data){
	
	struct node *newnode;
	newnode = (struct node*)malloc(sizeof(struct node*));
	
	newnode->data = data;
	newnode->link = top;
	top = newnode;
	 
	
}

void display(){
	
    struct node *temp;
	temp = top;
	if(top==0){
		printf("List is empty.");
	}else{
		while(temp!=0){
			printf("%d",temp->data);
			temp = temp->link; 
		}
	}
	
}

void peek(){
	if(top==0){
		printf("List is empty.");
	}else{
		printf("Top element is %d",top->data);
	}
}

void pop(){
	
	struct node *temp;
	temp = top;
	if(top==0){
		printf("Link is empty..");
	}else{
		printf("%d",top->data);
		top = top->link;
		free(temp);
	}
}

int main(){
	push(10);
	push(11);
	push(13);
	display();
	peek();
	pop();
}
