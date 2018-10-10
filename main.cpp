#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
  int v, i;
  cout << "Introduceti sec. nr. inversa: ";
  cin >> v;
  i=0;
  while (v!=0){

    cout << "Au mai ramas: " << v << " secunde" << endl;
    v=v-1;
    Sleep (1000);
  }
  cin.get()
  return 0;
}
