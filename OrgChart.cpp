#include "OrgChart.hpp"
#include <string>
#include <iostream>

using namespace std;

namespace ariel{
    // OrgChart::OrgChart(){}
    OrgChart& OrgChart::add_root(string s){}
    OrgChart& OrgChart::add_sub(string sup, string inf){}
    int OrgChart::begin(){}
    auto OrgChart::begin_level_order(){}
    auto OrgChart::end_level_order(){}
    auto OrgChart::begin_reverse_order(){}
    auto OrgChart::reverse_order(){}
    auto OrgChart::begin_preorder(){}
    auto OrgChart::end_preorder(){}
    ostream& operator<<(std::ostream& output, const OrgChart& other){return output;}
}