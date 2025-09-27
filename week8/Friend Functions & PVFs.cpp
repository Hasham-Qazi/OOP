////Friend Function
//
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//class Circle;
//class Rectangle;
//
//class Rectangle {
//    float length, width;
//public:
//    Rectangle(float l, float w) : length(l), width(w) {}
//    friend float totalArea(Rectangle r, Circle c);
//};
//
//class Circle {
//    float radius;
//public:
//    Circle(float r) : radius(r) {}
//    friend float totalArea(Rectangle r, Circle c);
//};
//
//float totalArea(Rectangle r, Circle c) {
//    float rectArea = r.length * r.width;
//    float circleArea = 3.14 * pow(c.radius, 2);
//    return rectArea + circleArea;
//}
//
//int main() {
//    Rectangle r(4, 5);
//    Circle c(3);
//    cout << "Total area: " << totalArea(r, c) << endl;
//    return 0;
//}

//Pure Virtual Function

//#include <iostream>
//using namespace std;
//
//class Shape {
//public:
//    virtual void draw() = 0; // Pure virtual function
//};
//
//class Circle : public Shape {
//public:
//    void draw() override {
//        cout << "Drawing Circle" << endl;
//    }
//};
//
//class Rectangle : public Shape {
//public:
//    void draw() override {
//        cout << "Drawing Rectangle" << endl;
//    }
//};
//
//int main() {
//    Shape* s1 = new Circle();
//    Shape* s2 = new Rectangle();
//
//    s1->draw();
//    s2->draw();
//
//    delete s1;
//    delete s2;
//    return 0;
//}


