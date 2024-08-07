#include "Motorcycle.h"

namespace VDMS {

    Motorcycle::Motorcycle(const std::string& vin, const std::string& make, const std::string& model, int year, bool sidecar)
        : Vehicle(vin, make, model, year), hasSidecar(sidecar) {}

    void Motorcycle::displayInfo() const {
        Vehicle::displayInfo();
        std::cout << "Has sidecar: " << (hasSidecar ? "Yes" : "No") << std::endl;
    }

    void Motorcycle::service(ServiceType service) {
        std::cout << "Performing service on motorcycle: ";
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
