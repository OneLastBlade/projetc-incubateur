#ifndef INCUBATOR_H
#define INCUBATOR_H

#include <bits/stdc++.h>
#include "Startup.h"
#include "Mentor.h"
#include <list>
#include "Resource.h"

class incubator{
    private:
    std::list<Startup> startups;
    std::list<Mentor> mentors;
    std::vector <Resource*> resources;

    public:
    incubator(){}
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

    void ajoutProjetToStartup(int i , const Projet p){
        auto it = startups.begin();
        std::advance(it, i);
        it->addProject(p);
    }


    Startup getStartup(int i){
        if (i < startups.size()) {
            auto it = startups.begin();
            std::advance(it, i);
            return *it;
        } 
    }
    std::list<Startup> getAllStartups(){
        return startups;
    }
    Mentor getMentor(int i){
         if (i < mentors.size()) {
            auto it = mentors.begin();
            std::advance(it, i);
            return *it;
        } 
    }
    std::list<Mentor> getAllMentors(){
        return mentors;
    }

    void deleteMentorPos(int i){
        auto it = mentors.begin(); 
        std::advance(it, i);
        if(it!= mentors.end()){
            mentors.erase(it);
        }
    }
    void deleteStartupPos(int i){
        auto it = startups.begin(); 
        std::advance(it, i);
        if(it!= startups.end()){
            startups.erase(it);
        }
    }
};
#endif
