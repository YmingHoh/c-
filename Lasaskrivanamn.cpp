#include <iostream>
#include <stdio.h>
#include <fstream>

using namespace std;

int main()
{
char fname[30];
char lname[30];
char email[30];

fstream nameform;

nameform.open("/home/yming/Dokument/Lasa.txt", ios::out);
cout << "Förnamn: ";
cin >> fname;
cout << "Efternamn: ";
cin >> lname;
cout << "Email: ";
cin >> email;

nameform<<fname<<endl;
nameform<<lname<<endl;
nameform<<email<<endl;

nameform.close();

cout << "klart!" << endl;

return 0;
}
