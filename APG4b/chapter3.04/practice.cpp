#include <bits/stdc++.h>
using namespace std;
 
// 以下に、24時間表記の時計構造体 Clock を定義する

struct Clock {
  int hour;
  int minute;
  int second;

  void set(int h, int m, int s) {
    hour = h;
    minute = m;
    second = s;
  }

  string to_str() {
    string ret;

    if(!(0 <= hour && hour <= 23 &&
         0 <= minute && minute <= 59 &&
         0 <= second && second <= 59)) {
      return "error";
    }

    if (hour <10) ret += "0";
    ret += to_string(hour);

    ret += ":";

    if (minute < 10) ret += "0";
    ret += to_string(minute);

    ret += ":";

    if (second < 10) ret += "0";
    ret += to_string(second);

    return ret;
  }

  void shift(int diff_second) {
    int diff_m = diff_second / 60;
    int diff_h = diff_second / 60 / 60;
    int diff_s = diff_second % 60;

    if (diff_second >= 0) {
      hour += diff_h;
      minute += diff_m;
      second += diff_s;
    } else {
       hour -= diff_h;
       minute -= diff_m;
       second -= diff_s;
    }
  }

};


int main() {
  // 入力を受け取る
  int hour, minute, second;
  cin >> hour >> minute >> second;
  int diff_second;
  cin >> diff_second;
 
  // Clock構造体のオブジェクトを宣言
  Clock clock;
 
  // set関数を呼び出して時刻を設定する
  clock.set(hour, minute, second);
 
  // 時刻を出力
  cout << clock.to_str() << endl;
 
  // 時計を進める(戻す)
  clock.shift(diff_second);
 
  // 変更後の時刻を出力
  cout << clock.to_str() << endl;
}
