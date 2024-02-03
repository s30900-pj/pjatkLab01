#include <iostream>
#include <cmath>
#include <sstream>
using namespace std;
struct Point {
    double x;
    double y;

    string toString() const {
        ostringstream oss; //aby skonstruować napis w formie "(x, y)".
        oss << "(" << x << ", " << y << ")";
        return oss.str();
    }
};

double odleglosc(const Point& p1, const Point& p2) {
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    return sqrt(dx * dx + dy * dy);//wzor na odległość euklidesową: 
}

bool trojkat(const Point& p1, const Point& p2, const Point& p3) {

    double d12 = odleglosc(p1, p2);
    double d23 = odleglosc(p2, p3);
    double d31 = odleglosc(p3, p1);
    return (d12 + d23 > d31) && (d23 + d31 > d12) && (d31 + d12 > d23);
    // (suma dwóch krótszych stron musi być większa od najdłuższej strony)
}

int main() {
    Point points[3];

    cout << "Podaj wspolrzedne dla pierwszego punktu:\n";
    cout << "x: ";
    cin >> points[0].x;
    cout << "y: ";
    cin >> points[0].y;

    cout << "Podaj wspolrzedne dla drugiego punktu:\n";
    cout << "x: ";
    cin >> points[1].x;
    cout << "y: ";
    cin >> points[1].y;

    cout << "Podaj wspolrzedne dla trzeciego punktu:\n";
    cout << "x: ";
    cin >> points[2].x;
    cout << "y: ";
    cin >> points[2].y;

    cout << "Punkt 1: " << points[0].toString() << "\n";
    cout << "Punkt 2: " << points[1].toString() << "\n";
    cout << "Punkt 3: " << points[2].toString() << "\n";

    double dystans12 = odleglosc(points[0], points[1]);
    double dystans23 = odleglosc(points[1], points[2]);
    double dystans31 = odleglosc(points[2], points[0]);

    cout << "Odleglosc miedzy punktami 1-2: " << dystans12 << "\n";
    cout << "Odleglosc miedzy punktami 2-3: " << dystans23 << "\n";
    cout << "Odleglosc miedzy punktami 3-1: " << dystans31 << "\n";

    if (trojkat(points[0], points[1], points[2])) {
        cout << "Trzy punkty tworza trojkat.\n";
    }
    else {
        cout << "Trzy punkty nie tworza trojkata.\n";
    }

    if (dystans12 > dystans23 && dystans12 > dystans31) {
        cout << "Najdluzsza odleglosc jest miedzy punktami 1-2.\n";
    }
    else if (dystans23 > dystans31) {
        cout << "Najdluzsza odleglosc jest miedzy punktami 2-3.\n";
    }
    else {
        cout << "Najdluzsza odleglosc jest miedzy punktami 3-1.\n";
    }

    return 0;
}