#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int circlearea();
int trianglearea();
int rectanglearea();
int squarearea();
int factorial();
int maxandmin();
int calcu();
int grade();
int add()
{
    int a, b;
    cout << "Enter first number";
    cin >> a;
    cout << "Enter second number";
    cin >> b;
    int x = a + b;
    cout << x << "\n";
    return 0;
}
int subtract()
{
    int a, b;
    cout << "Enter first number";
    cin >> a;
    cout << "Enter second number";
    cin >> b;
    int x = a - b;
    cout << x << "\n";
    return 0;
}
int divide()
{
    int a, b;
    cout << "Enter first number";
    cin >> a;
    cout << "Enter second number";
    cin >> b;
    int x = a / b;
    cout << x << "\n";
    return 0;
}
int multiply()
{
    int a, b;
    cout << "Enter first number";
    cin >> a;
    cout << "Enter second number";
    cin >> b;
    int x = a * b;
    cout << x << "\n";
    return 0;
}
int remainder()
{
    int a, b;
    cout << "Enter first number";
    cin >> a;
    cout << "Enter second number";
    cin >> b;
    int x = a % b;
    cout << x << "\n";
    return 0;
}
int power()
{
    int a, b;
    cout << "Enter first number";
    cin >> a;
    cout << "Enter second number";
    cin >> b;
    int x = pow(a, b);
    cout << x << "\n";
    return 0;
}
int main()

{
h:
    cout << "WELCOME TO CALCULATOR"
         << "\n";
    cout << "---------------------"
         << "\n";
    int x;
    cout << "Enter 1 for addition"
         << "\n";
    cout << "Enter 2 for subtraction"
         << "\n";
    cout << "Enter 3 for division"
         << "\n";
    cout << "Enter 4 for multiplication"
         << "\n";
    cout << "Enter 5 for remainder"
         << "\n";
    cout << "Enter 6 for power"
         << "\n";
    cout << "Enter 7 to do more calculations"
         << "\n";
    cout << "Enter your choice = ";
    cin >> x;
    switch (x)
    {
    case 1:
    {
        add();
        break;
    }
    case 2:
    {
        subtract();
        break;
    }
    case 3:
    {
        divide();
        break;
    }
    case 4:
    {
        multiply();
        break;
    }
    case 5:
    {
        remainder();
        break;
    }
    case 6:
    {
        power();
        break;
    }
    case 7:
    {
        calcu();
        break;
    }
    default:
    {
        cout << "Wrong input"
             << "\n";
        break;
    }
    }
    string a;
    cout << "Do you want to continue"
         << "\n";
    cin >> a;
    if ((a == "yes") || (a == "Yes") || (a == "YES"))
    {
        goto h;
    }
    else
    {
    }
    return 0;
}

