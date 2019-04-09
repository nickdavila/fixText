#include <iostream>
using namespace std;

string removeParenthesis(string line)
{
    string temp;
    
    for(int i = 0; i < line.length(); i++)
    {
        if(line[i] == 40 || line[i] == 41)
        {
            line[i] = 32;
        }
    }
    
    return line;
}

int main()
{
  // test
  //it works
    cout << removeParenthesis("Vmax=ω*D(so(twice(the(amplitude(means(twice(the(velocity(");
}
