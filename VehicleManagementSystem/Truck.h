#pragma once
#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

namespace VDMS {

    class Truck : public Vehicle {
    private:
        double loadCapacity;

    public:
        // Constructor for truck class
        Truck(const std::string& vin, const std::string& make, const std::string& model, int year, double capacity);
        // A function to display information about the truck, which is implemented using an override
        void displayInfo() const override;
        // Function for the truck service, which is implemented via override
        void service(ServiceType service) override;
    };

} // namespace VDMS

#endif // TRUCK_H
