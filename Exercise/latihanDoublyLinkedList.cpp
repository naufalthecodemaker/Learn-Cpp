#include <string>
#include <sstream>
using namespace std;

// Deklarasi Node
struct Node
{
  int data;
  Node* next;
  Node* prev;

  // constructor
  Node(int val) : data(val), next(nullptr), prev(nullptr) {}
};


// membuat satu objek Node baru
Node* create(int value){
  Node *head = new Node(value);
  return head;
}

// mencari sebuah node dgn nilai tertenu di dalam DLL
Node* search(Node *head, int value){
  Node *current = head;
  while(current != nullptr){
    if(current->data == value){
      return current;
    }
    current = current->next;
  }
  return nullptr;
}

