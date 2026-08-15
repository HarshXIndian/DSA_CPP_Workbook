#include <iostream>
using namespace std;

class pattern
{
public:
    int r, c, n;
    int getdata()
    {
        cout << "Enter the Number of Rows :";
        cin >> r;
        cout << "Enter the Numbers of Coulumns : ";
        cin >> c;
        cout << "Enter the Number of N : ";
        cin >> n;
        cout << endl;
    }

    int ractangle_pattern()
    {

        for (int i = 1; i <= r; i++)
        {
            for (int j = 1; j <= c; j++)
            {
                cout << " * ";
            }
            cout << endl;
        }
        cout << endl;
    }

    int hollow_pattern()
    {
        for (int i = 1; i <= r; i++)
        {
            for (int j = 1; j <= c; j++)
            {
                if (i == 1 || i == r)
                {
                    cout << " * ";
                }
                else if (j == 1)
                {
                    cout << " * ";
                }
                else if (j == c)
                {
                    cout << " * ";
                }
                else
                {
                    cout << "   ";
                }
            }
            cout << endl;
        }
        cout << endl;
    }

    int inverted_half_pyramid()
    {
        for (int i = n; i >= 1; i--)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << " * ";
            }
            cout << endl;
        }
        cout << endl;
    }

    int inverted_half_pyramid_180()
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (j <= n - i)
                {
                    cout << "   ";
                }
                else
                {
                    cout << " * ";
                }
            }
            cout << endl;
        };
        cout << endl;
    }

    int half_pyramid_numbers()
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << " " << i << " ";
            }
            cout << endl;
        }
        cout << endl;
    };

    int floud_triangle()
    {
        int count = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << " " << count << " ";
                count++;
            }
            cout << endl;
        }
        cout << endl;
    }

    int butterfly()
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << " * ";
            }
            for (int j = 1; j <= n * 2 - i * 2; j++)
            {
                cout << "   ";
            }
            for (int j = 1; j <= i; j++)
            {
                cout << " * ";
            }
            cout << endl;
        }
        for (int i = n; i >= 1; i--)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << " * ";
            }
            for (int j = 1; j <= n * 2 - i * 2; j++)
            {
                cout << "   ";
            }
            for (int j = 1; j <= i; j++)
            {
                cout << " * ";
            }
            cout << endl;
        }
        cout << endl;
    }

    int dimond_pattern()
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (j <= n - i)
                {
                    cout << "   ";
                }
                else
                {
                    cout << " * ";
                }
            }
            for (int j = 2; j <= i; j++)
            {

                cout << " * ";
            }
            cout << endl;
        }
        for (int i = n - 1; i >= 1; i--)
        {
            for (int j = 1; j <= n; j++)
            {
                if (j <= n - i)
                {
                    cout << "   ";
                }
                else
                {
                    cout << " * ";
                }
            }
            for (int j = i - 1; j >= 1; j--)
            {

                cout << " * ";
            }
            cout << endl;
        }
        cout << endl;
    }

    int inverted_pattern()
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= (n + 1) - i; j++)
            {
                cout << " " << j << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    int pattern_0_1()
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                if (((i + j) % 2) == 0)
                {
                    cout << " 1 ";
                }
                else
                    (cout << " 0 ");
            }
            cout << endl;
        }
        cout << endl;
    }

    int rhombus_pattern()
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n - i; j++)
            {
                cout << "  ";
            }
            for (int j = 1; j <= n; j++)
            {
                cout << " * ";
            }
            cout << endl;
        }
        cout << endl;
    }

    int number_pattern()
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n - i; j++)
            {
                cout << " ";
            }
            for (int j = 1; j <= i; j++)
            {
                cout << j << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    int palidrome_pattern()
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n - i; j++)
            {
                cout << "   ";
            }
            int t = i;
            for (int j = 1; j <= i; j++)
            {
                cout << " " << t << " ";
                t--;
            }
            t = 2;
            for (int j = 2; j <= i; j++)
            {
                cout << " " << t << " ";
                t++;
            }
            cout << endl;
        }
        cout << endl;
    }

    int mountain_pattern()
    {
        for (int i = 1; i <= 3; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if ((i + j) % 4 == 0)
                {
                    cout << " * ";
                }
                else if (i == 2 && (i + j) % 4 == 2)
                {
                    cout << " * ";
                }
                else
                {
                    cout << "   ";
                }
            }
            cout << endl;
        }
        cout << endl;
    }
};
int main()
{
    pattern obj;
    obj.getdata();
    obj.ractangle_pattern();
    obj.hollow_pattern();
    obj.inverted_half_pyramid();
    obj.inverted_half_pyramid_180();
    obj.half_pyramid_numbers();
    obj.butterfly();
    obj.dimond_pattern();
    obj.inverted_pattern();
    obj.pattern_0_1();
    obj.rhombus_pattern();
    obj.number_pattern();
    obj.palidrome_pattern();
    obj.mountain_pattern();
}
