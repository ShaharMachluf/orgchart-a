namespace ariel{
    class Iterator{
        public:
        Iterator();
    };
    class OrgChart{
        public:
        Iterator i;
        // OrgChart();
        OrgChart& add_root(std::string s);
        OrgChart& add_sub(string sup, string inf);
        int* begin();
        int *end();
        string* begin_level_order();
        string* end_level_order();
        string* begin_reverse_order();
        string* reverse_order();
        string* begin_preorder();
        string* end_preorder();
        friend std::ostream& operator<<(std::ostream& output, const OrgChart& other);
    };
}