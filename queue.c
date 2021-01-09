#include<stdio.h>
#define MAX 10
int queue[MAX];
int front= -1;
int rear= -1;

void insert(int num){
		
		printf("Enter number to the queue\n");
		scanf("%d",&num);
	
		if(rear == MAX-1){
			printf("Overflow\n");
		}
		else if(rear == -1 && front == -1){
			front=rear=0;
			queue[rear]=num;
		
		}
		else{
			rear++;
			queue[rear]=num;
		}
		
}

int deletion(){
	int val;
	if(front == -1 || front>rear){
		printf("Underflow\n");
		return -1;
	}else{
		val=queue[front];
		front++;
		if(front>rear){
			front=rear= -1;
			return val;
		}
	}
}


int main(){

		
	}
	return 0;
}
