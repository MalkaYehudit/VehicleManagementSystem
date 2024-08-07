#pragma once
#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include "Vehicle.h"

namespace VDMS {

    class Motorcycle : public Vehicle {
    private:
        bool hasSidecar;

    public:
        // Constructor for motorcycle class
        Motorcycle(const std::string& vin, const std::string& make, const std::string& model, int year, bool sidecar);
        // A function to display information about the motorcycle, which is implemented using an override
        void displayInfo() const override;
        // Function for the motorcycle service, which is implemented via override
        void service(ServiceType service) override;
    };

} // namespace VDMS

#endif // MOTORCYCLE_H
