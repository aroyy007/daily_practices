#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    char op;

    while (cin >> a >> op >> b)
    {
        if (op == '?')
        {
            break;
        }

        int result;
        if (op == '+')
        {
            result = a + b;
        }
        else if (op == '-')
        {
            result = a - b;
        }
        else if (op == '*')
        {
            result = a * b;
        }
        else if (op == '/')
        {
            result = a / b;
        }

        cout << result << std::endl;
    }

    return 0;
}

