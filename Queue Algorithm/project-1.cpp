// This is about Queue programming

// This is header section
#include <iostream>
#include <fstream>
#include <limits>
#include <time.h>
#include <stdio.h>
#include <math.h>
#include <cctype>
#include <stdbool.h>
#if _win32
#include <windows.h>
#else
#include <unistd.h>
#endif
// ignoring std:: function system
using namespace std;
// define the box capacity with CAPACITY variable
#define CAPACITY 5
// global variable for queue
int front = 0, last = -1, itemCount = 0;

// box for store something
int box[CAPACITY];

// Version detect
int cleanTerminal()
{
#if _win32
    return system("cls");

#elif __APPLE__
    return system("clear");

#endif
}
// box full check
bool isFull()
{
    if (itemCount == CAPACITY)
    {
        return true;
    }
    return false;
}
// box empty check
bool isEmpty()
{
    if (itemCount == 0)
    {
        return true;
    }
    return false;
}

// adding new value to box
void addToBox()

{

    if (isFull())
    {
        cout << "Box is full , please try again later " << endl;
        return;
    }
    int item;
    cout << "Enter the value which you wanna store : " << endl;
    cin >> item;
    last = (last + 1) % CAPACITY;
    box[last] = item;
    cout << item << " Added succesfully , Redirect to Menu" << endl;
    sleep(1);

    itemCount++;
}
// removing value from box
void removeFromBox()
{
    if (isEmpty())
    {
        cout << "Box is empty , Please add something for remove " << endl;
        return;
    }
    box[front] = 0;
    front = (front + 1) % CAPACITY;
    itemCount--;
}

// display all the value
void display()
{
    cleanTerminal();
    cout << "Displaying all the value :" << endl;
    int tem = front;
    for (int i = 1; i <= CAPACITY; i++)
    {
        cout << box[tem] << " ";
        tem = (tem + 1) % CAPACITY;
    }
    cout << endl;
}
void Menu()
{
    int value, temp;
    cleanTerminal();
    cout << "|`````````````````````````````````|" << endl;
    cout << "|         M A MURAD               |" << endl;
    cout << "|        221-15-6047              |" << endl;
    cout << "|_________________________________|" << endl;
    cout << "| ";
    cout << "   1 : Add Value                |" << endl;
    cout << "| ";
    cout << "   2 : Remove Value             |" << endl;
    cout << "| ";
    cout << "   3 : Display Values           |" << endl;
    cout << "| ";
    cout << "   4 : Exit                     |" << endl;
    cout << "|,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,|" << endl;
}

int main()
{
again:
    char value, valueEnter;
    Menu();
    cout << endl
         << " \tEnter a value(1 ~ 4)  \n";
    cin >> value;
    // Conditional statement
    if (value == '1')
    {
        if (isFull())
        {
            cleanTerminal();
            cout << "Box is full , please try again later " << endl;
            cout << "please wait ";
            cout << " . ";
            sleep(1);
            cout << " . ";
            sleep(1);
            cout << " . ";
            cout << endl;

            sleep(3);
            goto again;
        }
        addToBox();
        goto again;
    }
    else if (value == '2')
    {
        if (isEmpty())
        {
            cleanTerminal();
            cout << "Box is Empty , please enter value first " << endl;
            cout << "please wait , redirect to Menu" << endl;
            sleep(3);
            goto again;
        }
        removeFromBox();
        goto again;
    }
    else if (value == '3')
    {
        display();
        cout << "1 for Break\nANY KEY for again " << endl;
        cin >> valueEnter;
        if (valueEnter == '1')
        {
            return 0;
        }
        else
        {
            goto again;
        }
    }
    else if (value == '4')
    {
        cout << "Please Wait...." << endl;

        sleep(4);
        cleanTerminal();
        return 0;
    }
    else
    {
        goto again;
    }

    return 0;
}