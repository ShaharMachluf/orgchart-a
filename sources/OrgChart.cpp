#include "OrgChart.hpp"
#include <string>
#include <iostream>

using namespace std;

namespace ariel{
    OrgChart::OrgChart(){}
    OrgChart& OrgChart::add_root(string s){return *this;}
    OrgChart& OrgChart::add_sub(string sup, string inf){return *this;}
    int* OrgChart::begin(){
        return this->x;
    }
    int* OrgChart::end(){
        return this->x;
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