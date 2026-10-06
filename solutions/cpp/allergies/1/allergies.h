#pragma once
#include <string>
#include <unordered_set>
#include <unordered_map>


namespace allergies {
    
    class allergy_test {
        private:
        int test = 0;
        public:
        bool is_allergic_to(std::string allergy);
        allergy_test(int num);
        std::unordered_set<std::string> get_allergies();
        int get_test();
        
    };

// TODO: add your solution here

}  // namespace allergies
