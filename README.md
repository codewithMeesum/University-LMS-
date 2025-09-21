# 💫 About Me:
AI Engineer || Microsoft Certified || Cisco Certified 


## 🌐 Socials:
[Instagram](https://www.instagram.com/mesum_mukhtar/?igsh=M2Ewc2J2ZnB6OGpy)

[![LinkedIn](https://img.shields.io/badge/LinkedIn-%230077B5.svg?logo=linkedin&logoColor=white)](https://linkedin.com/in/Mesum Mukhtar) [![email](https://img.shields.io/badge/Email-D14836?logo=gmail&logoColor=white)](mailto:mesummukhtar47@gmail.com) 


University Inheritance Example (C++)

This project demonstrates different types of inheritance in C++ along with the behavior of const objects and const member functions.

Learning Outcomes:

Understand Single, Multilevel, and Hierarchical inheritance in C++

Learn the difference between const vs non-const member functions

See why const objects restrict calling of normal functions

Explore multiple solutions to handle const objects properly

Diagram : 

          University
          /       \
     Teacher     Department
        |       /    |    \
     Student   AI    Cs    SE


Features:

Base Class: University

const string uniName → university name (constant)

string uniLoc → university location

show() → const member function (prints uniName)

display() → normal member function (prints uniLoc)

Derived Classes:

Teacher : University → Single inheritance

Student : Teacher : University → Multilevel inheritance

Department : University → Single inheritance

AI, Cs, SE : Department : University → Multilevel + Hierarchical inheritance

Types of Inheritance Used:

Single Inheritance → Teacher : University, Department : University

Multilevel Inheritance → Student : Teacher : University, AI/Cs/SE : Department : University

Hierarchical Inheritance → AI, Cs, SE all inherit from Department

Const vs Normal Object Behavior:

Case 1: Const Object
const SE s1;
s1.show(); // Allowed (const function)
s1.display(); // Error (normal function cannot be called by const object)

Case 2: Normal Object
SE s2;
s2.show(); // Allowed
s2.display(); // Allowed

Solutions for Calling Normal Function with Const Object:

Use a normal object instead of const
SE s2;
s2.display(); // Works fine

Make the function const
void display() const {
cout << "Uni location: " << uniLoc << endl;
}

Make both functions normal and call them using a normal object.

Use two separate objects

One const object to call const functions

One normal object to call non-const functions

How to Run:

Save the code in main.cpp

Stay connected with me for more upcomming projects .

The journey continues ! 

Compile:
g++ main.cpp -o program

Run:
./program
Feel free to reach out:

- 📧 [mesummukhtar3@gmail.com](mailto:mesummukhtar3@gmail.com)
- 🔗 [LinkedIn](https://www.linkedin.com/in/mesummukhtar/)
- 🐱 [GitHub](https://github.com/codewithMeesum)

### ⭐ Don’t forget to star this repo if you like it!

# 📊 GitHub Stats:
![](https://github-readme-stats.vercel.app/api?username=codewithMeesum&theme=dark&hide_border=false&include_all_commits=false&count_private=false)<br/>
![](https://nirzak-streak-stats.vercel.app/?user=codewithMeesum&theme=dark&hide_border=false)<br/>
![](https://github-readme-stats.vercel.app/api/top-langs/?username=codewithMeesum&theme=dark&hide_border=false&include_all_commits=false&count_private=false&layout=compact)

---
[![](https://visitcount.itsvg.in/api?id=codewithMeesum&icon=0&color=0)](https://visitcount.itsvg.in)
