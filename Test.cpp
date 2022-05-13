#include "doctest.h"
#include "sources/OrgChart.hpp"

using namespace ariel;

#include <string>
#include <algorithm>
#include <sstream>
using namespace std;

/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */
string nospaces(string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}

TEST_CASE("Add"){
	OrgChart organization;
	CHECK_THROWS(organization.add_sub("ceo", "sub")); //can't add sub without root
	CHECK_NOTHROW(organization.add_root("ceo"));
	CHECK_NOTHROW(organization.add_sub("ceo", "sub"));
	CHECK_THROWS(organization.add_sub("not_real", "new")); //can't add sub to a node that doesn't exist
	CHECK_NOTHROW(organization.add_root("new_ceo")); //can switch root
	CHECK_NOTHROW(organization.add_sub("ceo", "ceo_sub")); //can have more than one sub
	CHECK_NOTHROW(organization.add_sub("sub", "sub_sub")); //a sub can have a sub
}

TEST_CASE("Level Order"){
	OrgChart organization2;
	organization2.add_root("CEO")
    .add_sub("CEO", "CTO")         // Now the CTO is subordinate to the CEO
    .add_sub("CEO", "CFO")         // Now the CFO is subordinate to the CEO
    .add_sub("CEO", "COO")         // Now the COO is subordinate to the CEO
    .add_sub("CTO", "VP_SW") // Now the VP Software is subordinate to the CTO
    .add_sub("COO", "VP_BI");  
	auto it = organization2.begin_level_order();
	CHECK((*it) == "CEO");
	it++;
	CHECK((*it) == "CTO");
	it++;
	CHECK((*it) == "CFO");
	it++;
	CHECK((*it) == "COO");
	it++;
	CHECK((*it) == "VP_SW");
	it++;
	CHECK((*it) == "VP_BI");
}

TEST_CASE("Revers level order"){
	OrgChart organization3;
	organization3.add_root("CEO")
    .add_sub("CEO", "CTO")         // Now the CTO is subordinate to the CEO
    .add_sub("CEO", "CFO")         // Now the CFO is subordinate to the CEO
    .add_sub("CEO", "COO")         // Now the COO is subordinate to the CEO
    .add_sub("CTO", "VP_SW") // Now the VP Software is subordinate to the CTO
    .add_sub("COO", "VP_BI");  
	auto it = organization3.begin_reverse_order();
	CHECK((*it) == "VP_SW");
	it++;
	CHECK((*it) == "VP_BI");
	it++;
	CHECK((*it) == "CTO");
	it++;
	CHECK((*it) == "CFO");
	it++;
	CHECK((*it) == "COO");
	it++;
	CHECK((*it) == "CEO");
}

TEST_CASE("Pre-order"){
	OrgChart organization4;
	organization4.add_root("CEO")
    .add_sub("CEO", "CTO")         // Now the CTO is subordinate to the CEO
    .add_sub("CEO", "CFO")         // Now the CFO is subordinate to the CEO
    .add_sub("CEO", "COO")         // Now the COO is subordinate to the CEO
    .add_sub("CTO", "VP_SW") // Now the VP Software is subordinate to the CTO
    .add_sub("COO", "VP_BI");  
	auto it=organization4.begin_preorder();
	CHECK((*it) == "CEO");
	it++;
	CHECK((*it) == "CTO");
	it++;
	CHECK((*it) == "VP_SW");
	it++;
	CHECK((*it) == "CFO");
	it++;
	CHECK((*it) == "COO");
	it++;
	CHECK((*it) == "VP_BI");
}