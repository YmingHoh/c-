#include<iostream>
#include<chrono>

int main()
{
//get the start time
auto start = std::chrono::steady_clock::now();

//run some code
for (int i = 0; i < 1e7;i++){
  std::cout << "";
}

//get the end time
auto end = std::chrono::steady_clock::now();

//Find the difference
double elapsed_time_ns = double (std::chrono::duration_cast <std::chrono::nanoseconds> (end-start).count());

//output
std::count << "Elapsed Time (s): " << elapsed_time_ns / 1e9 << std::endl;

system("pause;");
return 0;

}
