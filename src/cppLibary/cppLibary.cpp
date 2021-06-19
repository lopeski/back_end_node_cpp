#include <iostream>
#include <string>
#include "greeting.h"

using namespace std;

void loopFunction(int a) {
  cout << "essa mensagem esta sendo executada no c++, e vai realizar uma contagem:" << a << end;

  for (size_t i = 0; i < a; i++) {
    cout << "o programa se encerrará em " << a << endl;
  }
}
