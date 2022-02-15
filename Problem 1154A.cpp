#include <iostream>
using namespace std;

int main()
{

     int a, b, d;
     int c;
     cin >> a >> b >> c >> d;

     if (a > b)
     {
          if (b > c)
               if (d > a)
               {
                    cout << d - a << endl;
                    cout << d - b << endl;
                    cout << d - c;
               }
               else
               {

                    cout << a - d << endl;
                    cout << a - b << endl;
                    cout << a - c;
               }

          else
          {
               if (c > a)
               {
                    if (d > c)

                    {
                         cout << d - a << endl;
                         cout << d - b << endl;
                         cout << d - c;
                    }

                    else
                    {
                         cout << c - a << endl;
                         cout << c - b << endl;
                         cout << c - d;
                    }
               }
               else
               {
                    if (d > a)

                    {
                         cout << d - a << endl;
                         cout << d - b << endl;
                         cout << d - c;
                    }

                    else
                    {
                         cout << a - c << endl;
                         cout << a - b << endl;
                         cout << a - d;
                    }
               }
          }
     }

     else
     {
          if (a > c)
               if (d > b)
               {
                    cout << d - b << endl;
                    cout << d - a << endl;
                    cout << d - c;
               }
               else
               {

                    cout << b - d << endl;
                    cout << b - a << endl;
                    cout << b - c;
               }

          else
          {
               if (c > b)
               {
                    if (d > c)

                    {
                         cout << d - b << endl;
                         cout << d - a << endl;
                         cout << d - c;
                    }

                    else
                    {
                         cout << c - b << endl;
                         cout << c - a << endl;
                         cout << c - d;
                    }
               }
               else
               {
                    if (d > b)

                    {
                         cout << d - b << endl;
                         cout << d - a << endl;
                         cout << d - c;
                    }

                    else
                    {
                         cout << b - c << endl;
                         cout << b - a << endl;
                         cout << b - d;
                    }
               }
          }
     }

     return 0;
}
