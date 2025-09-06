// তুমি একটা প্রোগ্রাম লিখবে যেখানে Shape নামের একটা Base Class থাকবে।

// এই class এর মধ্যে area() নামে একটা method থাকবে যেটা Overloading (একই নাম, আলাদা parameter) ব্যবহার করে Square, Circle, Rectangle–এর area বের করবে।

// এরপর Base Class থেকে Triangle আর Rectangle নামে Derived Class তৈরি করবে, যেগুলোতে area() method Override করে নিজেদের formula দিয়ে area বের করবে।

// ✦ Test Case

// Input / ব্যবহারকারীর ডাকা ফাংশন:

// Square → side = 5

// Circle → radius = 3

// Rectangle → length = 5, width = 6

// Triangle → base = 10, height = 5

// Rectangle (override) → length = 7, width = 4

// Expected Output:

// Square area = 25

// Circle area = 28.27 (≈ 3.1416 × 3 × 3)

// Rectangle area (overload) = 30

// Triangle area (override) = 25

// Rectangle area (override) = 28

// ✦ ব্যাখ্যা (Explanation বাংলায়)

// Overloading (Compile-time polymorphism):

// Square এর জন্য side প্যারামিটার দিলে formula হবে → side × side।

// Circle এর জন্য radius দিলে formula হবে → π × r² → 3.1416 × 3 × 3 = 28.27।

// Rectangle এর জন্য length আর width দিলে formula হবে → length × width = 30।

// এখানে Compiler argument দেখে ঠিক করছে কোন function call হবে।

// Overriding (Runtime polymorphism):

// Base class এর area() method virtual থাকবে।

// Triangle নিজের area() formula দিয়ে override করবে → 0.5 × base × height = 25।

// Rectangle আবার নিজের override formula দিয়ে output দিবে → 7 × 4 = 28।

// এখানে runtime এ ঠিক হয় কোন method call হবে (pointer/type এর উপর ভিত্তি করে)।

#include<bits/stdc++.h>
using namespace std;

class Shape{
    public: 

    void area(int width){
    //    square
      cout << "Square Area: \n";
      cout << width * width << "\n";
    }
    void area(double width){
    //    circle
        cout << "Circle Area: \n";
        cout << (3.1416 * width * width) << "\n";
    }
    void area(int height, int width){
    //    rectangle
    cout << "Rectangle Area: \n";
    cout << height * width << "\n";
    }

    virtual void area(){
         cout << "Area\n";
    }

};

class Triangle : public Shape{
     public:
     int height,width;
     Triangle(int height, int width){
         this->height = height;
         this->width = width;
     }
     void area() override{
         cout << "Override\n";
         cout << "Triangle\n";

         cout << 0.5 * height * width << "\n";
     }
};


int main(){
   Shape S;
   S.area(5);
   S.area(2.0);
   S.area(5,10);
   S.area();

   Shape *S1 = new Triangle(10,15);
   S1->area();
   delete S1;
   
}