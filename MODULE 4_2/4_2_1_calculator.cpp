#include <iostream>
using namespace std;
class calculator
{
public:
    calculator(int a, int b)
    {
        int answer = a + b;
        cout << "Addition =" << answer << endl;
    }
    calculator(int a, int b, int c)
    {
        int answer = a - b;
        cout << "Subtraction =" << answer << endl;
    }
    calculator(int a, int b, int c, int d)
    {
        int answer = a * b;
        cout << "Multiplication =" << answer << endl;
    }
};
int main()
{
    calculator c1(25, 30), c2(56, 21, 0), c3(48, 98, 0, 0);

    return 0;
}