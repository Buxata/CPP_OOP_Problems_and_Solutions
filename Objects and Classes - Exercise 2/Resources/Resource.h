#ifndef RESOURCE_H
#define RESOURCE_H

#include <ostream>
#include <string>
#include <sstream>
#include <ostream>

#include "ResourceType.h"

namespace SoftUni{

    class Resource
    {
    private:
        int _id;
        ResourceType _type;
        std::string _link;

    public:
        Resource() {}

        Resource(int id, ResourceType type, std::string link)
            : _id(id)
            , _type(type)
            , _link(link){}

        ~Resource();
        int getID() const {
            return this->_id;
        }

        ResourceType getType() const{
            return this->_type;
        }

        std::string getLink(){
            return this->_link;
        }

        bool operator <(const Resource& other){
            return this->_id <other._id;
        }

    };


    std::ostream& operator<<(std::ostream& out, const Resource& r){
        return out << r.getID() << " " << r.getType() << " " << r.getLink();
    }

    std::istream& operator>>(std::istream& in, Resource& r){
        int id;
        std::string typeString;
        std::string link;
        in >> id >> typeString >> link;

        ResourceType type;
        if( typeString== "Presentation"){
            type = ResourceType::PRESENTATION;
        }
        else if( typeString== "Demo"){
            type = ResourceType::DEMO;
        }
        else if( typeString== "Video"){
            type = ResourceType::VIDEO;
        }

        r = Resource(id,type,link);
    }

}

#endif // !RESOURCE_H 
