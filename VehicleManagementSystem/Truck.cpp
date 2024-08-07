#include "Truck.h"

namespace VDMS {

    Truck::Truck(const std::string& vin, const std::string& make, const std::string& model, int year, double capacity)
        : Vehicle(vin, make, model, year), loadCapacity(capacity) {}

    void Truck::displayInfo() const {
        Vehicle::displayInfo();
        std::cout << "Load capacity: " << loadCapacity << " kg" << std::endl;
    }

    void Truck::service(ServiceType service) {
        std::cout << "Performing service on truck: ";
        switch (service) {
        case ServiceType::OilChange:
            std::cout << "Oil Change";
            break;
        case ServiceType::Inspection:
            std::cout << "Inspection";
            break;
        case ServiceType::TireRotation:
            std::cout << "Tire Rotation";
            break;
        }
        std::cout << std::endl;
    }

} // namespace VDMS
