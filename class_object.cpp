

// Problem – Car Management System (Brain Exercise Style, Modified & Clear)

// প্রশ্ন:

// একটি Car ক্লাস বানান।

// Car ক্লাসে ৩টি variable declare করুন:

// brand → public

// model → private

// year → protected

// Constructor ব্যবহার করে brand এবং model initialize করুন।

// Destructor-এ একটি মেসেজ print করুন: "Thank you for using Car Management System"

// Car ক্লাসে একটি method বানান যা private variable (model) এর মান return করবে।

// Car ক্লাসে আরেকটি method বানান যা private variable (model) update করবে।

// main function-এ Car object তৈরি করুন।

// সব variable প্রিন্ট করার জন্য method ব্যবহার করুন।

// Private variable update করুন এবং আবার প্রিন্ট করুন।

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
    }
    ~Car()
    {
        cout << "Thank you for using Car Management System\n";
    }
    string getters(){
        return model;
    }
    void setters(string m){
        model = m;
    }

    void prints(){
        cout << model << " " << year << " " << brand << "\n";
    }
};
int main()
{
    Car cars("Ex20200", "toyata");
    cout << cars.getters() << "\n";
    cars.setters("ss-2000");
    cout << cars.getters() << "\n";
    cars.prints();
}