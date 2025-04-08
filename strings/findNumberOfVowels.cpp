#include <iostream>
using namespace std;
int vowels = 0;
main()
{
  string name;
  cout << "Enter a line to get the number of vowels :" << endl;
  getline(cin, name);

  for (int i = 0; i < name.length(); i++)
  {
    if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
    {
      vowels++;
    }
  }
  cout << "Total number of vowels in the sentence is: " << vowels << endl;
}