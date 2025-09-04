#include <string>
#include <sstream>
using namespace std;

// Deklarasi Node
struct Node
{
  int data; // data yg disimpan
  Node* next; // pointer ke object Node lain

  // constructor
  Node (int val) : data(val), next(nullptr){}
};

// create a new node
Node* create(int value){
  Node *head = new Node(value);
  return head;
}

// search for a node dgn nilai tertentu di dalam linked list
Node* search(Node *head, int value){
  Node *current = head;
  while(current != nullptr){
    if(current->data == value){
      return current;
    } 
    current = current -> next;
  }
  return nullptr;
}

// menyisipkan node baru setelah node target yg udh ada
Node* insertAfter(Node* head, int findValue, int newValue){
  if(head == nullptr){
    return nullptr;
  }
  Node *current = search(head, findValue);
  if(current == nullptr){
    return nullptr;
  } 
  Node *newNode = new Node(newValue);
  newNode->next = current->next;
  current->next = newNode;
  return newNode;
}

// menyisipkan node baru sebelum node target yg udh ada
Node* insertBefore(Node*& head, int findValue, int newValue){
  if(head == nullptr){
    return nullptr;
  }

  Node *current = head;
  Node *previous = nullptr;

  while(current != nullptr && current->data!=findValue){
    previous = current;
  }

  if(current == nullptr){
    return nullptr;
  }

  Node *newNode = new Node(newValue);
  if(previous == nullptr){
    head = newNode;
    head -> next = current;
  } else{
    newNode->next=current;
    previous->next=newNode;
  }
  return newNode;
}

// menghapus sebuah node dari SLL
bool deleteNode(Node*& head, int value){
  Node* current = head;
  Node* previous = nullptr;
  while(current != nullptr && current -> data != value){
    previous = current;
    current = current -> next;
  }
  if(current == nullptr){
    return false; // ga ditemuin
  }
  if(previous == nullptr){
    head = current -> next; // hapus head
  } else{
    previous -> next = current -> next; // hapus di tengah/akhir
  }

  delete current;
  return true;
}

// mengubah data di dalam link menjadi string yg mudah dibaca
string printNode(Node* head){
  Node* current = head;
  stringstream ss;
  ss << "[";

  while(current != nullptr){
    ss << current->data << " ";
    current = current->next;
  }

  ss << "]";
  return ss.str();
}





