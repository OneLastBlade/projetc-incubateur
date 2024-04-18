#ifndef INCUBATOR_H
#define INCUBATOR_H

#include <bits/stdc++.h>
#include "Startup.h"
#include "Mentor.h"
#include <list>

class incubator{
    private:
    std::list<Startup> startups;
    std::list<Mentor> mentors;

    public:
    incubator();
    ~incubator(){
        startups.clear();
        mentors.clear();
    }

    void ajoutStartup(Startup s){
        startups.push_back(s);
    }
    
    void ajoutMentor(Mentor m){
        mentors.push_back(m);
    }
    int startupSize(){
        return startups.size();
    }
    int mentorSize(){
        return mentors.size();
    }
    Startup getStartup(int i){
        if (i < startups.size()) {
            auto it = startups.begin();
            std::advance(it, i);
            return *it;
        } 
    }
    Mentor getMentor(int i){
         if (i < mentors.size()) {
            auto it = mentors.begin();
            std::advance(it, i);
            return *it;
        } 
    }
};
#endif