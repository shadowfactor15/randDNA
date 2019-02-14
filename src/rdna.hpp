#include <iostream>
#include <string>
#include <random>

using namespace std;

string randDNA(int seed,string letterbase ,int length)
{
  string DNA = "";
  std::mt19937 eng(seed);
  std::uniform_int_distribution<int>uniform(0,letterbase.size()-1);
    for (int i=0;i < 20;i++)
      DNA = DNA + letterbase[i];
          return DNA;
}
