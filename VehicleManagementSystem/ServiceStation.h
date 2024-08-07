//#ifndef SERVICE_STATION_H
//#define SERVICE_STATION_H
//
//#include <vector>
//#include <queue>
//#include <iostream>
//#include "Vehicle.h"
//
//namespace VDMS {
//
//    class ServiceStation {
//    private:
//        struct ServiceRequest {
//            Vehicle* vehicle;
//            ServiceType serviceType;
//
//            // ����� ������ ����� ����� �-priority_queue
//            bool operator<(const ServiceRequest& other) const {
//                // ���� �-OilChange ��� ����, Inspection �����, TireRotation �����
//                return serviceType < other.serviceType;
//            }
//        };
//
//        std::priority_queue<ServiceRequest> serviceQueue; // ��� ����� ��������
//
//    public:
//        void addToQueue(Vehicle* vehicle, ServiceType serviceType);
//        void processQueue();
//        void displayQueue() const; // ���� ���� ������
//    };
//
//} // namespace VDMS
//
//#endif // SERVICE_STATION_H


#ifndef SERVICE_STATION_H
#define SERVICE_STATION_H

#include <vector>
#include <queue>
#include <iostream>
#include "Vehicle.h"

namespace VDMS {

    class ServiceStation {
    private:
        struct ServiceRequest {
            Vehicle* vehicle;
            ServiceType serviceType;

            // Define comparison for using priority_queue
            bool operator<(const ServiceRequest& other) const {
                return serviceType < other.serviceType;
            }
        };

        std::priority_queue<ServiceRequest> serviceQueue; // Preferred queue for services

    public:
        void addToQueue(Vehicle* vehicle, ServiceType serviceType);
        void processQueue();
        void displayQueue() const; // Display the print queue
        void printServicePriority() const; // Display the priority of the services in the queue
    };

} // namespace VDMS

#endif // MOTORCYCLE_H