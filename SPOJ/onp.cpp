#include <bits/stdc++.h>
using namespace std;

// Program to convert infix to postfix

struct Stack
{
	char* arr;
	int top;
	int size;
};

Stack* createStack() {
	Stack* s = new Stack;
	s->top = -1;
	s->size = 40;
	s->arr = new char[s->size];

	return s;
}

void push(Stack* s, char e) {
	if(s->top == s->size-1) 
		cout<<"\nOverflow";
	else {
		s->arr[++s->top] = e;
	}
}

char getTop(Stack* s) {
		return s->arr[s->top];
}

char pop(Stack* s) {
	
	char e = s->arr[s->top--];
	return e;

}

void printIt(Stack* s) {
	if(s->top == -1) 
		cout<<"\nUnderflow";
	else {
		for(int i=s->top; i>=0; i--) {
			cout<<s->arr[i]<<" ";
		}
		cout<<"\n";
	}
}

int findPrecedence(char op) {
	switch(op) {
		case '+' :
		case '-' : {
			return 0;
			break;
		}
		case '*' :
		case '/' : {
			return 1;
			break;
		}
		case '^' : {
			return 2;
			break;
		}
		default : {
			return -1;
		}
	}
}

int main() {

	char operatorss[] = {'^','/','*','+','-'}, closing[] = {'}',']',')'}, opening[] = {'{','(','['};

	vector<char> operators(operatorss , operatorss+5), closingBrackets(closing, closing+3), openingBrackets(opening,opening+3);
	
	int t;
	cin>>t;
	while(t--) {

	Stack* s = createStack();
	vector<char> result;
	string b;
	cin>>b;

	for(int i=0 ; b[i]!='\0' ; i++) {
		if((find(operators.begin(), operators.end(), b[i]) != operators.end()) || (find(openingBrackets.begin(), openingBrackets.end(), b[i]) != openingBrackets.end())) {
			
			char top = getTop(s);
			while((findPrecedence(top) > findPrecedence(b[i])) && (findPrecedence(b[i]) != -1) && (s->top != -1)) {

				result.push_back(top);
				char popped = pop(s);
				top = getTop(s);
			}
			push(s,b[i]);
		}
		else if(find(closingBrackets.begin(), closingBrackets.end(), b[i]) != closingBrackets.end()){
			
			while(true) {
				
				char opr = pop(s);
				bool openingFound = find(openingBrackets.begin(), openingBrackets.end(), opr) != openingBrackets.end() ;
				
				if(!openingFound) {
					result.push_back(opr);
				}
				else {
					break;
				}
			}
		}
		else {
			result.push_back(b[i]);
		}
	}

	while(s->top != -1) {
		result.push_back(pop(s));
	}

	for(int o = 0 ; o< result.size(); o++) {
		cout<<result[o];
	}
	cout<<"\n";
	delete s;
 }
	return 0;
}