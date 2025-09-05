// Problem Statement

// তোমাকে একটি প্রাণী (Animal) সিস্টেম তৈরি করতে হবে যেখানে Inheritance ব্যবহার করা হবে।

// তিনটি ক্লাস থাকবে:

// Animal (Base class)

// ভ্যারিয়েবল: name (string)

// মেথড:

// speak() → সব প্রাণীর জন্য ডিফল্ট আউটপুট "Some sound"

// Dog (Derived class from Animal)

// কন্সট্রাক্টরে name সেট করবে

// মেথড override করবে:

// speak() → আউটপুট হবে "Woof"

// Cat (Derived class from Animal)

// কন্সট্রাক্টরে name সেট করবে

// মেথড override করবে:

// speak() → আউটপুট হবে "Meow"

// Input

// প্রথম লাইনে একটি পূর্ণসংখ্যা N (1 ≤ N ≤ 100) থাকবে – মোট কতটি প্রাণী।

// পরবর্তী N লাইনে প্রতিটি লাইনে দুটি ইনপুট থাকবে:

// প্রাণীর ধরন (Dog অথবা Cat)

// প্রাণীর নাম (string, স্পেস ছাড়া, সর্বোচ্চ দৈর্ঘ্য 20)

// Output

// প্রতিটি প্রাণীর জন্য আউটপুট হবে:

// <animal_name>: <sound>

// Example Input
// 3
// Dog Tommy
// Cat Kitty
// Dog Bruno

// Example Output
// Tommy: Woof
// Kitty: Meow
// Bruno: Woof

// Explanation

// প্রথম প্রাণী Dog Tommy → Tommy এর শব্দ "Woof"

// দ্বিতীয় প্রাণী Cat Kitty → Kitty এর শব্দ "Meow"

// তৃতীয় প্রাণী Dog Bruno → Bruno এর শব্দ "Woof"

// তাই আউটপুট হয়েছে:

// Tommy: Woof
// Kitty: Meow
// Bruno: Woof


// 👉 চাইলে আমি এর C++ এ inheritance ব্যবহার করে full solution লিখে দিতে পারি।

// তুমি কি চাও আমি পুরো সমাধানও লিখে দিই?




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
   virtual void speak()
    {
        cout << "Some sound: " << name << "\n";
    }
};

class Dog : public Animal
{
public:
    Dog(string name) : Animal(name)
    {
        cout << "Creating Dog: " << name << "\n";
    }
    void speak() override
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
    void speak() override
    {
        cout << "Mewo: " << name << "\n";
    }
};

int main()
{
    int n;
    cin >> n;
    vector<Animal*>v;
    for (int i = 1; i <= n; i++)
    {
        string type, name;
        cin >> type >> name;
        if (type == "Dog")
        {
            v.push_back(new Dog(name));
        }
        else
        {
             v.push_back(new Cat(name));
        }
    }

    for(auto it : v){
        it->speak();
        delete it;
    }
}