#include "raindrops.h"

namespace raindrops {

// TODO: add your solution here
    std::string convert(int number){
        std::string ret;
    
        if (number % 3 == 0){
        ret += "Pling";
        }
        if(number % 5 == 0){
            ret += "Plang";
        }
        if (number % 7 == 0){
            ret += "Plong";
        }

        if(ret.empty()){
            ret = std::to_string(number);
        }
                
        return ret;
    }

}  // namespace raindrops
