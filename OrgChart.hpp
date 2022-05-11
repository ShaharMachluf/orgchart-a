namespace ariel{
    class OrgChart{
        public:
        // OrgChart();
        OrgChart& add_root(std::string s);
        OrgChart& add_sub(string sup, string inf);
        auto begin_level_order();
        auto end_level_order();
        auto begin_reverse_order();
        auto reverse_order();
        auto begin_preorder();
        auto end_preorder();
        friend std::ostream& operator<<(std::ostream& output, const OrgChart& other);
    };
}