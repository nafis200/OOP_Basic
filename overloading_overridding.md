তুমি একটা প্রোগ্রাম লিখবে যেখানে Shape নামের একটা Base Class থাকবে।

এই class এর মধ্যে area() নামে একটা method থাকবে যেটা Overloading (একই নাম, আলাদা parameter) ব্যবহার করে Square, Circle, Rectangle–এর area বের করবে।

এরপর Base Class থেকে Triangle আর Rectangle নামে Derived Class তৈরি করবে, যেগুলোতে area() method Override করে নিজেদের formula দিয়ে area বের করবে।

✦ Test Case

Input / ব্যবহারকারীর ডাকা ফাংশন:

Square → side = 5

Circle → radius = 3

Rectangle → length = 5, width = 6

Triangle → base = 10, height = 5

Rectangle (override) → length = 7, width = 4

Expected Output:

Square area = 25

Circle area = 28.27 (≈ 3.1416 × 3 × 3)

Rectangle area (overload) = 30

Triangle area (override) = 25

Rectangle area (override) = 28

✦ ব্যাখ্যা (Explanation বাংলায়)

Overloading (Compile-time polymorphism):

Square এর জন্য side প্যারামিটার দিলে formula হবে → side × side।

Circle এর জন্য radius দিলে formula হবে → π × r² → 3.1416 × 3 × 3 = 28.27।

Rectangle এর জন্য length আর width দিলে formula হবে → length × width = 30।

এখানে Compiler argument দেখে ঠিক করছে কোন function call হবে।

Overriding (Runtime polymorphism):

Base class এর area() method virtual থাকবে।

Triangle নিজের area() formula দিয়ে override করবে → 0.5 × base × height = 25।

Rectangle আবার নিজের override formula দিয়ে output দিবে → 7 × 4 = 28।

এখানে runtime এ ঠিক হয় কোন method call হবে (pointer/type এর উপর ভিত্তি করে)।