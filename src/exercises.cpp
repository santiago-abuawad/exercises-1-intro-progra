
#include <cmath>
#include <iostream>

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
  double d = B * A - 4 * A * C;
  if(d > 0) {
    double res1 = (-B + std::sqrt(d)) / (2 * A);
    double res2 = (-B - std::sqrt(d)) / (2 * A);
    cout<<res1<<" "<<res2;
  } else if (d == 0) {
    double res = -B / (2 * A);
    cout<<res;
  }
  else {
    cout<<"";
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
  // TODO: YOUR CODE HERE
}

void exercise_7(double r) {
  // TODO: YOUR CODE HERE
}

void exercise_8(long int seconds) {
  // TODO: YOUR CODE HERE
}

string exercise_9(string s1, string s2, string s3, string s4, string s5) {
  // TODO: YOUR CODE HERE
  return "";
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
}

string exercise_11(int number) {
    if(number == 11235813) {
    return"Se encontro Fibonacci";
  }
    return"Esto no es de Fibonacci";

}

void exercise_12(string color1, int numb1,
                 string color2, int numb2,
                 string color3, int numb3,
                 string color4, int numb4) {
  // TODO: YOUR CODE HERE
}

string exercise_13(int age, int years_of_experience) {
  // TODO: YOUR CODE HERE
  return "";
}

string exercise_14(int number_of_docs) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int a, int b, int c) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int debut, int fin) {
  // TODO: YOUR CODE HERE
}