int area()
{
m:
    int x;
    cout << "Enter 1 to find area of circle"
         << "\n";
    cout << "Enter 2 to find area of rectangle"
         << "\n";
    cout << "Enter 3 to find area of square"
         << "\n";
    cout << "Enter 4 to find area of triangle"
         << "\n";
    cin >> x;
    switch (x)
    {
    case 1:
    {
        circlearea();
        break;
    }
    case 2:
    {
        rectanglearea();
        break;
    }
    case 3:
    {
        squarearea();
        break;
    }
    case 4:
    {
        trianglearea();
        break;
    }
    default:
    {
        cout << "WRONG INPUT";
    }
    }
    string a;
    cout << "Do you want do continue (Yes / No )";
    cin >> a;
    if (a == "yes" || a == "Yes" || a == "YES")
    {
        goto m;
    }
    else
    {
    }
}
int circlearea()
{
    float a;
    cout << "Enter radius of circle";
    cin >> a;
    float x = 3.14 * a * a;
    cout << x << "\n";
    return 0;
}
int trianglearea()
{
    float a, b;
    cout << "Enter base of triangle";
    cin >> a;
    cout << "Enter height of triangle";
    cin >> b;
    float x = 0.5 * a * b;
    cout << x << "\n";
    return 0;
}
int rectanglearea()
{
    float a, b;
    cout << "Enter length of rectangle";
    cin >> a;
    cout << "Enter breadth of rectangle";
    cin >> b;
    float x = a * b;
    cout << x << "\n";
    return 0;
}
int squarearea()
{
    float a;
    cout << "Enter side of square";
    cin >> a;
    float x = a * a;
    cout << x << "\n";
    return 0;
}
int factorial()
{
    cout << "WELCOME TO CALCULATE FACTORIAL"
         << "\n";
    cout << "+------------------------------+"
         << "\n";
    int x, a = 1;
    cout << "Enter a number"
         << "\n";
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        a = i * a;
    }
    cout << a << "\n";
}
int maxandmin()
{
    cout << "WELCOME TO FIND YOUR MAXIMUM AND MINIMUM MARKS"
         << "\n";
    cout << "+----------------------------------------------+"
         << "\n";
    int a = 0, b = 0, c = 0, d = 0, e = 0;
    cout << "Enter your 5 subject marks";
    cin >> a >> b >> c >> d >> e;
    if (a >= b && a >= c && a >= d && a >= e)
    {
        cout << "Max =" << a << "\n";

        if (b <= c && b <= d && b <= e)
        {
            cout << "Min =" << b;
        }
        else if (c <= b && c <= d && c <= e)
        {
            cout << "Min = " << c;
        }
        else if (d <= b && d <= c && d <= e)
        {
            cout << "Min =" << d;
        }
        else
        {
            cout << "Min = " << e;
        }
    }
    else if (b >= a && b >= c && b >= d && b >= e)
    {
        cout << "Max = " << b << "\n";

        if (a <= c && a <= d && a <= e)
        {
            cout << "Min =" << a;
        }
        else if (c <= a && c <= d && c <= e)
        {
            cout << "Min = " << c;
        }
        else if (d <= a && d <= c && d <= e)
        {
            cout << "Min =" << d;
        }
        else
        {
            cout << "Min = " << e;
        }
    }
    else if (c >= a && c >= b && c <= d && c >= e)
    {
        cout << "Max = " << c << "\n";

        if (a <= b && a <= d && a <= e)
        {
            cout << "Min =" << a;
        }
        else if (b <= a && b <= d && b <= e)
        {
            cout << "Min = " << b;
        }
        else if (d <= a && d <= b && d <= e)
        {
            cout << "Min =" << d;
        }
        else
        {
            cout << "Min = " << e;
        }
    }
    else if (d >= a && d >= b && d >= c && d >= e)
    {
        cout << "Max = " << d << "\n";

        if (a <= b && a <= c && a <= e)
        {
            cout << "Min =" << a;
        }
        else if (b <= a && b <= c && b <= e)
        {
            cout << "Min = " << b;
        }
        else if (c <= a && c <= b && c <= e)
        {
            cout << "Min =" << c;
        }
        else
        {
            cout << "Min = " << e;
        }
    }
    else
    {
        cout << "Max = " << e << "\n";

        if (a <= b && a <= c && a <= d)
        {
            cout << "Min =" << a;
        }
        else if (b <= a && b <= c && b <= d)
        {
            cout << "Min = " << b;
        }
        else if (c <= a && c <= b && c <= d)
        {
            cout << "Min =" << c;
        }
        else
        {
            cout << "Min = " << d;
        }
    }
    return 0;
}
int grade()
{
    cout << "WELCOME TO FIND YOUR GRADE"
         << "\n";
    cout << "---------------------------"
         << "\n";
    int x;
    cout << "Enter your overall marks";
    cin >> x;
    if (x >= 91 && x <= 100)
    {
        cout << "AA";
    }
    else if (x >= 81 && x <= 90)
    {
        cout << "AB";
    }
    else if (x >= 71 && x <= 80)
    {
        cout << "BB";
    }
    else if (x >= 61 && x <= 70)
    {
        cout << "BC";
    }
    else if (x >= 51 && x <= 60)
    {
        cout << "CD";
    }
    else if (x >= 41 && x <= 50)
    {
        cout << "DD";
    }
    else
    {
        cout << "FAIL";
    }
    return 0;
}
int calcu()
{
    cout << "WELCOME TO DO MORE CALCULATIONS"
         << "\n";
    cout << "-------------------------------"
         << "\n";
y:
    int x;
    cout << "Press 1 to find area "
         << "\n";
    cout << "Press 2 calculate factorial "
         << "\n";
    cout << "Press 3 to calculate maximum and minimum"
         << "\n";
    cout << "Press 4 to calculate grade"
         << "\n";
    cin >> x;
    switch (x)
    {
    case 1:
    {
        area();
        break;
    }
    case 2:
    {
        factorial();
        break;
    }
    case 3:
    {
        maxandmin();
        break;
    }
    case 4:
    {
        grade();
        break;
    }
    default:
    {
        cout << "Wrong input";
        break;
    }
    }
    string a;
    cout << "\nYes to continue and No to go to the main menu"
         << "\n";
    cin >> a;
    if ((a == "yes") || (a == "Yes") || (a == "YES"))
    {
        goto y;
    }
    else
    {
        main();
    }
}
