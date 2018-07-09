#include<fstream>
#include<iostream>

using namespace std;


int main()
{
ofstream write("/home/yming/Dokument/Lasa.odt", ios::out);
write<<"I write to the file"<<endl;
write<<"Again write to the file"<<endl;
write.close();
return 0;
}
