// Problem Statement:

// আপনাকে একটি Car ক্লাস বানাতে হবে, যাতে তিনটি variable থাকে:

// brand → public

// model → private

// year → protected

// Car ক্লাসে করা কাজ:

// Constructor ব্যবহার করে brand এবং model initialize করতে হবে।

// Destructor-এ program শেষ হওয়ার সময় "Thank you for using Car Management System" print করতে হবে।

// Getter method বানাতে হবে model এর জন্য → getModel()

// Setter method বানাতে হবে model update করার জন্য → setModel(string m)

// Setter method বানাতে হবে year update করার জন্য → setYear(string y)

// Method বানাতে হবে printDetails() → সব variable print করবে

// Input/Output:

// Input:

// প্রথম line: initial brand model

// দ্বিতীয় line: update model এবং year

// Output:

// Initial details print করুন

// Getter method দিয়ে model print করুন

// Update details print করুন

// Program শেষ হলে destructor message print হবে

// Input Format
// Toyota Ex2020
// SS-2000 2024

// Output Format
// Initial Details:
// Model: Ex2020, Year: , Brand: Toyota
// Ex2020
// Updated Details:
// Model: SS-2000, Year: 2024, Brand: Toyota
// Thank you for using Car Management System

// Constraints

// Brand, model → strings (max 50 char)

// Year → string বা integer

// Sample Input 1
// Honda Civic
// City 2022

// Sample Output 1
// Initial Details:
// Model: Civic, Year: , Brand: Honda
// Civic
// Updated Details:
// Model: City, Year: 2022, Brand: Honda
// Thank you for using Car Management System



#include <bits/stdc++.h>
using namespace std;
class Car
{
private:
    string model;

protected:
    string year;

public:
    string brand;

    Car(string model, string brand)
    {
        this->model = model;
        this->brand = brand;
        cout << "Model " << model << " " << "years " << year << "Brands " << brand << "\n";
    }
    ~Car()
    {
        cout << "Thank you for using Car Management System\n";
    }
    string getters(){
        return model;
    }
    void setters(string m, string y){
        model = m;
        year = y;
    }

    void prints(){
         cout << "Model " << model << " " << "years " << year << "Brands " << brand << "\n";
    }
};
int main()
{
    cout << "Initial Details:\n";
    Car cars("Toyota","Ex2020");
    cout << cars.getters() << "\n";
    cars.setters("ss-2000","2024");
    cout << "Update details\n";
    cars.prints();
}