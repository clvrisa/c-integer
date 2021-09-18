//Assignment 5.1
//Given the above scenario, write a program which reads one natural number and executes the above steps as long as c0 remains different from 1.

#include <iostream>
using namespace std;

int main()
{
    int integer, steps = 0;

    cout << "Enter a non negative number greater than 0: ";
    cin >> integer;

    do
    {
        while (integer != 1)
        {
            if (integer <= 0)
                {
                    cout << "Invalid input" << endl;
                    cout << "Enter a non negative number greater than 0: ";
                    cin >> integer;
                }
             else if (integer % 2 !=0)
             {
                 integer = integer * 3 + 1;
                 cout << integer;
                 steps++;
             }
             else if (integer % 2 ==0)
             {
                 integer = integer /2;
                 cout << integer;
                 steps++;
             }

            cout << endl;

         }
             integer++;
             cin.clear();
             cin.ignore();
             cout << "Steps= " << steps << endl;
    }
   while (integer = 1);

    return 0;
}
/* output number 1

Enter a non negative number greater than 0: 15
46
23
70
35
106
53
160
80
40
20
10
5
16
8
4
2
1

Steps= 17
/*

/* output number 2

Enter a non negative number greater than 0: 0
Invalid input
Enter a non negative number greater than 0: -16
Invalid input
Enter a non negative number greater than 0: 16

8
4
2
1
Steps= 4

*/
