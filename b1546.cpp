#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    int numOfSubject = 0;
    cin >> numOfSubject;
    int grades[numOfSubject]{0};
    double newGrade[numOfSubject]{0};
    cout.setf(ios_base::fixed);
    for (int i = 0; i < numOfSubject; i++)
    {
        cin >> grades[i];
    }
    double greatestVal = *max_element(grades, grades + numOfSubject);
    for (int i = 0; i < numOfSubject; i++)
    {
        newGrade[i] = grades[i] / greatestVal * 100;
    }
    double result = 0;
    for (int i = 0; i < numOfSubject; i++)
    {
        result += newGrade[i];
    }
    result /= numOfSubject;
    cout << result << endl;
}