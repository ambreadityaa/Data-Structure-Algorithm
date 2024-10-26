#include <bits/stdc++.h>
using namespace std;

void pattern_1()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void pattern_2()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i >= j)
            {

                cout << "*";
            }
        }
        cout << "\n";
    }
}

void pattern_3()
{
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            if (i >= j)
            {

                cout << j;
            }
        }
        cout << "\n";
    }
}

void pattern_4()
{
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            if (i >= j)
            {

                cout << i;
            }
        }
        cout << "\n";
    }
}

void pattern_5()
{
    for (int i = 5; i > 0; i--)
    {
        for (int j = 1; j < 6; j++)
        {
            if (j <= i)
            {

                cout << "*";
            }
        }
        cout << "\n";
    }
}

void pattern_6()

{
    for (int i = 5; i > 0; i--)
    {
        for (int j = 1; j < 6; j++)
        {
            if (j <= i)
            {

                cout << j;
            }
        }
        cout << "\n";
    }
}

void pattern_7()

{
    int n = 1;
    int l = 5;
    int u = 5;
    for (int i = 0; i < 5; i++)
    {

        for (int j = 1; j < 10; j++)
        {
            if (j >= l && j <= u)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        l = --l;
        u = u + n;
        cout << l << " value of l \n";

        // cout<<u <<" value of u \n";
        cout << "\n";
    }
}

void pattern_8()
{
    int n = 1;
    int l = 0;
    int u = 10;
    for (int i = 0; i < 5; i++)
    {

        for (int j = 1; j < 10; j++)
        {
            if (j > l && j < u)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        l = ++l;
        u = --u;
        // cout << l<<" value of l \n";

        // cout<<u <<" value of u \n";
        cout << "\n";
    }
}

void pattern_9()
{
    pattern_7();
    pattern_8();
}

void pattern_10()
{

    int n = 1;
    for (int i = 1; i < 11; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            if (i < 6 && j <= n)
            {
                cout << "*";
            }
            if (i > 5 && j < n)
            {
                cout << "*";
            }
        }
        cout << "\n";
        if (i >= 5)
        {
            --n;
        }
        else
            ++n;
    }
}

void pattern_11()
{
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
        {

            if (j <= i)
            {
                if (j % 2 == 1)
                {
                    cout << "1";
                }
                else
                {
                    cout << "0";
                }
            }
        }
        cout << "\n";
    }
}

void pattern_12()
{
}

void pattern_13()
{
    int n=1;
    for(int i=1;i<6;i++){
        for(int  j=1;j<6;j++){
            
            if(j<=i){
                cout<<n<<" ";
                n++;
            }
            
        }
        cout<<"\n";
    }
}

void pattern_14(){
    
    for(int i=1;i<6;i++){
        for(int j=1;j<6;j++){
            if(j<=i){
                cout<<char((64+j));
            }
        }
        cout<<"\n";
    }
    
}

void pattern_15(){
    
}
int main()
{

    int choice;
    cout << "Enter Choice of Patter\n";
    cin >> choice;

    if (choice == 1)
    {
        pattern_1();
    }
    else if (choice == 2)
    {
        pattern_2();
    }
    else if (choice == 3)
    {
        pattern_3();
    }
    else if (choice == 4)
    {
        pattern_4();
    }
    else if (choice == 5)
    {
        pattern_5();
    }
    else if (choice == 6)
    {
        pattern_6();
    }
    else if (choice == 7)
    {
        pattern_7();
    }
    else if (choice == 8)
    {
        pattern_8();
    }
    else if (choice == 9)
    {
        pattern_9();
    }
    else if (choice == 10)
    {
        pattern_10();
    }
    else if (choice == 11)
    {
        pattern_11();
    }
    else if (choice == 12)
    {
        pattern_12();
    }
    else if (choice == 13)
    {
        pattern_13();
    }
    else if (choice == 14)
    {
        pattern_14();
    }
     else if (choice == 15)
    {
        pattern_15();
    }


    return 0;
}