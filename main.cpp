#include <iostream>
#include "Events.h"
#include "incubator.h"
#include <fstream>
using namespace std;

int main()
{

        //Date d(22,3,2023) , d2(24,3,2023);
        string name = "DateName";
        //Events::addEvent(name,name,d);
        //Projet p;
        incubator b;
        Startup s;
//        cin>>s;

        //b.ajoutStartup(s);
        //b.saveToFile("startup_data.txt");
        //b.ajoutStartup(s);
       // b.loadFromFile("startup_data.txt");

        cout<< b.startupSize();


        //cin >>p;
        //cout<<"-----------------";
        //cout<<p;
        //cout<<d<<endl;
        //Events::displayAllEvents();



    return 0;
}
