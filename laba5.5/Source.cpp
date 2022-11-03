#include <iostream>
#include <cmath>
#include <math.h>


using namespace std;
int f(int x, int n, int level, int& depth)

{
    if (level > depth)
    {
        depth = level;

        cout << "level = " << level << endl;
    }

    if (n == 0)
    {

        return 1;
    }

    if (n < 0)
    {

        return 1 / (pow(x, abs(n)));
    }
    if (n > 0)
    {
        return x * pow(x, n - 1);
    }

}


int main()

{
    int depth = 0;

    int func_f = f(2, 4, 1, depth);

    cout << "depth = " << depth << endl;
    cout << "f() = " << func_f << endl;

    return 0;
}