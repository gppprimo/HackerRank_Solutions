#include "func.h"

float f(float x, int n) {
    for (int i = 0; i < n; ++i)
        x *= 10;
    x = int(x);
    for (int i = 0; i < n; ++i)
        x /= 10;
    return x;
}
int main()
{
    cout << f(9.219544457293, 5);
    return 0;
}