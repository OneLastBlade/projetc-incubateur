#include <iostream>
#include "Events.h"
using namespace std;

int main()
{

        Date d(22,3,2023) , d2(24,3,2023);
        string name = "DateName";
        Events::addEvent(name,name,d);

        //cout<<d<<endl;
        Events::displayAllEvents();

    
    
    return 0;
}
