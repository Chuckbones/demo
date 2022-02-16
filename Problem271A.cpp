#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e, f, g, h;
    cin >> a;
    int i = 1;
    while (2>1)
    {
        a = a + i;
        ++i   ;   // a=9947
        b = a / 1000;     //9947 b=9
        c = a - b * 1000; //c=947
        d = c / 100;      //d=9
        e = c - d * 100; //e=47
        f = e / 10;      //f=4
        g = e - f * 10; //b,d,f,g
        if (
            b != d && d != f && f != g && g != b
           )
        {   
            cout << b << d << f << g << endl;
            break;
        }
    }
    

    return 0;
}