#include <iostream>
#include <string>
#include <random>

using namespace std;

string randDNA(int seed,string bases ,int n)
{
  string DNA = "";
  int min =0;
  


  std::mt19937 eng(seed);
  std::uniform_int_distribution<int>uniform(min,bases.size()-1);
  int index =0;
  for(int i=0;i<n;i++)
  {
  index = uniform(eng);
  DNA = DNA + bases[index];
  }
          return DNA;

}
