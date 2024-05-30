#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

class SimpleCalc
{
protected:
    float a, b;

public:
    void setData(float x, float y)
    {
        a = x;
        b = y;
    }

    float addNum()
    {
        return a + b;
    }

    float subNum()
    {
        return a - b;
    }

    float mulNum()
    {
        return a * b;
    }

    float divNum()
    {
        return a / b;
    }

    void display_simple()
    {
        cout << "Addition of numbers  " << a << " and " << b << " is " << addNum() << endl;
        cout << "Subtraction of numbers  " << a << " and " << b << " is " << subNum() << endl;
        cout << "Multiplication of numbers  " << a << " and " << b << " is " << mulNum() << endl;
        cout << "Division of numbers  " << a << " and " << b << " is " << divNum() << endl;
    }
};

class SicentificCalc : public SimpleCalc
{
public:
    float sin_fun()
    {
        cout << "sin"
             << "(" << a << ")"
             << " and "
             << " sin"
             << "(" << b << ")"
             << " = " << sin(a) << " , " << sin(b) << endl;
    }

    float cos_fun()
    {
        cout << "cos"
             << "(" << a << ")"
             << " and "
             << " cos"
             << "(" << b << ")"
             << " = " << cos(a) << " , " << cos(b) << endl;
    }

    float cosec_fun()
    {
        cout << "cosec"
             << "(" << a << ")"
             << " and "
             << " cosec"
             << "(" << b << ")"
             << " = " << (1 / (sin(a))) << " , " << (1 / (sin(b))) << endl;
    }

    float sec_fun()
    {
        cout << "sec"
             << "(" << a << ")"
             << " and "
             << " sec"
             << "(" << b << ")"
             << " = " << (1 / (cos(a))) << " , " << (1 / (cos(b))) << endl;
    }

    float tan_fun()
    {
        cout << "tan"
             << "(" << a << ")"
             << " and "
             << " tan"
             << "(" << b << ")"
             << " = " << tan(a) << " , " << tan(b) << endl;
    }

    float cot_fun()
    {
        cout << "cot"
             << "(" << a << ")"
             << " and "
             << " cot"
             << "(" << b << ")"
             << " = " << (1 / (tan(a))) << " , " << (1 / (tan(b))) << endl;
    }

    void display_sicentific()
    {
        sin_fun();
        cos_fun();
        tan_fun();
        cosec_fun();
        sec_fun();
        cot_fun();
    }
};

class HybridClac : public SicentificCalc
{
public:
    void display(float c, float d)
    {
        setData(c, d);
        cout << " Here are your results: " << endl;

        display_simple();
        display_sicentific();
    }
};

int main()
{
    int n;
    cout << "How many operations you want to perform " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the numbers: ";
        float w, z;
        cin >> w >> z;

        HybridClac x;
        x.display(w, z);
        cout<<endl<<endl;
    }

    cout<<"Thank you! "<<endl;
    return 0;
}