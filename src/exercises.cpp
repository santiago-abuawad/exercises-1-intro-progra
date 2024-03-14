
#include <cmath>
#include <iostream>
#include <stdexcept>
#include <iomanip>

using namespace std;

void exercise_1(string s1, string s2, string s3) {
      string mins;
    mins = s1;
    if(mins > s2) {
        mins = s2;
    }
    if(mins > s3) {
        mins = s3;
    }
    cout<<mins;
}

void exercise_2(double A, double B, double C) {
     if (A == 0) {
        if (B != 0) {
            double raiz = -C / B;
            std::cout << raiz << std::endl;
        } else {
            if (C == 0) {
                std::cout << "Infinitas soluciones" << std::endl;
            } else {
                
            }
        }
    } else {
        double discriminante = B * B - 4 * A * C;

        if (discriminante > 0) {
            double raiz1 = (-B + sqrt(discriminante)) / (2 * A);
            double raiz2 = (-B - sqrt(discriminante)) / (2 * A);
            std::cout << raiz1 << " " << raiz2 << std::endl;
        } else if (discriminante == 0) {
            double raiz = -B / (2 * A);
            std::cout << raiz << std::endl;
        } else {

            
        }
    }
} 

void exercise_3(int a, int b) {
  if(b == 0) {
    cout << "Impossible\n";
  } else {
    int c = a / b;
    cout<<c<<"\n";
  }
}

void exercise_4(double n, double a, double b, double x, double y) {

}

void exercise_5(char character) {
    if ((character >= 'A' && character <= 'Z')) {
        cout << "upper-case alphabet" << endl;
    } else if ((character >= 'a' && character <= 'z')) {
        cout << "lower-case alphabet" << endl;
    } else {
        cout << "not an alphabet" << endl;
    }
}

void exercise_6(int number) {
    switch (number) {
        case 7:
            cout << "Domingo";
            break;
        case 1:
            cout << "Monday\n";
            break;
        case 2:
            cout << "Martes";
            break;
        case 3:
            cout << "Miércoles";
            break;
        case 4:
            cout << "Thursday\n";
            break;
        case 5:
            cout << "Viernes";
            break;
        case 6:
            cout << "Sábado";
        case 0:
            cout << "Invalid input\n";
            break;
        default:
        cout << "Invalid input\n";
    }

}

void exercise_7(double r) {
  if(r > 0 || r == 0) {
    double pi = 3.14;
    double area = 4*pi*r*r;
    cout <<area<<"\n";
  } else {
    cout << "Error: Radius cannot be negative.\n";
  }
}

void exercise_8(long int seconds) {
  if(seconds > 0 || seconds == 0) {
    long int hours = seconds / 3600;
    long int min = (seconds % 3600) / 60;
    long int seconds2 = seconds % 60l;

    cout <<setw(2) << std::setfill('0') << hours<<":" <<setw(2) << std::setfill('0') <<min<<":" <<setw(2) << std::setfill('0') <<seconds2<<"\n";

  } else {
    cout << "Error: Input seconds cannot be negative.\n";
  }
}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  // TODO: YOUR CODE HERE
  return "";
}

int exercise_10(int a, int b) {
  int res1 = a + b;
  if (res1 > 10) {
    int res2 = res1 * 2;
  }
  else if(res1 > 100) {
    int res3 = res1 * 3;
  }
  else {
    int res4 = res1 * 1;
  }

}

string exercise_11(int number) {
    if(number == 11235813) {
    return"Se encontro a Fibonacci";
  }
    return"Esto no es de Fibonacci";

}

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {

}

string exercise_13(int age, int years_of_experience) {
  if(age < 18) {
    cout << "Not eligible";
  }
  else if(years_of_experience == 0){
    cout << "Project coordinator";
  }
  else if(years_of_experience >= 3) {
    cout << "Project coordinator";
  }
  else if(years_of_experience >= 5) {
    cout << "Senior project manager";
  }
  else {
    cout<<"Not eligible";
  }
}


string exercise_14(int number_of_docs) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int a, int b, int c) {
}

void exercise_16(int debut, int fin) {
  // TODO: YOUR CODE HERE
}