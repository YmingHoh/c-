#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  ofstream orbit("/home/yming/Dokument/Lasa.odt");

  orbit << "Hello world/n" << endl;

  return 0;
}
