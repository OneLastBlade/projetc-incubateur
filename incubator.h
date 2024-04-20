#ifndef INCUBATOR_H
#define INCUBATOR_H

#include <typeinfo>
#include <bits/stdc++.h>
#include "Startup.h"
#include "Mentor.h"
#include <list>
#include "Resource.h"
#include "ResourceHumaine.h"
#include "ResourceMateriel.h"
#include "Reservation.h"
#include "Events.h"


class incubator{
    private:
    std::list<Startup> startups;
    std::list<Mentor> mentors;
    std::vector <Resource*> resources;
    std::vector <Reservation> reservations;

    public:
    incubator(){}
    ~incubator(){
        startups.clear();
        mentors.clear();

        for(auto r:resources){
            delete r;
        }
        resources.clear();
    }

    bool addReservation(Reservation r){
        if(!checkForReservation(r.dateEvent(),r.getResource())){
            reservations.push_back(r);
            return true;
        }else return false;
    }

    void deleteReservation(int i ){
        if(reservations.begin()+i<= reservations.end()){
        reservations.erase(reservations.begin()+i);
        }
    }
    bool checkForReservation(Date d , Resource* r){
        
        for(auto p:reservations){

            if(p.isInDateRange(d)){
                if(p.getResource()==r) return true;
            }
        }
        return false;
    }
    void addResource(Resource& r){
        Resource* res;
        if(typeid(r)==typeid(Resource)) res = new Resource(r);
        else if(typeid(r)==typeid(ResourceMateriel)) res = new ResourceMateriel(static_cast<const ResourceMateriel&>(r));
        else if(typeid(r)==typeid(ResourceHumaine)) res = new ResourceHumaine(static_cast<const ResourceHumaine&>(r));
        resources.push_back(res);
    }

    void deleteResource(int i){
        resources.erase(resources.begin()+i);
    }

    void allocateResource(){
        // here you should call the class reservation 
    }

    void deallocateResource(){
        // here you should delete a reservation 
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
