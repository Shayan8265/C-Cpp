/*
CH-230-A
a9_p6.cpp
Shayan Khan
skhan01@jacobs-university.de
*/

#include <iostream>
using namespace std;

int myfirst(int arr1[], int n)
{
    int x = 0;
    int v;
    for (int i = 1; i <= n; i++)
    {
        //checking if it is divisible by 2 and
        //a positive number
        if (arr1[i] % 2 == 0 && arr1[i] >= 0)
        {
            v = arr1[i];
            x = 1;
            //returning v everytime the condition is met
            break;
        }
    }
    int w;
    //making sure v is only returned when 
    //the condition in the above if is met
    if (x == 1)
    {
        w = v;
    }
    else
        w = -1;
    return w;
}

double myfirst(double arr2[], int n)
{
    int x = 0;
    double v;
    for (int i = 1; i <= n; i++)
    {
        //b is the fractional part of 
        //the number(if any)
        double a = arr2[i];
        double b = a - (int)a;
        //making sure b(fractioal part) is 0
        //and it is a negative number
        if (arr2[i] < 0 && b == 0)
        {
            v = arr2[i];
            x = 1;
            break;
        }
    }
    double w;
    if (x == 1)
    {
        w = v;
    }
    else
        w = -1.1;
    return w;
}

char myfirst(char arr3[], int n)
{
    int x = 0;
    char v;
    for (int i = 1; i <= n; i++)
    {
        //condition for consonant using ASCII
        if (((arr3[i] > 65 && arr3[i] < 90) || 
        (arr3[i] > 97 && arr3[i] < 123)) && 
        arr3[i] != 69 && arr3[i] != 73 && 
        arr3[i] != 79 && arr3[i] != 85 && 
        arr3[i] != 101 && arr3[i] != 105 && 
        arr3[i] != 111 && arr3[i] != 117)
        {
            v = arr3[i];
            x = 1;
            break;
        }
    }
    char w;
    if (x == 1)
    {
        w = v;
    }
    else
        w = '0';
    return w;
}

int main()
{
    int n, i;
    //reding n
    cout << "no. of elements in the array: ";
    cin >> n;
    //making different arrays 
    //to call different functions
    int arr1[n];
    double arr2[n];
    char arr3[n];
    //taking input for all elements of each array
    cout << "please input " << n << " int elements" << endl;
    for (i = 1; i <= n; i++)
    {
        cin >> arr1[i];
    }
    cout << "please input " << n << " double elements" << endl;
    for (i = 1; i <= n; i++)
    {
        cin >> arr2[i];
    }
    cout << "please input " << n << " char elements" << endl;
    for (i = 1; i <= n; i++)
    {
        cin >> arr3[i];
    }
    //calling overloaded functions 
    int aa = myfirst(arr1, n);
    double bb = myfirst(arr2, n);
    char cc = myfirst(arr3, n);
    //printing the returned value
    cout << aa << endl;
    cout << bb << endl;
    cout << cc << endl;
    return 0;
}