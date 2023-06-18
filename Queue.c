struct node{
	int data;
	struct node *next;
};

struct node *front = 0;
struct node *rear = 0;

void enque(int data){
	
	struct node *newnode;
	newnode = (struct node*)malloc(sizeof(struct node*));
	newnode->data = data;
	newnode->next = 0;
	
	if(front == 0 && rear == 0){
		front = rear = newnode;
	}else{
		rear->next=newnode;
		rear = newnode;
	}
}

void dequeue(){
	
	struct node *temp;
	temp = front;
	
	if(front == 0 && rear == 0){
		printf("list is empty.");
	}else{
		front = front->next;
		free(temp);
	}
	
}

void display(){
	struct node *temp;
	if(front == 0 && rear == 0){
	  printf("list is empty.");	
	}else{
	   rear = front;
	   while(temp!=0){
	   	printf("%d",temp->data);
	   	temp = temp->next;
	   }	
	}
}
