//Check if parantheses are balanced or not using stack.

#include <iostream>
#include <stack>
#include <string.h>
using namespace std;

bool Pair(char opening, char closing) //To check if parantheses are closed 
{
    if (opening=='(' && closing ==')')
        return true;

    if (opening=='{' && closing =='}')
        return true;

    if (opening=='[' && closing ==']')
        return true;

    if (opening=='<' && closing =='>')
        return true;

    return false;
}

bool CheckBalanced(string exp)
{
    stack<char> S;

    for (int i = 0; i<exp.length(); i++)
    {
        if (exp[i]=='(' || exp[i]=='{' ||exp[i]=='[' || exp[i]=='<') //Pushing opening symbol in stack
            S.push(exp[i]);

        else if (exp[i]==')' || exp[i]=='}' ||exp[i]==']' || exp[i]=='>')  //Checking if closing symbol is pair of opening symbol or not
        {
            if (S.empty() || !Pair(S.top(), exp[i]))
                return false;

            else //After checking the if condition (which will be false in most case) else condition will be executed to delete the top element
                S.pop();
        }



    }
    return S.empty()? true:false;
}

int main()
{
    string exp;

    cout <<"Enter a expression: \n";
    cin >> exp;

    if (CheckBalanced(exp))
        cout <<"Expression is balanced.";

    else
        cout << "Expression is not balanced.";
        

}