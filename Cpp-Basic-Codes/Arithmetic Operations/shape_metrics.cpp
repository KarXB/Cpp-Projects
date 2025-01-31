// Geometric Calculator  
// This program allows users to compute the area and perimeter of various shapes.  
// Users select a shape, provide necessary dimensions, and receive calculated results.  
// Supported shapes include circles, rectangles, and triangles.  

#include <iostream>
#include <string>
using namespace std;

// Function for square
void square(int L, int &Area, int &Per) {
    Area = L * L;
    Per = L * 4;
}

// Function for rectangle
void rectangle(int L, int W, int &Area, int &Per) {
    Area = L * W;
    Per = 2 * (L + W);
}


int main(){
    cout << "==================================="<<endl;
    cout << "     SHAPE METRICS CALCULATOR      "<<endl;
    cout << "==================================="<<endl<<endl;

    int choice;
    string shape;
    int area , per;
    for (;;){
        cout << "Choose 1 to continue or 0 to stop.";
        cin>> choice;
        cout << "-----------------------------------"<<endl<<endl;
        if (choice == 0 ){
            break;
        }
        else if(choice ==1 ){
              cout << "=============================================" << endl;
              cout << " Choose a shape from the following options: " << endl;
              cout << "-------------------------------------------" << endl;
              cout << "   1. Square" << endl;
              cout << "   2. Rectangle" << endl;
              cout << "   3. Right-Angled Triangle" << endl;
              cout << "=============================================" << endl;

              cin >>shape;

              if (shape == "Square" || shape == "square"){
                int L;
                cout << "Enter the length of the square: ";
                cin>> L;
                square(L , area , per);
                cout << "-------------------------------------------" << endl;
                cout << "Area of square equals " << area <<endl; 
                cout << "Perimeter of square equals " << per<<endl <<endl;
              }
                else if (shape == "rectangle" || shape == "Rectangle") {
                     int L, W;
                     cout << "Enter the length of the rectangle: ";
                     cin >> L;
                     cout << "Enter the width of the rectangle: ";
                     cin >> W;
                     rectangle(L, W, area, per);
                     cout << "-------------------------------------------" << endl;
                     cout << "Area of rectangle equals " << area << endl;
                     cout << "Perimeter of rectangle equals " << per << endl << endl;
            }

        }
        else{
            cout << "Invalid choice.";
        }
    }
}