#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

namespace VDMS {

    class Car : public Vehicle {
    private:
        int numDoors;

    public:
        // Constructor for the Car class
        Car(const std::string& vin, const std::string& make, const std::string& model, int year, int doors);
        // Function to display information about the vehicle, which is implemented using an override
        void displayInfo() const override;
        // A function for the vehicle service, which is implemented via override
        void service(ServiceType service) override;
    };

} // namespace VDMS

#endif // CAR_H
#pragma once
