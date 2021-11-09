#include "block.h"

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    Block* genesisBlock = new Block;

    //Todo:
    //Smart pointer (eg unique_ptr)
    //Casting
    //Template
    //Lamba Expressions
    //Vector/List/Map
    
    
    
}