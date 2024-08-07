#include "ServiceStation.h"

namespace VDMS {

    // The function adds a service request to the queue
void ServiceStation::addToQueue(Vehicle* vehicle, ServiceType serviceType) {
    ServiceRequest request = { vehicle, serviceType };
    serviceQueue.push(request);
}

// The function processes the queue of services
void ServiceStation::processQueue() {
    std::cout << "Processing the service queue:\n";
    while (!serviceQueue.empty()) {
        ServiceRequest request = serviceQueue.top();
        serviceQueue.pop();
        // Performing the service on the vehicle
        std::cout << "Processing vehicle: " << *request.vehicle << " with service: ";
        switch (request.serviceType) {
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
}

// The function displays the queue order by priority
void ServiceStation::displayQueue() const {
    // Copy the queue for display
    std::priority_queue<ServiceRequest> tempQueue = serviceQueue;
    std::cout << "Queue order (based on priority):\n";
    while (!tempQueue.empty()) {
        ServiceRequest request = tempQueue.top();
        tempQueue.pop();

        std::cout << "Vehicle: " << *request.vehicle << " - Service: ";
        switch (request.serviceType) {
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
}
    
// The function prints the types of services in order of priority
void ServiceStation::printServicePriority() const {
    std::cout << "Service priorities in the queue:\n";
    std::priority_queue<ServiceRequest> tempQueue = serviceQueue;
    while (!tempQueue.empty()) {
        ServiceRequest request = tempQueue.top();
        tempQueue.pop();

        std::cout << "Service: ";
        switch (request.serviceType) {
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
}

} // namespace VDMS
