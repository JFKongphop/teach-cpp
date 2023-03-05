#include <iostream>
using namespace std;
const double PI = 3.14159;

int readInt(string prompt) {
    int inp;
    string temp;
    cout << prompt;
    cin >> inp;
    getline(cin, temp);

    return inp;

}

double readDouble(string prompt) {
    double inp;
    string temp;
    cout << prompt;
    cin >> inp;
    getline(cin, temp);

    return inp;
}

int getMenuChoice(){
	int choice;
	string prompt = "The examples output of the program are as follows:\n1.Circle\n2.Rectangle\n3.Triangle\n0.Exit\nYour choice : ";
    choice = readInt(prompt);

    return choice;
}

double calCircleArea(double radius){
	double area;
	area = PI * radius * radius;

	return area;
}

double calRectangleArea(double width, double height){
	double area;
	area = width * height;

	return area;
}

double calTriangleArea(double base, double height){
	double area;
	area = 0.5 * base * height;

	return area;
}

void printCircleInfo(double radius, double area){
	cout 
	<< "area of the circle with radius = " 
	<< radius 
	<< " is " 
	<< area << endl;
}

void printRectangleInfo(double width, double height, double area){
	cout << "area of the rectangle with width = " << width << " and height = " << height << " is " << area <<endl;
}

void printTriangleInfo(double base, double height, double area){
	cout 
	<< "area of the triangle with base = " 
	<< base 
	<< " and height = " 
	<< height 
	<< " is " 
	<< area <<endl;
}

void processCircle(){
	double radius, area;
	string prompt = "Enter radius of the circle : ";
	radius = readDouble(prompt);
	area = calCircleArea(radius);

	printCircleInfo(radius, area);
}

void processRectangle(){
	double width, height, area;
	string prompt1 = "Enter width of the rectangle : ";
	string prompt2 = "Enter height of the rectangle : ";

	width = readDouble(prompt1);
	height = readDouble(prompt2);
	area = calRectangleArea(width, height);

	printRectangleInfo(width, height, area);
}

void processTriangle(){
	double base, height, area;
	string prompt1 = "Enter base of the triangle : ";
	string prompt2 = "Enter height of the triangle : ";
	
	base = readDouble(prompt1);
	height = readDouble(prompt2);
	area = calTriangleArea(base, height);

	printTriangleInfo(base, height, area);
}

int main() {
	int choice;

    do{
    	choice = getMenuChoice();
		if (choice == 1) {
			processCircle();	
		}

		else if (choice == 2) {
			processRectangle();
		}

		else if (choice == 3) {
			processTriangle();
		}
	} while(choice != 0);

	cout<<"Goodbye";
}