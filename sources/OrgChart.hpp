#include <string>
#include <vector>

namespace ariel{

    class OrgChart{
        std::vector <std::string> vec{"hi","hi","hi","hi","hi","hi"};
        int *x;
        public:
        OrgChart();
        OrgChart& add_root(std::string s);
        OrgChart& add_sub(std::string sup, std::string inf);

        int* begin();
        int* end();
        std::string* begin_level_order();
        std::string* end_level_order();

        std::string* begin_reverse_order();
        std::string* reverse_order();

        std::string* begin_preorder();
        std::string* end_preorder();

        friend std::ostream& operator<<(std::ostream& output, const OrgChart& other);
    };
}