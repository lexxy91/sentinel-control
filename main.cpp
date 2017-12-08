#include <iostream>

using namespace std;

int main()
{
    int age;
    int ageTotal = 0;
    int numOfCand = 0;

    cout << "Enter the first person's age or -1 to exit" <<endl;
        cin >> age;

    while(age != -1){

        ageTotal = ageTotal + age;
         numOfCand++;

            cout << "Enter another age of the candidate \n ";
            cin >> age;
    }

    cout << "The number of candidates entered is \n: " << numOfCand << endl;
    cout << "and the average is: " << ageTotal/numOfCand;
    return 0;
}
