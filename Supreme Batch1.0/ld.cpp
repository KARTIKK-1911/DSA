#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int value) : data(value), next(NULL) {}
};

// head se phle new node insert kr re hai
Node* insertBeforeHead(Node* head, int newValue) {
    // Create a new node with the given value
    Node* newNode = new Node(newValue);

    // new node ka next pointer current head ko point krega 
    newNode->next = head;

    // new node humara new head bngya
    head = newNode;

    return head;
}

// print linked list
void printList(Node* head) {
    while (head != NULL) {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
//	cout<<"Akshi Jain 21BCS6552\n";
    Node* head = new Node(5);
    head->next = new Node(10);
    head->next->next = new Node(15);
    head->next->next->next = new Node(20);
    head->next->next->next->next = new Node(25);

    // orignal linked list
    std::cout << "Original Linked List: ";
    printList(head);

    int valueToInsert;
    std::cout << "Enter a value to insert before the head: ";
    std::cin >> valueToInsert;

    // function to insert new node
    head = insertBeforeHead(head, valueToInsert);

    std::cout << "Linked List after insertion: ";
    printList(head);

    return 0;
}