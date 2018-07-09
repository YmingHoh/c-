#include <iostream>

using namespace std;

int addition (int c)
{
	int f = (c*1.8+32);
	return f;
}

int main ()
{
int z = addition (38);
cout << "Temperaturen i Farenheit är" << z;
cin.get();

return 0;
}
