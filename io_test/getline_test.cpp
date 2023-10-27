#include <iostream>
#include <fstream>

using namespace std;

string ft_ctos(const char *s)
{
  int i = 0;
  std::string ret;

  while (s[i] != '\0')
  {
    ret.append(1, s[i++]);
  }
  return (ret);
}

int main(int ac, char **av)
{
  std::string  line;
  if (ac != 3)
      return 1;
  std::string s1 = ft_ctos(av[1]);
  std::string s2 = ft_ctos(av[2]);

  ifstream in_file (s1); // input file stream
  ofstream out_file (s2); // output file stream

  if ( in_file.is_open()) // check if file success open
  {
    while (getline(in_file, line))
    {
      out_file << line << "\n";
    }
    in_file.close();
    out_file.close();
  }
   return 0;
}

