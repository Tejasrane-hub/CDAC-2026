#include <iostream>
using namespace std;
int main()
{
    //step 1 & 2;


    double arr[3][3];

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "\t      Room1"   "\tRoom2"   "\tRoom3" <<endl;
    for(int i=0; i<3; i++)
    {
        cout << "Floor "<< i+1 << " :   \t";
        for(int j=0; j<3; j++)
        {
            cout << arr[i][j] << " \t";
        }
        cout << endl;
    }


    // step 3


    double hottestRoom = 0; 
    int floor = 0, room = 0;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(arr[i][j] > hottestRoom)
            {
                hottestRoom = arr[i][j];
                floor = i+1;
                room = j+1;
            }
        }
    }
    cout << "Hottest Room  : " << "Floor : "<< floor << "  Room : "<< room << " -> " << hottestRoom <<" C" <<endl;

    
    // step 4


    double f1;
    for(int j=0; j<3; j++)                //Average Floor 1
    {
        f1 = f1 + arr[0][j];
    }
    double avg1 = f1/3;

    double f2;
    for(int j=0; j<3; j++)               //Average Floor 2
    {
        f2 = f2 + arr[1][j];
    }
    double avg2 = f2/3;

    double f3;
    for(int j=0; j<3; j++)               //Average Floor 3
    {            
        f3 = f3 + arr[2][j];
    }
    double avg3 = f3/3;

    if(avg1 > avg2 && avg2 > avg3)
    {
        cout << "Hottest Floor :    Floor 1 " << "( Avg : "<< avg1 <<"C"<< ")" << endl;
    }
    else if(avg2 > avg3)
    {
        cout << "Hottest Floor :    Floor 2 " << "( Avg : "<< avg2 <<"C"<< ")" << endl;
    }
    else
    {
         cout << "Hottest Floor :    Floor 3 " << "( Avg : "<< avg3 <<"C"<< ")" << endl;
    }


    // step 5

    int warning = 0;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(arr[i][j] >= 30)
            {
                warning++;
            }
        }
    }
    cout << "Rooms at WARNING or above : " << warning;
}