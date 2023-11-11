#include <iostream>
#include <string>
using namespace std;

#include "Computer.h"
#include "Person.h"
#include "Player.h"

int main() {
  Person p1;
  Computer h1("s");

  while (!p1.win(&h1)) {
    cout << "Player enter a move: ";
    p1.move();
    h1.move();

    if (p1.win(&h1)) {
      cout << "Player wins" << endl;
      break;
    } else {
      if (p1.getMove() == h1.getMove()) {
        cout << "Draw! Go again" << endl;
      } else {
        cout << "Computer has won" << endl;
        break;
      }
    }
  }

  cout << p1.getMoves() << endl;
  cout << h1.getMoves() << endl;

  return 0;
}