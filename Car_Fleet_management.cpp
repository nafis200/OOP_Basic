// Problem – Car Fleet Management System (Brain Exercise Style, Modified & Clear)
// প্রশ্ন:

// একটি Car ক্লাস বানান যা Car Fleet Management করতে সাহায্য করবে।

// Class Variables:

// brand → public → Car-এর brand

// model → private → Car-এর model

// year → protected → Car-এর manufacturing year

// price → private → Car-এর price

// Class Methods / Functionalities:

// Constructor:

// Brand, model, year, price initialize করবে।

// Destructor:

// Program শেষ হওয়ার সময় print করতে হবে:
// "Car object destroyed"

// Getter Methods:

// getModel() → private variable model return করবে।

// getPrice() → private variable price return করবে।

// Setter Methods:

// setModel(string m) → private variable model update করবে।

// setPrice(float p) → private variable price update করবে।

// applyDiscount(float percent):

// Price update করবে:
// price = price - (price * percent / 100)

// printDetails():

// সব variable print করবে।
// Format:

// Brand: <brand>, Model: <model>, Year: <year>, Price: <price>

// Main Function Requirements (Step by Step)

// Car objects তৈরি করুন, constructor ব্যবহার করে প্রথমে value store হবে।

// উদাহরণ:

// Car 1 → Brand: Toyota, Model: Corolla, Year: 2020, Price: 20000

// Car 2 → Brand: Honda, Model: Civic, Year: 2021, Price: 22000

// Car 3 → Brand: Ford, Model: Mustang, Year: 2019, Price: 30000

// Car objects একটি vector বা array-এ সংরক্ষণ করুন।

// প্রতিটি Car object-এর price-এ ১০% discount apply করুন।

// applyDiscount(10) call করুন।

// প্রতিটি Car object-এর details print করুন।

// printDetails() call করুন।

// Program শেষ হলে Destructor automatically call হবে এবং message print করবে।

// Example Output
// Brand: Toyota, Model: Corolla, Year: 2020, Price: 18000
// Brand: Honda, Model: Civic, Year: 2021, Price: 19800
// Brand: Ford, Model: Mustang, Year: 2019, Price: 27000
// Car object destroyed
// Car object destroyed
// Car object destroyed

// Test Case Explanation (Step by Step)

// প্রথমে ৩টি Car object তৈরি হয় constructor দিয়ে:

// Toyota Corolla 2020 $20000

// Honda Civic 2021 $22000

// Ford Mustang 2019 $30000

// প্রতিটি Car object-এর price update হয় applyDiscount(10) দিয়ে:

// 20000 → 18000

// 22000 → 19800

// 30000 → 27000

// প্রতিটি Car object-এর updated details print হয় printDetails() দিয়ে।

// Program শেষ হলে Destructor automatically call হয় এবং "Car object destroyed" message print হয় প্রতিটি Car object-এর জন্য।

#include <bits/stdc++.h>
using namespace std;

class Car
{
private:
    string model;
    int price;

protected:
    string year;

public:
    string brand;

    Car(string brand, string model, string year, int price)
    {
        this->brand = brand;
        this->model = model;
        this->year = year;
        this->price = price;
    }

    string getModel()
    {
        return model;
    }
    int getPrice()
    {
        return price;
    }

    void setModel(string m)
    {
        model = m;
    }

    void setPrice(int p)
    {
        price = price - ((price * p) / 100);
    }

    void printDetails()
    {
        cout << "Brand , " << brand << " Model, " << model << " " << "Year , " << year << " " << "Price , " << price << "\n";
    }

    // ~Car()
    // {
    //     cout << "Car object destroyed\n";
    // }
};

int main()
{
    vector<Car> cars;
    cars.push_back(Car("Toyata", "Corola", "2020", 20000));
    cars.push_back(Car("Honda", "Civic", "2021", 22000));
    cars.push_back(Car("Ford", "Mustang", "2019", 30000));
    for (int i = 0; i < (int)cars.size(); i++)
    {
        cars[i].printDetails();
    }
    for (int i = 0; i < (int)cars.size(); i++)
    {
        cars[i].setPrice(10);
    }
    for (int i = 0; i < (int)cars.size(); i++)
    {
        cars[i].printDetails();
    }
}