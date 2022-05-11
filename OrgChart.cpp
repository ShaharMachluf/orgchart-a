#include "OrgChart.hpp"
#include <string>
#include <iostream>

using namespace std;

namespace ariel{
    // OrgChart::OrgChart(){}
    OrgChart& OrgChart::add_root(string s){}
    OrgChart& OrgChart::add_sub(string sup, string inf){}
    int* OrgChart::begin(){}
    int* OrgChart::end(){}
    string* OrgChart::begin_level_order(){}
    string* OrgChart::end_level_order(){}
    string* OrgChart::begin_reverse_order(){}
    string* OrgChart::reverse_order(){}
    string* OrgChart::begin_preorder(){}
    string* OrgChart::end_preorder(){}
    ostream& operator<<(std::ostream& output, const OrgChart& other){return output;}
}