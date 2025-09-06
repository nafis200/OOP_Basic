// Problem Statement

// তোমাকে একটি Student class তৈরি করতে হবে যেখানে একটি static variable schoolCode থাকবে।

// Class Details

// Student Class:

// Static Variable: schoolCode (প্রাথমিক মান 100)

// Methods:

// setSchoolCode(int code) → static variable schoolCode কে update করবে

// printCode() → schoolCode এর মান print করবে

// Input

// প্রথমে কতটি Student object তৈরি হবে তা ধরো (N)

// পরবর্তী N লাইন: <object_number> <new_schoolCode>

// যদি new_schoolCode = -1 → কোনো পরিবর্তন হবে না, শুধু print হবে

// অন্যথায় → setSchoolCode call হবে এবং print হবে

// Note: Object number = 1 থেকে N

// Output

// প্রতিটি line এ schoolCode এর current value print করতে হবে

// Example Input
// 2
// 1 100
// 2 200

// Example Output
// 100
// 200

// print object 1 = 200

// Explanation

// প্রথম object s1 print করলো → schoolCode = 100 (প্রাথমিক value)

// দ্বিতীয় object s2 set করলো schoolCode = 200

// যেহেতু schoolCode static → সব object এর জন্য value change হয়ে গেছে

// যদি s1 আবার print করতো → output হবে 200

// #include <bits/stdc++.h>
// using namespace std;

// class Student
// {
//     string schoolcode = "10";

// public:
//     void UpdateSchoolcode(string code)
//     {
//         schoolcode = code;
//     }
//     void Print_Code()
//     {
//         cout << schoolcode << "\n";
//     }
// };

// int main()
// {
//     Student s1, s2;
//     s1.Print_Code();
//     s2.Print_Code();

//     s2.UpdateSchoolcode("20");
//     s1.Print_Code();
//     s2.Print_Code();
// }



#include <bits/stdc++.h>
using namespace std;

class Student
{
   static string schoolcode;

public:
    void UpdateSchoolcode(string code)
    {
        schoolcode = code;
    }
    void Print_Code()
    {
        cout << schoolcode << "\n";
    }
};

string Student::schoolcode = "20";



int main()
{
    Student s1, s2;
    s1.Print_Code();
    s2.Print_Code();

    s2.UpdateSchoolcode("10");
    s1.Print_Code();
    s2.Print_Code();
}