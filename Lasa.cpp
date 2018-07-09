#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
string y;
ifstream infile;
infile.open("/home/yming/Dokument/Lasa.txt");
infile >> y;
cout << y;
infile.close();
cin.get();
cin.get();

return 0;
}
