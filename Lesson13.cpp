#include "MyStack.h"
#include <string>
int main()
{
    /*//myStack::Stack<std::string> p34;
    //p34.push_back("Students");
    //p34.push_back("of");
    //p34.push_back("the");
    //p34.push_back("group");
    //p34.push_back("P34");

    //p34.showStack();

    //cout << endl;

    //p34.pop_back();
    //p34.showStack();

    //cout << "---------------\n\n";
    //while (!p34.isEmpty())
    //{
    //    if (p34.top().length() == 2 )
    //    {
    //        cout << p34.top() << " ";
    //    }
    //    p34.pop_back();
    //}
    //cout << endl;
    //p34.showStack();*/

    std::string user;
    cout << "Enter word: "; std::cin >> user;
    using namespace myStack;

    Stack<char>letter;
    for (int i = 0; i < user.size(); i++)
    {
        letter.push_back(user[i]);
    }
    bool isPolly = true;
    for (int i = 0; i < user.size(); i++)
    {
        if (letter.isEmpty()) {
            isPolly = false;
            break;
        }
        else
        {
            if (user[i] != letter.top())
            {
                isPolly = false; break;
            }
            letter.pop_back();

        }

    }
    if (isPolly)
    {
        cout << "Is pollydrom\n";
    }
    else
    {
        cout << "Not pollydrom\n";
    }
}
