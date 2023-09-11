// PointerPractice2.9.11.23.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string userName = "";
    int someArray[10] = { 3, 6, 9, 12, 15, 18, 21, 24, 27, 30 };

    int* pLocation0 = &someArray[0];

    for (int i = 0; i < 10; i++) {
        //cout << someArray + i << " = " << *(someArray + i) << "\n\n";

        cout << pLocation0 << " = " << *pLocation0 << endl;
        pLocation0++;
    }

    cout << endl << endl;

    char someChars[10] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j' };
    
    char* pSomeChars = someChars;

    cout << "pSomeChars = " << pSomeChars << endl;

    char* pLocation3 = &someChars[3];
    char* pLocation0 = &someChars[0];





    







}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
