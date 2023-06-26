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
vector<pair<int, int>> obstacles {
  {2, 2},
  {2, 4},
  {3, 5},
  {4, 1},
  {4, 3},
  {4, 5}
};

bool checkObstacles(int i, int j) {
  for (int k = 0; k < obstacles.size(); k++) {
    if (i == obstacles[k].first && j == obstacles[k].second) {
      return true;
    }
  }
  return false;
}

void init() {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (i == 0 || j == 0 || i == size - 1 || j == size - 1) {
        maze[i][j] = new Cell(NG);
        continue;
      }

      if (checkObstacles(i, j)) {
        maze[i][j] = new Cell(NG);
        continue;
      }

      maze[i][j] = new Cell(OK);
    }
  }
}

void showMaze() {
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
}

pair<int, int> start_point {1, 1};
pair<int, int> goal_point {6, 6};
vector<pair<int, int>> stack_visit;
int stack_pointer = 0;

int sol_num = 0;
vector<vector<pair<int, int>>> paths;

void visit(int x, int y) {

}

int main() {
  init();
  showMaze();

  return 0;
}