#include <iostream>
using namespace std;

/*
  step:
  1. kalo head = NULL, return false
  2. kalo head's key = X, return true, 
  3. kalo beda, cari secara rekursif di node berikutnya
*/ 

// Linked List Node
class Node {
  public:
    int data;
    Node* next;

    // constructor utk inisialisasi new node dengan data
    Node(int x){
      data = x;
      next = nullptr;
    }
};

// cek apakah key ada di linked list
bool searchKey(Node* head, int key){
  // base case (step 1)
  if(head == nullptr){
    return false;
  }

  // kalo key nya ada di current node, return true (step 2)
  if(head->data == key){
    return true;
  }

  // kalo gaada, cari di node berikutnya sampe seterusnya (step 3)
  return searchKey(head->next, key);
}

int main(){
  // membuat linked list 1 -> 3 -> 5 -> 7 -> 9
  Node* head = new Node(1);
  head->next = new Node(3);
  head->next->next = new Node(5);
  head->next->next->next = new Node(7);
  head->next->next->next->next = new Node(9);

  // membuat key yg ingin dicari (kalo ada di list = true, kalo gaada = false)
  int key1 = 5;
  int key2 = 6;

  if(searchKey(head, key1))
    cout << "Key 1: True\n";
  else
    cout << "Key 1: False\n";

  if(searchKey(head, key2))
    cout << "Key 2: True\n";
  else
    cout << "Key 2: False\n";

  return 0;
}