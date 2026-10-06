#include "allergies.h"

namespace allergies {

const std::string allergy_list[] = {
    "eggs",
    "peanuts",
    "shellfish",
    "strawberries",
    "tomatoes",
    "chocolate",
    "pollen",
    "cats"
};

allergy_test::allergy_test(int num) {
    test = num;
}

int allergy_test::get_test() {
    return test;
}

bool allergy_test::is_allergic_to(std::string allergy) {

    for (int i = 0; i < 8; i++) {

        if (allergy_list[i] == allergy) {

            int allergy_value = 1 << i;

            return (test & allergy_value) != 0;
        }
    }

    return false;
}

std::unordered_set<std::string> allergy_test::get_allergies() {

    std::unordered_set<std::string> result;

    for (int i = 0; i < 8; i++) {

        int allergy_value = 1 << i;

        if ((test & allergy_value) != 0) {
            result.insert(allergy_list[i]);
        }
    }

    return result;
}

}  // namespace allergies