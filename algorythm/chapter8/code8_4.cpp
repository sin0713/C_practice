#include <iostream>
#include <vector>
using namespace std;

struct Node {
  Node *next;
  string name;

  Node(string _name = "") : next(NULL), name(_name) {}
};

Node *nil;

void init() {
  nil = new Node();
  nil->next = nil;
}

void printList() {
  Node *cur = nil->next;
  for (; cur != nil; cur = cur->next) {
    cout << cur->name << " -> ";
  }
  cout << endl;
}

void insert(Node *v, Node *p = nil) {
  v->next = p->next;
  p->next = v;
}

int main() {
  init();

  vector<string> nameList = {
    "yamamoto",
    "watanabe",
    "tanaka",
    "sato",
    "suzuki",
    "kitaguchi"
  };

  for (string name : nameList) {
    Node *node = new Node(name);
    insert(node);

    printList();
  }



  return 0;
}