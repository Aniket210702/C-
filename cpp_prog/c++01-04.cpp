#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
class Vehicle{
	public:
		string brand;
		string model;
		int year;
		Vehicle(string brand,string model,int year){
			this->brand=brand;
			this->model=model;
			this->year=year;
		}
		virtual void display_info(){
			cout<<"Brand: "<<brand<<endl;
			cout<<"Model: "<<model<<endl;
			cout<<"Year: "<<year<<endl;
		}
};
class Car: public Vehicle{
	public:
		int num_doors;
		string fuel_type;
		Car(string brand,string model,int year,int num_doors,string fuel_type):Vehicle(brand,model,year){
			this->num_doors=num_doors;
			this->fuel_type=fuel_type;
		}
		void display_info(){
			Vehicle::display_info();
			cout<<"Number of doors in the car: "<<num_doors<<endl;
			cout<<"Fuel type of car: "<<fuel_type<<endl;
		}
};
class Truck: public Vehicle{
	public:
		int payload_capacity;
		int num_axles;
		Truck(string brand,string model,int year,int payload_capacity,int num_axles):Vehicle(brand,model,year){
			this->payload_capacity=payload_capacity;
			this->num_axles=num_axles;
		}
		void display_info(){
			Vehicle::display_info();
			cout<<"Payload Capacity: "<<payload_capacity<<endl;
			cout<<"Number of axles: "<<num_axles<<endl;
		}
};
int main(){
	vector<Vehicle*>vehicles;
	vehicles.push_back(new Car("Toyota","Corolla",2022,4,"Petrol"));
	vehicles.push_back(new Car("Mercedes-Benz","C-class",2022,4,"Petrol/Diesel"));
	vehicles.push_back(new Truck("Tata","F-150",2023,2,4));
	vehicles.push_back(new Truck("Mahindra","Supro",2023,2,4));
	for(Vehicle* vehicle:vehicles){
		vehicle->display_info();
		cout<<"-----------------------"<<endl;
	}
	return 0;
}
