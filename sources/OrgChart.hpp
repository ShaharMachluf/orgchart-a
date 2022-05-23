#include <string>
#include <vector>
#include <queue>
#include <stack>

namespace ariel{
    struct Tree{
        std::string data;
        std::vector<Tree*> children;
    };

    class OrgChart{
        struct Tree *root;
        std::vector <std::string> vec{"hi","hi","hi","hi","hi","hi"};
        int *x;
        public:
        OrgChart();
        OrgChart& add_root(std::string s);
        OrgChart& add_sub(std::string sup, std::string inf);

        std::string* begin();
        std::string* end();
        std::string* begin_level_order();
        std::string* end_level_order();

        std::string* begin_reverse_order();
        std::string* reverse_order();

        std::string* begin_preorder();
        std::string* end_preorder();

        friend std::ostream& operator<<(std::ostream& output, const OrgChart& other);

        class Iterator{
            struct Tree *ptr;
            std::string order;
            std::queue<struct Tree*> q;
            std::stack<struct Tree*> s;
            void preorder(struct Tree* node);
            public:
            Iterator(OrgChart o ,std::string order);
            Iterator& operator++();
            std::string operator*();
            bool operator==(Iterator &other);
            bool operator!=(Iterator &other);
            Iterator& operator=(Iterator &other);
        };
    };
}