#include <iostream>
using namespace std;

class Car {
public:
    string brand;      // public

private:
    string model;      // private

protected:
    int year;          // protected

public:
    // Constructor
    Car(string brand, string model, int year) {
        this->brand = brand;
        this->model = model;
        this->year = year;
    }

    // Destructor
    ~Car() {
        cout << "Car object destroyed" << endl;
    }

    // Getter & Setter for private and protected
    void setModel(string m) { model = m; }
    string getModel() { return model; }

    void setYear(int y) { year = y; }
    int getYear() { return year; }

    // Print all details
    void printDetails() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    // Object creation
    Car car1("Toyota", "Corolla", 2020);

    cout << "--- Initial Car Details ---" << endl;
    car1.printDetails();

    // Update model and year using setter
    car1.setModel("Camry");
    car1.setYear(2022);

    cout << "\n--- Updated Car Details ---" << endl;
    car1.printDetails();

    return 0;
}
