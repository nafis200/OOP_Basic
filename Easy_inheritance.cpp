// Problem Statement

// তোমাকে একটি Animal Management System বানাতে হবে। এখানে:

// Animal (Base class)

// Protected ভ্যারিয়েবল: name

// Constructor: Animal(string name) → যখন কল হবে তখন প্রিন্ট করবে:

// Creating Animal: <name>

// Method:

// speak() → ডিফল্ট আউটপুট "Some sound"

// Dog (Derived class from Animal)

// Constructor: Dog(string name) → কল হলে প্রিন্ট করবে:

// Creating Dog: <name>

// Method:

// speak() → আউটপুট "Woof"

// Cat (Derived class from Animal)

// Constructor: Cat(string name) → কল হলে প্রিন্ট করবে:

// Creating Cat: <name>

// Method:

// speak() → আউটপুট "Meow"

// Input

// প্রথম লাইনে একটি পূর্ণসংখ্যা N (1 ≤ N ≤ 100)।
// পরবর্তী N লাইনে প্রতিটি লাইনে দুটি ইনপুট থাকবে:

// প্রাণীর ধরন (Dog অথবা Cat)

// প্রাণীর নাম (string, স্পেস ছাড়া, সর্বোচ্চ দৈর্ঘ্য 20)

// Output

// প্রথমে অবজেক্ট তৈরি হলে constructor message দেখাতে হবে।
// তারপর সেই প্রাণীর শব্দ প্রিন্ট করতে হবে।

// Example Input
// 2
// Dog Tommy
// Cat Kitty

// Example Output
// Creating Animal: Tommy
// Creating Dog: Tommy
// Tommy: Woof
// Creating Animal: Kitty
// Creating Cat: Kitty
// Kitty: Meow

// Explanation

// প্রথম প্রাণী → Dog Tommy

// Dog এর constructor কল করার সময় আগে base class Animal constructor কল হয়। তাই:

// Creating Animal: Tommy
// Creating Dog: Tommy

// তারপর speak() কল করলে:

// Tommy: Woof

// দ্বিতীয় প্রাণী → Cat Kitty

// Base constructor আগে কল হয়:

// Creating Animal: Kitty
// Creating Cat: Kitty

// তারপর speak() কল করলে:

// Kitty: Meow

#include <bits/stdc++.h>
using namespace std;

class Animal
{
protected:
    string name;

public:
    Animal(string name)
    {
        this->name = name;
        cout << "Creating Animal: " << name << "\n";
    }
    void speak()
    {
        cout << "Some sound: " << name << "\n";
    }
};

class Dog : private Animal
{
public:
    Dog(string name) : Animal(name)
    {
        cout << "Creating Dog: " << name << "\n";
    }
    void speak()
    {
        cout << "Woof: " << name << "\n";
        Animal::speak();
    }
};

class Cat : public Animal
{
public:
    Cat(string name) : Animal(name)
    {
        cout << "Creating Cat: " << name << "\n";
    }
    void speak()
    {
        cout << "Mewo: " << name << "\n";
    }
};

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        string type, name;
        cin >> type >> name;
        if (type == "Dog")
        {
            Dog d(name);
            d.speak();
            // d.Animal::speak();
        }
        else
        {
            Cat c(name);
            c.speak();
        }
    }
}