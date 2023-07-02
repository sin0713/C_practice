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
pair<int, int> goal_point {5, 5};
vector<pair<int, int>> stack_visit;

int sol_num = 0;
vector<vector<pair<int, int>>> paths;

void visit(int x, int y) {
  cout << "x: " << x << " y: " << y << " visited" << endl;
  maze[x][y] = new Cell(VISITED);
  stack_visit.push_back({x, y});

  if (x == goal_point.first && y == goal_point.second) {
    paths.resize(sol_num + 1);
    for (int i = 0; i < stack_visit.size(); i++) {
      paths[sol_num].push_back(stack_visit[i]);
    }
    sol_num++;
  } else {
    if (maze[x][y + 1]->State() == OK) {
      visit(x, y + 1);
    }
    if (maze[x + 1][y]->State() == OK) {
      visit(x + 1, y);
    }
    if (maze[x][y - 1]->State() == OK) {
      visit(x, y - 1);
    }
    if (maze[x - 1][y]->State() == OK) {
      visit(x - 1, y);
    }

    cout << "x: " << x << " y: " << y << " back" << endl;
    stack_visit.pop_back();
  }

  maze[x][y] = new Cell(OK);
}

void showPath() {
  for (int i = 0; i < paths.size(); i++) {
    cout << "No." << i << " ";
    for (int j = 0; j < paths[i].size(); j++) {
      cout << "(" << paths[i][j].first << ", " << paths[i][j].second << ")";
    }
    cout << endl;
  }

}

int main() {
  init();

  visit(start_point.first, start_point.second);
  showPath();

  return 0;
}