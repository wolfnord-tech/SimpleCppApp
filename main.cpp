#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

class Human {
public:
  string name = "default";
  int age = 0;

  Human() {}

  Human(string name) : name(name) {}

  Human(string name, int age) : name(name), age(age) {}

  Human(int age) : age(age) {}

  friend ostream &operator << (ofstream &os, const Human &human);
};

ostream &operator<<(ostream &os, const Human &human) {
  os << "Здравствуйте, " << human.name << "!" << endl << "Ваш возраст: " << human.age << endl;
  return os;
}

int main() {
  system("chcp 65001");
  // setlocale(LC_ALL, "russian");
  auto result = (10 <=> 20) > 0;
  string name = "default";
  int age = -1;
  cout << "Введите ваше имя: " << endl << ">> ";
  cin >> name;
  cout << endl << "Введите ваш возраст: " << endl << ">> ";
  cin >> age;
  cout << endl;
  Human human(name, age);
  cout << human << endl;

  cout << "Тестирование функции C++ 23:" << endl;
  if (result)
    cout << "10 > 20" << endl;
  else
    cout << "10 < 20" << endl;
  cout << endl;
  return 0;
}
