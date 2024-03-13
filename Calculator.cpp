#include <iostream>
#include <stdlib.h>
#include <vector>
#include <functional>
#include <cmath>
using namespace std;

class Operation
{
public:
  double add(double a, double b)
  {
    return a + b;
  }
  double subtract(double a, double b)
  {
    return a - b;
  }
  double divide(double a, double b)
  {
    if (b == 0.0)
    {
      throw std::invalid_argument("Error: Division by zero is not allowed.");
    }
    return a / b;
  }
  double modulus(int a, int b)
  {
    if (b == 0)
    {
      throw std::invalid_argument("Error: Modulus by zero is not allowed.");
    }
    return a % b;
  }
  double multiply(double a, double b)
  {
    return a * b;
  }
  double pi()
  {
    return 3.14159;
  }
  double sqrtx(double a)
  {
    return sqrt(a);
  }
  double sqrx(double a)
  {
    return a * a;
  }
  double factorial(int a)
  {
    if (a == 0)
    {
      return 1;
    }
    return a * factorial(a - 1);
  }
  double exponent(double a)
  {
    return exp(a);
  }

  double euler()
  {
    return 2.71828;
  }

  double naturalLog(double a)
  {
    return log(a);
  }

  double logx(double a)
  {
    return log10(a);
  }

  double exp_10(double a)
  {
    return pow(10, a);
  }

  double exp_e(double a)
  {
    return exp(a);
  }

  double sinx(double a)
  {
    return sin(a);
  }

  double cosx(double a)
  {
    return cos(a);
  }

  double tanx(double a)
  {
    return tan(a);
  }

  double rad(double a)
  {
    return a * 3.14159 / 180;
  }

  double deg(double a)
  {
    return a * 180 / 3.14159;
  }

  double asinx(double a)
  {
    return asin(a);
  }

  double acosx(double a)
  {
    return acos(a);
  }

  double atanx(double a)
  {
    return atan(a);
  }

  double sinhx(double a)
  {
    return sinh(a);
  }

  double coshx(double a)
  {
    return cosh(a);
  }

  double compare(double a, double b)
  {
    if (a == b)
    {
      return 0;
    }
    else if (a > b)
    {
      return 1;
    }
    else
    {
      return -1;
    }
  }
};

// history.push_back(to_string(n1) + "  " + operation + "  " + to_string(n2) + "  =  " + to_string(result));

