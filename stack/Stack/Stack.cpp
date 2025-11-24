#include <iostream>
#include <vector>

using namespace std;



template <typename T>
class  Stack
{
    private
        vector <T> StackElements;
    public

    void push(Tvalue)
    {
        StackElements.push_back(value);
    }
    void pob()
    {
        StackElements.erase(StackElements.begin());
    }
    void clear()
    {
        StackElements.clear();
    }

};


int main()
{
    std::cout << "Hello World!\n";
}

