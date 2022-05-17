#include "OrgChart.hpp"
#include <string>
#include <iostream>

using namespace std;

namespace ariel{
    OrgChart::Iterator::Iterator(OrgChart o){
        this->ptr = o.root;
    }
    
    OrgChart::Iterator& OrgChart::Iterator::operator++(){
        return *this;
    }
    
    string OrgChart::Iterator::operator*(){
        return this->ptr->data;
    }
    
    bool OrgChart::Iterator::operator==(Iterator &other){
        return (other.ptr == this->ptr);
    }
    
    bool OrgChart::Iterator::operator!=(Iterator &other){
        return !(*this == other);
    }
    
    OrgChart::OrgChart(){
        this->root = new struct Tree;
        (*this->root).data = "";
        (*this->root).children.push_back(NULL);
    }

    OrgChart& OrgChart::add_root(string s){
        (*this->root).data = s;
        return *this;
    }

    OrgChart& OrgChart::add_sub(string sup, string inf){
        // for(auto it = this->begin_level_order(); it != this->end_level_order(); ++it){
        //     if(*it == sup){
        //         struct Tree *curr = new struct Tree;
        //         curr->data = inf;
        //         curr->children.push_back(NULL);
        //         if(it.children[0] == NULL){
        //             it.children[0] = curr;
        //         }else{
        //             it.children.push_back(curr);
        //         }
        //         return *this;
        //     }
        // }
        // throw("%s doesn't exist", sup);
        return *this;
    }
    string* OrgChart::begin(){
        return &(this->vec[0]);
    }
    string* OrgChart::end(){
        return &(this->vec[0]);
    }
    string* OrgChart::begin_level_order(){
        return &(this->vec[0]);
    }
    string* OrgChart::end_level_order(){
        return &(this->vec[0]);
    }
    string* OrgChart::begin_reverse_order(){
        return &(this->vec[0]);
    }
    string* OrgChart::reverse_order(){
        return &(this->vec[0]);
    }
    string* OrgChart::begin_preorder(){
        return &(this->vec[0]);
    }
    string* OrgChart::end_preorder(){
        return &(this->vec[0]);
    }
    ostream& operator<<(std::ostream& output, const OrgChart& other){return output;}
}