#include<stdio.h>
#include<string.h>
#define MAX 10

char stack[MAX];
top=-1;

int isEmpty(){
	if(top== MAX-1){
		return 1;
	}else{
		return 0;
	}
}

int isFull(){
	if(top== -1){
		return 1;
	}else{
		return 0;
	}
}

void push(char ch){
	if(isFull()){
		printf("Stack is Full\n");
	}else{
		top++;
		stack[top]=ch;
	}
}

char pop(){
	if(isEmpty()){
		printf("Stack is Empty\n");
	}else{
		return stack[top--];
	}
}

void traverse(){
	int i;
	for(i=0;i<=top;i++){
		printf("%c	",stack[i]);
	}
}

int isBalanced (char str[]){
	int i;
	char strVal;
	char topVal;
	
	for(i=0;i< strlen(str);i++){
		strVal=str[i];
		
		if( strVal =='(' || strVal =='[' || strVal =='{') {
			push(str[i]);
		}
		
		if( strVal == ')' || strVal == ']' || strVal == '}') {
			if (isEmpty()){
				return 0;
			}
			topVal = pop();
			
			if( ( strVal == '(' && topVal == ')') || ( strVal == '[' && topVal == ']') || ( strVal == '{' && topVal == '}')){
				return 0;
			}
		}
	}
	return isEmpty();
	
	
}

int main(){
	char str[10];
	printf("Enter Expression\n");
	scanf("%s",str);
	if (isBalanced){
		printf("Balanced");
	}else{
		printf("Not balanced");
	}
	return 0;
}
