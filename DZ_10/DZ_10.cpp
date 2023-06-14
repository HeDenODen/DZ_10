#include <iostream>
using namespace std;

int main()
{
    //1
    int count = 0;
    for (int i = 100; i <= 999; i++) {
        if (i % 10 == (i / 10) % 10 || i % 10 == (i / 100) % 10 || (i / 10) % 10 == (i / 100) % 10) {
            count += 1;
        }
    }
    cout << "Result = " << count << "\n\n";


    //2
    int count1 = 0;
    for (int i = 100; i <= 999; i++) {
        if (i % 10 != (i/10)%10 && i % 10 != (i / 100) % 10 && (i / 10) % 10 != (i / 100) % 10) {
            count1 += 1;
        }
    }
    cout << "Result = " << count1 << "\n\n";
    

    //3
    int number, digit, i, newNumber;
    cout << "Enter your number: ";
    cin >> number;
    i = 0;
    newNumber = 0;
    while (number > 0)
    {
        digit = number % 10;
        if ((digit != 3) && (digit != 6))
        {
            newNumber = newNumber + digit * pow(10, i);
            i++;
        }

        number = number / 10;
    }
    cout << "Your new number: " << newNumber << "\n\n";


    //4
    int A, B;
    cout << "Enter number: ";
    cin >> A;
    for (int i = A - 1; i > 1; i--) {
        B = i;
        if (A % (B * B) == 0 && A % (B * B * B) != 0) {
            cout << B << "\n";
        }
    }
    

    //5
    int A1;
    cout << "Enter number: ";
    cin >> A1;
    int sum1 = 0;
    while (A1 > 0) {
        sum1 += A1 % 10;
        A1 = A1 / 10;
    }
    if (pow(sum1, 3) == pow(A1, 2)) {
        cout << "True" << "\n\n";
    }
    else {
        cout << "False" << "\n\n";
    }
    
    //6
    int num2;
    cout << "Enter number: ";
    cin >> num2;
    for (int i = 1; i <= num2; i++) {
        if (num2 % i == 0) {
            cout << i << "\n";
        }
    }

    
    //7
    int number1;
    cout << "Enter number1: ";
    cin >> number1;
    int number2;
    cout << "Enter number2: ";
    cin >> number2;
    int l;
    if (number1 > number2) {
        l = number2;
    }
    else {
        l = number1;
    }
    for (int i = 1; i <= l; i++) {
        if (number1 % i == 0 && number2 % i == 0) {
            cout << i << "\n";
        }
    }


}
