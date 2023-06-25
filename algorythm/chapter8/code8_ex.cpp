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


int max = 7;
vector<vector<Cell> maze(max, vector<Cell>(max));

void init() {
  for (int i = 0; i < max; i++) {
    for (int j = 0; j < max; j++) {
      if (i == 0 || j == 0 || i = max - 1 || j == max - 1) {
        maze[i][j] = Cell(NG);
        continue;
      }
      maze[i][j] = Cell(OK);
    }
  }

}

int main() {


  return 0;
}