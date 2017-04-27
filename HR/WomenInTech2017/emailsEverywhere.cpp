#include <bits/stdc++.h>
using namespace std;

struct Node
{
	string data;
	int priority;
	Node *next;
};

void enQueue(Node **front, string data, int priority) {
	Node *q = new Node;
	q->data = data;
	q->priority = priority;

	
	Node *temp = *front;
	Node *prev = NULL;
	while(temp != NULL && temp->priority >= q->priority) {
		prev = temp;
		temp = temp->next;
	}
	if(prev == NULL) {
		q->next = temp;
		*front = q;
		return;
	}
	q->next = prev->next;
	prev->next = q;
	
}

void deQueue(Node **front) {
	if(*front == NULL) 
		cout<<"-1\n";
	else {
		Node *temp = *front;
		*front = (*front)->next;
		cout<<temp->data<<"\n";
	}
}

int main() {

	Node *front = NULL;
	string ch;
	int n;
	cin>>n;

	while(n--){
		cin>>ch;
		switch(ch[0]) {
			case 's': {
				int p;
				cin>>ch>>p;
				enQueue(&front,ch,p);
				break;
			}
			case 'g': {
				deQueue(&front);
				break;
			}
		}
	}
	return 0;
}