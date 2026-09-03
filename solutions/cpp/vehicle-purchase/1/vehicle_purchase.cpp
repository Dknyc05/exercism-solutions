#include "vehicle_purchase.h"
#include <cctype>

namespace vehicle_purchase {

// needs_license determines whether a license is needed to drive a type of
// vehicle. Only "car" and "truck" require a license.
bool needs_license(std::string kind) {
    // TODO: Return true if you need a license for that kind of vehicle.
    if (kind == "car" || kind == "truck") {
        return true;
    }
    return false;
}

// choose_vehicle recommends a vehicle for selection. It always recommends the
// vehicle that comes first in lexicographical order.
std::string choose_vehicle(std::string option1, std::string option2) {
    // TODO: Return the final decision in a sentence.
    std::string car = option1;
    //std::cout << option1[0] << ">=" << option2[0] << std::endl;
    std::string firstLetter1 = option1;
    std::string firstLetter2 = option2;
    int i = 0;
    int j = 0;
    
    while(isalpha(firstLetter1[i]) == 0 && isalpha(firstLetter1[j]) == 0 ){
        i++;
        j++;
    }
    if (option2[j] < option1[i]){
        //std::cout << "inside";
        car = option2;
    }
    //std::cout << car + "is clearly the better choice.";
    
    return (car + " is clearly the better choice.");
}

// calculate_resell_price calculates how much a vehicle can resell for at a
// certain age.
double calculate_resell_price(double original_price, double age) {
    // TODO: Return the age-corrected resell price.
    double discount = 0;
    if (age >= 10) {
        discount = 0.5;
    }
    else if (age >= 3) {
        discount = 0.7;
    }
    else {
        discount = 0.8;
    }
    return original_price* discount;
}

}  // namespace vehicle_purchase
