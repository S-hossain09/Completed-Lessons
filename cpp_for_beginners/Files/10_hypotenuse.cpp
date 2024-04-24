#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;

    cout << "Enter side A and B : ";
    cin >> a >> b;

    a = pow(a,2);
    b = pow(b,2);
    // making a^2 and b^2

    c = sqrt(a+b);
    // c = _/(a+b);

    cout << "Side C is " << c << endl;

    return 0;
}
