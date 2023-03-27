#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int search() {
  string word;
  char c;
  cout << "Input a word: \n";
  cin >> word;
  cout << "Search for character in word: \n";
  cin >> c;
  cout << "\n";
  for (int i = 0; i < word.length(); i++) {
    if (word[i] == c) {
      cout << i;
      cout << " ";
    }
  }
  cout << "\n\nor\n\n";
  for (int i = 0; i < word.length(); i++) {
    if (word[i] == c) {
      cout << word[i];
    } else {
      cout << "_";
    }
  }
  return 0;
}
int password() {
  string correctPasswd = "12345";
  string guess;
  for (int i = 0; i < 3;) {
    cout << "Password: \n";
    cin >> guess;
    if (guess != "12345") {
      cout << "\nIncorrect Password\n\n";
      i++;
    } else {
      cout << "Welcome!";
      return 0;
    }
  }
  cout << "3 attemps are up! Try again.";
  return 0;
}

int maths() {
  int num1;
  int num2;
  cout << "input first number: \n";
  cin >> num1;
  cout << "input second number: \n";
  cin >> num2;
  cout << "\n";
  cout << num1 + num2;
  cout << "\n";
  cout << num1 * num2;
  cout << "\n";
  cout << pow(num1, num2);
  cout << "\n";
  cout << num1 - num2;
  cout << "\n";
  cout << num1 / num2;
  cout << "\n";
  cout << num1 % num2;
  cout << "\n";
  return 0;
}

int name() {
  string name;
  cout << "What is your name?\n";
  cin >> name;
  cout << "Hello, " + name + "!";
  return 0;
}
int hello() {
  cout << "Hello, World!\n";
  return 0;
}

// each function acts as an assignment

int main() {
  string file;

  cout << "What program should I run: \n";
  cin >> file;
  if (file == "hello") {
    cout << "\nloading hello...\n\n";
    hello();
  } else if (file == "name") {
    cout << "\nloading name...\n\n";
    name();
  } else if (file == "maths") {
    cout << "\nloading maths...\n\n";
    maths();
  } else if (file == "password") {
    cout << "\nloading password...\n\n";
    password();
  } else if (file == "search") {
    cout << "\nloading search...\n\n";
    search();
  } else {
    cout << "invalid program name\n";
    main();
  }

  return 0;
}
