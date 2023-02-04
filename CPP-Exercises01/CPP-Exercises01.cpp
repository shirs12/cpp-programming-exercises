#include <iostream>
using namespace std;

int main()
{
    // 13
    int nGrade;

    cout << "Enter your grade: " << endl;
    cin >> nGrade;

    if ((nGrade >= 70) && (nGrade <= 100))
    {
        cout << "Congradulations! You passed the test!" << endl;
    }
    else if ((nGrade < 70) && (nGrade >= 0))
    {
        cout << "You need to take another test" << endl;
    } 
    else
    {
        cout << "Gradenust be grater than 0" << endl;
    }

    // 14
    int nGradeNum;

    cout << "Enter your grade: " << endl;
    cin >> nGradeNum;

    if ((nGradeNum <= 55) && (nGradeNum >= 0))
    {
        cout << "Faild" << endl;
    }
    else if ((nGradeNum <= 69) && (nGradeNum >= 56))
    {
        cout << "Almost enough" << endl;
    }
    else if ((nGradeNum <= 79) && (nGradeNum >= 70))
    {
        cout << "Passable" << endl;
    }
    else if ((nGradeNum <= 89) && (nGradeNum >= 80))
    {
        cout << "Good" << endl;
    }
    else if ((nGradeNum <= 94) && (nGradeNum >= 90))
    {
        cout << "Very good" << endl;
    }
    else if ((nGradeNum <= 100) && (nGradeNum >= 95))
    {
        cout << "Excellent" << endl;
    }
    else
    {
        cout << "Grade must be grater than 0" << endl;
    }

    // 15
    int nShape;

    int nHeight;
    int nWidth;

    int nSide;
    int nBase;

    int nRadius;

    const double PI = 3.14159265359;

    cout << "Enter\n1. for rectangle\n2. for square\n3. for circle\n4. for triangle" << endl;
    cin >> nShape;

    switch (nShape)
    {
    case(1):
        cout << "Enter height: " << endl;
        cin >> nHeight;
        cout << "Enter Width: " << endl;
        cin >> nWidth;

        cout << "area: " << nHeight * nWidth << endl;

        break;

    case(2):
        cout << "Enter side length: " << endl;
        cin >> nSide;

        cout << "area: " << nSide * nSide << endl;

        break;

    case(3):
        cout << "Enter radius: " << endl;
        cin >> nRadius;

        cout << "area: " << PI * nRadius * nRadius << endl;

        break;

    case(4):
        cout << "Enter height: " << endl;
        cin >> nHeight;
        cout << "Enter base: " << endl;
        cin >> nBase;

        cout << "area: " << (nHeight * nBase) / 2 << endl;

        break;

    default:
        break;
    }

    // 16
    char cCharacter;

    int nFirstGrade;
    int nSecondGrade;
    int nThirdGrade;

    cout << "Enter\n'E' for English\n'G' for Geography\n'M' for Math" << endl;
    cin >> cCharacter;

    if (int(cCharacter) != 69 && int(cCharacter) != 71 && int(cCharacter) != 77)
    {
        cout << "You must enter only one of the letters obove" << endl;
    }
    else {
        switch (int(cCharacter))
        {
        case(69):
            cout << "Enter grades: " << endl;
            cin >> nFirstGrade;
            cin >> nSecondGrade;

            if (nFirstGrade < 57 || nSecondGrade < 57)
            {
                cout << "You haven't passed" << endl;
            }
            else
            {
                cout << "You've passed" << endl;
            }
            break;

        case(71):
            cout << "Enter grades: " << endl;
            cin >> nFirstGrade;
            cin >> nSecondGrade;
            cin >> nThirdGrade;

            if (((nFirstGrade > 56 && nSecondGrade > 56) ||
                (nFirstGrade > 56 && nThirdGrade > 56) ||
                (nSecondGrade > 56 && nThirdGrade > 56)) &&
                (((nFirstGrade + nSecondGrade + nThirdGrade) / 3) > 60))
            {
                cout << "You've passed" << endl;
            }
            else
            {
                cout << "You haven't passed" << endl;
            }
            break;

        case(77):
            cout << "Enter grades: " << endl;
            cin >> nFirstGrade;
            cin >> nSecondGrade;

            if ((nFirstGrade > 56 && nSecondGrade > 56) && 
                (nFirstGrade > 70 || nSecondGrade > 70))
            {
                cout << "You've passed" << endl;
            }
            else
            {
                cout << "You haven't passed" << endl;
            }
            break;


        default:
            break;
        }
    }






}
