#include <iostream> 
using namespace std; 
// Node class to represent a node of the linked list. 
class Node{ 
public: 
string name;
	int SAP; 
	
	Node* next; 
	Node() 
	{ 
	name="";
		SAP = 0; 
		next = NULL; 
	} 
	Node(int SAP,string ran) 
	{ 
	this->name=ran;
		this->SAP = SAP; 
		this->next = NULL; 
	} 
}; 
 
class Linkedlist { 
	Node* head; 
public: 
	Linkedlist() { head = NULL; } 
void insertNode(int data,string ran) 
{ 
	Node* newNode = new Node(data,ran); 
	if (head == NULL) { 
		head = newNode; 
		return; 
	} 
	Node* temp = head; 
	while (temp->next != NULL) { 
		temp = temp->next; 
	} 
	temp->next = newNode; 
} 
void printList() 
{ 
	Node* temp = head; 
 
	if (head == NULL) { 
		cout << "List is empty" << endl;
		return; 
	} 
	while (temp != NULL) { 
		cout <<"Sap = "<< temp->SAP <<" Name = "<<temp->name<< endl; 
		temp = temp->next; 
	} 
}  
void deleteNode(int nodepos) 
{ 
	Node *temp1 = head, *temp2 = NULL; 
	int ListLen = 0; 
	if (head == NULL) { 
		cout << "LIST IS EMPTY deletion not performed" << endl; 
		return; 
	} 
	while (temp1 != NULL) { 
		temp1 = temp1->next; 
		ListLen++; 
	} 
	if (ListLen < nodepos) { 
		cout << "Index is out of range"<< endl; 
		return; 
	} 
	temp1 = head; 
	if (nodepos == 1) { 
		head = head->next; 
		delete temp1; 
		return; 
	} 
	while (nodepos-- > 1) { 
		temp2 = temp1; 
		temp1 = temp1->next; 
	} 
	temp2->next = temp1->next; 

	delete temp1; 
}  
}; 


int main() 
{ string inp;
int in,i,ch=0,pos;
	Linkedlist list; 
	cout<<"Enter number of inputs "<<endl;
	cin>>i;
	for(i;i>0;i--){
		cout<<"Name = ";
			cin>>inp;
			cout<<"Sap id = ";
	cin>>in;
	cout<<endl;
	list.insertNode(in,inp);
	}

	list.printList();
		cout<<"Would you like to delete an item?\n2=no\tany integer for yes"<<endl;
	cin>>ch;
while(ch!=2){
	cout<<"Enter position to delete node"<<endl;
	cin>>pos;
	list.deleteNode(pos);
	list.printList();
	cout<<"Would you like to delete an item?\n2=no\tany integer for yes"<<endl;
	cin>>ch;
}
list.printList();
	return 0; 
}


