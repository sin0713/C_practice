#include <iostream>
#include <vector>
using namespace std;

enum flag {
  OK,
  NG,
  VISITED
};

class Cell {
  flag state;

  public:
    Cell(flag flag) : state(flag) {};

    void State(flag flag) {
      state = flag;
    }

    flag State() { return state; }
};

void visit(int x, int y) {
}


const int size = 7;
vector<vector<Cell*>> maze(size, vector<Cell*>(size));

void init() {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (i == 0 || j == 0 || i == size - 1 || j == size - 1) {
        maze[i][j] = new Cell(NG);
        continue;
      }
      maze[i][j] = new Cell(OK);
    }
  }

}

int main() {
  init();

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      Cell* cell = maze[i][j];
      if (cell->State() == OK) {
        cout << "1 ";
      } else {
        cout << "0 ";
      }
    }
    cout << endl;
  }

  return 0;
}