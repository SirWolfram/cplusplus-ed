#include <cmath>
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

//all fucntions
int cases() {
  string word;
  string nextchar;
  cout << "Input a word: \n";
  cin >> word;
      cout << "\n";
  for (int i = 0; i < word.length(); i++) {
    nextchar = toupper(word[i]);
    cout << nextchar;
  }
      cout << "\n";
  for (int i = 0; i < word.length(); i++) {
    nextchar = tolower(word[i]);
    cout << nextchar;
  }
  return 0;
}

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
  if (file == "1") {
    cout << "\nloading hello...\n\n";
    hello();
  } else if (file == "2") {
    cout << "\nloading name...\n\n";
    name();
  } else if (file == "3") {
    cout << "\nloading maths...\n\n";
    maths();
  } else if (file == "4") {
    cout << "\nloading password...\n\n";
    password();
  } else if (file == "5") {
    cout << "\nloading search...\n\n";
    search();
  } else if (file == "6") {
    cout << "\nloading cases...\n\n";
    cases();
  } else {
    cout << "invalid program name\n";
    main();
  }

  return 0;
}
