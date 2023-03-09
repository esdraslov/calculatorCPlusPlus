#include <iostream>

using namespace std;

int main() {
  int opt = 0;
  int val1 = 0;
  int val2 = 0;
  int answer = 0;
  int rest = 0;
  cout << "choose a opition\n";
  cout << "(1) addition\n";
  cout << "(2) subtraction\n";
  cout << "(3) multiplication\n";
  cout << "(4) division\n";
  cin >> opt;
  if(opt == 1){
    cout << "value 1: ";
    cin >> val1;
    cout << "value 2: ";
    cin >> val2;
    answer = val1 + val2;
    cout << "answer is: " << answer << "\n";
  }else if(opt == 2){
    cout << "value 1: ";
    cin >> val1;
    cout << "value 2: ";
    cin >> val2;
    answer = val1 - val2;
    cout << "answer is: " << answer << "\n";
  }else if(opt == 3){
    cout << "value 1: ";
    cin >> val1;
    cout << "value 2: ";
    cin >> val2;
    answer = val1 * val2;
    cout << "answer is: " << answer << "\n";
  }else if(opt == 4){
    cout << "value 1: ";
    cin >> val1;
    cout << "value 2: ";
    cin >> val2;
    answer = val1 / val2;
    rest = val1 % val2;
    cout << "answer is: " << answer << "\n";
    cout << "rest is: " << rest << "\n";
  }else{
    cout << opt << " is not a valid option\n";
  }
  return 0;
}