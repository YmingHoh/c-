#include <iostream>

using namespace std;

class YmingsClass{
public:
  void coolsaying()
{
  cout << "Hej jag heter Yming!" << endl;
  }
};

int main()
{
  YmingsClass ymingsobject;
  ymingsobject.coolsaying();
  return 0;
}