int main()
{
  double recurr = 0;
  vector<string> history;
  Operation op;
  while (true)
  {
    system("cls");
    cout << "---------------------------------------------------" << endl;
    cout << "              Scientific Calculator" << endl;
    cout << "---------------------------------------------------" << endl;
    cout << "                    Operations" << endl;
    cout << "---------------------------------------------------" << endl;
    cout << "|    +    |    -    |    /    |    %    |    *    |" << endl;
    cout << "---------------------------------------------------" << endl;
    cout << "|    pi   |  sqrt   |   sqr   |    !    | compare |" << endl;
    cout << "---------------------------------------------------" << endl;
    cout << "|    e    |   ln    |   log   |   10^   |    e^   |" << endl;
    cout << "---------------------------------------------------" << endl;
    cout << "|   sin   |   cos   |   tan   |   rad   |   deg   |" << endl;
    cout << "---------------------------------------------------" << endl;
    cout << "|  asin   |  acos   |  atan   |   sinh  |   cosh  |" << endl;
    cout << "---------------------------------------------------" << endl;
    cout << "|           history      |          exit          |" << endl;
    cout << "---------------------------------------------------" << endl;
    cout << "Enter the Operator: ";
    string operation;
    cin >> operation;
    if (operation == "+")
    {
      double n1, n2;
      if (!recurr)
      {
        cout << "\nFirst Operand: ";
        cin >> n1;
      }
      else
      {
        cout << "Recurring operand: " << recurr;
        n1 = recurr;
      }
      cout << "\nSecond Operand: ";
      cin >> n2;
      cout << "\n---------------------------------------------------" << endl;
      double result = op.add(n1, n2);
      cout << "Result: " << result << endl;

      cout << "Do you want to take the recurring result?(y/n): ";
      char z;
      cin >> z;
      if (z == 'y')
      {
        recurr = result;
      }
      else
      {
        recurr = 0;
      }
      history.push_back(to_string(n1) + "  " + operation + "  " + to_string(n2) + "  =  " + to_string(result));
    }
    else if (operation == "-")
    {
      double n1, n2;
      if (!recurr)
      {
        cout << "\nFirst Operand: ";
        cin >> n1;
      }
      else
      {
        cout << "Recurring operand: " << recurr;
        n1 = recurr;
      }
      cout << "\nSecond Operand: ";
      cin >> n2;
      cout << "\n---------------------------------------------------" << endl;
      double result = op.subtract(n1, n2);
      cout << "Result: " << result << endl;
      cout << "Do you want to take the recurring result?(y/n): ";
      char z;
      cin >> z;
      if (z == 'y')
      {
        recurr = result;
      }
      else
      {
        recurr = 0;
      }
      history.push_back(to_string(n1) + "  " + operation + "  " + to_string(n2) + "  =  " + to_string(result));
    }

    else if (operation == "/")
    {
      double n1, n2;
      if (!recurr)
      {
        cout << "\nFirst Operand: ";
        cin >> n1;
      }
      else
      {
        cout << "Recurring operand: " << recurr;
        n1 = recurr;
      }
      cout << "\nSecond Operand: ";
      cin >> n2;
      cout << "\n---------------------------------------------------" << endl;
      if (n2 == 0)
      {
        cout << "Error: Division by zero is not allowed." << endl;
      }
      else
      {
        double result = op.divide(n1, n2);
        cout << "Result: " << result << endl;
        cout << "\n---------------------------------------------------" << endl;
        cout << "Do you want to take the recurring result?(y/n): ";
        char z;
        cin >> z;
        if (z == 'y')
        {
          recurr = result;
        }
        else
        {
          recurr = 0;
        }
        history.push_back(to_string(n1) + "  " + operation + "  " + to_string(n2) + "  =  " + to_string(result));
      }
    }
    else if (operation == "%")
    {
      double n1, n2;
      if (!recurr)
      {
        cout << "\nFirst Operand: ";
        cin >> n1;
      }
      else
      {
        cout << "Recurring operand: " << recurr;
        n1 = recurr;
      }
      cout << "\nSecond Operand: ";
      cin >> n2;
      cout << "\n---------------------------------------------------" << endl;
      if (n2 == 0)
      {
        cout << "Error: Modulus by zero is not allowed." << endl;
      }
      else
      {
        double result = op.modulus(n1, n2);
        cout << "Result: " << result << endl;
        cout << "\n---------------------------------------------------" << endl;
        cout << "Do you want to take the recurring result?(y/n): ";
        char z;
        cin >> z;
        if (z == 'y')
        {
          recurr = result;
        }
        else
        {
          recurr = 0;
        }
        history.push_back(to_string(n1) + "  " + operation + "  " + to_string(n2) + "  =  " + to_string(result));
      }
    }
    else if (operation == "*")
    {
      double n1, n2;
      if (!recurr)
      {
        cout << "\nFirst Operand: ";
        cin >> n1;
      }
      else
      {
        cout << "Recurring operand: " << recurr;
        n1 = recurr;
      }
      cout << "\nSecond Operand: ";
      cin >> n2;
      cout << "\n---------------------------------------------------" << endl;
      double result = op.multiply(n1, n2);
      cout << "Result: " << result << endl;

      cout << "Do you want to take the recurring result?(y/n): ";
      char z;
      cin >> z;
      if (z == 'y')
      {
        recurr = result;
      }
      else
      {
        recurr = 0;
      }
      history.push_back(to_string(n1) + "  " + operation + "  " + to_string(n2) + "  =  " + to_string(result));
    }
    else if (operation == "pi")
    {
      cout << "---------------------------------------------------" << endl;
      cout << "Value of Pi: " << op.pi() << endl;
      cout << "---------------------------------------------------" << endl;
      history.push_back("Value of Pi: " + to_string(op.pi()));
      cin.ignore();
      cin.get();
    }
    else if (operation == "sqrt")
    {
      // code for square root
      cout << "---------------------------------------------------" << endl;
      double n;
      cout << "Enter the number: ";
      cin >> n;
      cout << "Square Root of " << n << " is " << op.sqrtx(n) << endl;
      cout << "---------------------------------------------------" << endl;
      history.push_back("Square Root of " + to_string(n) + " is " + to_string(op.sqrtx(n)));
      cin.ignore();
      cin.get();
    }
    else if (operation == "sqr")
    {
      // code for square
      cout << "---------------------------------------------------" << endl;
      double n;
      cout << "Enter the number: ";
      cin >> n;
      cout << "Square of " << n << " is " << op.sqrx(n) << endl;
      cout << "---------------------------------------------------" << endl;
      history.push_back("Square of " + to_string(n) + " is " + to_string(op.sqrx(n)));
      cin.ignore();
      cin.get();
    }
    else if (operation == "!")
    {
      // code for factorial
      cout << "---------------------------------------------------" << endl;
      int n;
      cout << "Enter the number: ";
      cin >> n;
      cout << "Factorial of " << n << " is " << op.factorial(n) << endl;
      cout << "---------------------------------------------------" << endl;
      history.push_back("Factorial of " + to_string(n) + " is " + to_string(op.factorial(n)));
      cin.ignore();
      cin.get();
    }
    else if (operation == "exp")
    {
      // code for exponent
      cout << "---------------------------------------------------" << endl;
      double n;
      cout << "Enter the number: ";
      cin >> n;
      cout << "Exponent of " << n << " is " << op.exponent(n) << endl;
      cout << "---------------------------------------------------" << endl;
      history.push_back("Exponent of " + to_string(n) + " is " + to_string(op.exponent(n)));
      cin.ignore();
      cin.get();
    }
    else if (operation == "e")
    {
      // code for Euler's number
      cout << "---------------------------------------------------" << endl;
      cout << "Value of Euler's number: " << op.euler() << endl;
      cout << "---------------------------------------------------" << endl;
      history.push_back("Value of Euler's number: " + to_string(op.euler()));
      cin.ignore();
      cin.get();
    }
    else if (operation == "ln")
    {
      // code for natural logarithm
      cout << "---------------------------------------------------" << endl;
      double n;
      cout << "Enter the number: ";
      cin >> n;
      cout << "Natural Logarithm of " << n << " is " << op.naturalLog(n) << endl;
      cout << "---------------------------------------------------" << endl;
      history.push_back("Natural Logarithm of " + to_string(n) + " is " + to_string(op.naturalLog(n)));
      cin.ignore();
      cin.get();
    }
    else if (operation == "log")
    {
      // code for logarithm
      cout << "---------------------------------------------------" << endl;
      double n;
      cout << "Enter the number: ";
      cin >> n;
      cout << "Logarithm of " << n << " is " << op.logx(n) << endl;
      cout << "---------------------------------------------------" << endl;
      history.push_back("Logarithm of " + to_string(n) + " is " + to_string(op.logx(n)));
      cin.ignore();
      cin.get();
    }
    else if (operation == "10^")
    {
      // code for power of 10
      cout << "---------------------------------------------------" << endl;
      double n;
      cout << "Enter the number: ";
      cin >> n;
      cout << "10 raised to the power " << n << " is " << op.exp_10(n) << endl;
      cout << "---------------------------------------------------" << endl;
      history.push_back("10 raised to the power " + to_string(n) + " is " + to_string(op.exp_10(n)));
      cin.ignore();
      cin.get();
    }
    else if (operation == "e^")
    {
      // code for exponent of e
      cout << "---------------------------------------------------" << endl;
      double n;
      cout << "Enter the number: ";
      cin >> n;
      cout << "Exponent of " << n << " is " << op.exp_e(n) << endl;
      cout << "---------------------------------------------------" << endl;
      history.push_back("Exponent of " + to_string(n) + " is " + to_string(op.exp_e(n)));
      cin.ignore();
      cin.get();
    }
    else if (operation == "sin")
    {
      cout << "---------------------------------------------------" << endl;
      double n;
      cout << "Enter the number: ";
      cin >> n;
      cout << "Sine of " << n << " is " << op.sinx(n) << endl;
      cout << "---------------------------------------------------" << endl;
      history.push_back("Sine of " + to_string(n) + " is " + to_string(op.sinx(n)));
      cin.ignore();
      cin.get();
    }
    else if (operation == "cos")
    {
      // code for cosine
      cout << "---------------------------------------------------" << endl;
      double n;
      cout << "Enter the number: ";
      cin >> n;
      cout << "Cosine of " << n << " is " << op.cosx(n) << endl;
      cout << "---------------------------------------------------" << endl;
      history.push_back("Cosine of " + to_string(n) + " is " + to_string(op.cosx(n)));
      cin.ignore();
      cin.get();
    }
    else if (operation == "tan")
    {
      // code for tangent
      cout << "---------------------------------------------------" << endl;
      double n;
      cout << "Enter the number: ";
      cin >> n;
      cout << "Tangent of " << n << " is " << op.tanx(n) << endl;
      cout << "---------------------------------------------------" << endl;
      history.push_back("Tangent of " + to_string(n) + " is " + to_string(op.tanx(n)));
      cin.ignore();
      cin.get();
    }
    else if (operation == "rad")
    {
      // code for radians
      cout << "---------------------------------------------------" << endl;
      double n;
      cout << "Enter the number: ";
      cin >> n;
      cout << "Radian of " << n << " is " << op.rad(n) << endl;
      cout << "---------------------------------------------------" << endl;
      history.push_back("Radian of " + to_string(n) + " is " + to_string(op.rad(n)));
      cin.ignore();
      cin.get();
    }
    else if (operation == "deg")
    {
      // code for degrees
      cout << "---------------------------------------------------" << endl;
      double n;
      cout << "Enter the number: ";
      cin >> n;
      cout << "Degree of " << n << " is " << op.deg(n) << endl;
      cout << "---------------------------------------------------" << endl;
      history.push_back("Degree of " + to_string(n) + " is " + to_string(op.deg(n)));
      cin.ignore();
      cin.get();
    }
    else if (operation == "asin")
    {
      // code for arcsine
      cout << "---------------------------------------------------" << endl;
      double n;
      cout << "Enter the number: ";
      cin >> n;
      cout << "Arcsine of " << n << " is " << op.asinx(n) << endl;
      cout << "---------------------------------------------------" << endl;
      history.push_back("Arcsine of " + to_string(n) + " is " + to_string(op.asinx(n)));
      cin.ignore();
      cin.get();
    }
    else if (operation == "acos")
    {
      // code for arccosine
      cout << "---------------------------------------------------" << endl;
      double n;
      cout << "Enter the number: ";
      cin >> n;
      cout << "Arccosine of " << n << " is " << op.acosx(n) << endl;
      cout << "---------------------------------------------------" << endl;
      history.push_back("Arccosine of " + to_string(n) + " is " + to_string(op.acosx(n)));
      cin.ignore();
      cin.get();
    }
    else if (operation == "atan")
    {
      // code for arctangent
      cout << "---------------------------------------------------" << endl;
      double n;
      cout << "Enter the number: ";
      cin >> n;
      cout << "Arctangent of " << n << " is " << op.acosx(n) << endl;
      cout << "---------------------------------------------------" << endl;
      history.push_back("Arctangent of " + to_string(n) + " is " + to_string(op.acosx(n)));
      cin.ignore();
      cin.get();
    }
    else if (operation == "compare")
    {
      // code for comparison
      cout << "---------------------------------------------------" << endl;
      double n1, n2;
      cout << "Enter the first number: ";
      cin >> n1;
      cout << "Enter the second number: ";
      cin >> n2;
      cout << "Comparison of " << n1 << " and " << n2 << " is " << op.compare(n1, n2) << endl;
      cout << "---------------------------------------------------" << endl;
      history.push_back("Comparison of " + to_string(n1) + " and " + to_string(n2) + " is " + to_string(op.compare(n1, n2)));
      cin.ignore();
      cin.get();
    }
    else if (operation == "sinh")
    {
      cout << "---------------------------------------------------" << endl;
      double n;
      cout << "Enter the number: ";
      cin >> n;
      cout << "Hyperbolic Sine of " << n << " is " << op.sinhx(n) << endl;
      cout << "---------------------------------------------------" << endl;
      history.push_back("Hyperbolic Sine of " + to_string(n) + " is " + to_string(op.sinhx(n)));
      cin.ignore();
      cin.get();
    }
    else if (operation == "cosh")
    {
      cout << "---------------------------------------------------" << endl;
      double n;
      cout << "Enter the number: ";
      cin >> n;
      cout << "Hyperbolic Cosine of " << n << " is " << op.coshx(n) << endl;
      cout << "---------------------------------------------------" << endl;
      history.push_back("Hyperbolic Cosine of " + to_string(n) + " is " + to_string(op.coshx(n)));
      cin.ignore();
      cin.get();
    }
    else if (operation == "history")
    {
      cout << "---------------------------------------------------" << endl;
      if (!history.empty())
      {
        for (int i = history.size() - 1; i >= 0; i--)
        {
          cout << history[i] << endl;
        }
      }
      else
      {
        cout << "History is Empty!!" << endl;
      }
      cin.ignore();
      cin.get();
      cout << "---------------------------------------------------" << endl;
    }
    else if (operation == "exit")
    {
      break;
    }
    else
    {
      cout << "Invalid operation";
    }
  }
  return 0;
}
