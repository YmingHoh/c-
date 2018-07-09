#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>


using namespace std;

int main()
{
std::ofstream slakttabell("/home/yming/Dokument/setw(test)");
//slakttabell.setf(ios_base::left, ios_base::adjustfield);
slakttabell<<endl;//ger tom rad överst.
slakttabell<<setw(30)<<"F\x99namn"<<"| "<<setw(30)<<"Efternamn"<<endl;
slakttabell<<setw(60)<<"----------------------------------"<<endl;
slakttabell<<setw(30)<<"Josefin"<<"| "<<setw(30)<<"Karlsson"<<endl;
return 0;
}
