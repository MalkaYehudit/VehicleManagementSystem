#include "Car.h"

namespace VDMS {

    Car::Car(const std::string& vin, const std::string& make, const std::string& model, int year, int doors)
        : Vehicle(vin, make, model, year), numDoors(doors) {}
    // The function performs a vehicle-specific service
    void Car::displayInfo() const {
        Vehicle::displayInfo();
        std::cout << "Number of doors: " << numDoors << std::endl;
    }

    // The function performs a vehicle-specific service
    void Car::service(ServiceType service) {
        std::cout << "Performing service on car: ";
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
