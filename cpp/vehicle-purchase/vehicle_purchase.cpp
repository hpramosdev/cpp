#include "vehicle_purchase.h"
#include <iostream>


namespace vehicle_purchase {

    // needs_license determines whether a license is needed to drive a type of vehicle. Only "car" and "truck" require a license.
    bool needs_license(std::string kind){
        // TODO: Return true if you need a license for that kind of vehicle.
        if (kind == "car" || kind == "truck") {
            return true;
        } else {
            return false;
        }
        
    }

    // choose_vehicle recommends a vehicle for selection. It always recommends the vehicle that comes first in lexicographical order.
    std::string choose_vehicle(std::string option1, std::string option2) {
        // TODO: Return the final decision in a sentence.
        int result = option1.compare(option2);
        std::string message;
        
        switch (result) {            
            case -1:
                message = option1 + " is clearly the better choice.";
            break;

            case 1:
                message = option2 + " is clearly the better choice.";
            break;

        }
        return message;
    }

    // calculate_resell_price calculates how much a vehicle can resell for at a certain age.
    double calculate_resell_price(double original_price, double age) {
        // TODO: Return the age-corrected resell price.
        double resell_price;

        if (age < 3) {
            resell_price = original_price * (1 - 0.8 / 100);
        } else if (age >= 10) {
            resell_price = original_price * (1 - 0.5 / 100);
        } else {
            resell_price = original_price * (1 - 0.7 / 100);
        }

        return  resell_price;
    }

}  // namespace vehicle_purchase