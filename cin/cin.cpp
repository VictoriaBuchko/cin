#include <iostream>
using namespace std;

int main()
{
    cout << "1 task" << endl;
    double a, b, c,x, average,number;
    int degree;
    cout << "Enter three numbers: ";//использую введеные переменнные в 1 и 2 task
    cin >> a >> b >> c;

    //1)среднее арифметическое значение трёх вещественных чисел
    average = (a + b + c) / 3;

    cout << "1)Average " << "= " << average << endl<<endl;

    //2)корень линейного уравнения ax + b = 0
    cout << "2 task" << endl;
    x = -b / a;

    cout << "2)Root of a number " << "= " << x << endl << endl;

    //3)Программа вычисляет указанную степень этого числа
    cout << "3 task" << endl;
    cout << "Enter tne number: ";
    cin >> number;
    cout << "Enter degree of number: ";
    cin >> degree;

    cout << "Number " << number << " to the power of " << degree << " = " << pow(number, degree)<<endl << endl;
    //4)затем считает площадь и длину этой окружности
    cout << "4 task" << endl;
    const double pi = 3.14;
    double radius, area, circumference;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    cout << "The area of the circle is " << area << endl;
    cout << "The circumference of the circle is " << circumference << endl << endl;
    //5)переводит гривны в количество в доллары, евро и биткоины.
    cout << "5 task" << endl;
    double uah, usd, eur, btc;
    const double usdRate = 38.10;
    const double eurRate = 41.00;
    const double btcRate = 1066063.63;

    cout << "Enter the amount of UAH: ";
    cin >> uah;

    usd = uah / usdRate;
    eur = uah / eurRate;
    btc = uah / btcRate;

    cout << "USD: " << usd << endl;
    cout << "EUR: " << eur << endl;
    cout << "BTC: " << btc << endl << endl;

    //6)переводит километры в сухопутные и морские мили. 
    cout << "6 task" << endl;
    const double landMile = 0.621371192;
    const double nauticalMile = 0.539956803;
    double km, landMi, nauticalMi;

    cout << "Enter the number of kilometers: ";
    cin >> km;

    landMi = km * landMile;
    nauticalMi = km * nauticalMile;

    cout << "Land miles: " << landMi << endl;
    cout << "Nautical miles: " << nauticalMi << endl << endl;
    //7)находит процент P от числа N
    cout << "7 task" << endl;
    double n, p, result;

    cout << "Enter the number: ";
    cin >> n;
    cout << "Enter the %: ";
    cin >> p;

    result = n * (p / 100);

    cout << "Result: " << result << endl << endl;

   //8)переводит указанное количество градусов по Цельсию в градусы по шкале Фаренгейта, Кельвина, Реомюра и Делиля
   //реализовать перевод из градусов по Фаренгейту в градусы по Цельсию.
    cout << "8 task" << endl;
    double celsius, fahrenheit, kelvin, reaumur, delisle;

    cout << "Enter the temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9 / 5) + 32;
    kelvin = celsius + 273.15;
    reaumur = celsius * 4 / 5;
    delisle = (100 - celsius) * 3 / 2;

    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
    cout << "Temperature in Kelvin: " << kelvin << endl;
    cout << "Temperature in Reaumur: " << reaumur << endl;
    cout << "Temperature in Delisle: " << delisle << endl<<endl;

    cout << "Enter the temperature in Fahrenheit: ";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) * 5 / 9;

    cout << "Temperature in Celsius: " << celsius << endl << endl;

  //9)=Поменять местами значения переменных a и b, сначала с использованием 
  // дополнительной третьей переменной, а затем – без
    cout << "9 task" << endl;

    //1 способ
    double d, e, temp;

    cout << "Enter d: ";
    cin >> d;
    cout << "Enter e: ";
    cin >> e;

    temp = d;
    d = e;
    e = temp;

    cout << "d = " << d << ", e = " << e << endl;
    //2 способ (так как мы в 1 способе поменяли значение переменных, во 2 способе уже изменненые переменные снова поменяються)
    d += e;
    e = d - e;
    d -= e;
    cout << "d = " << d << ", e = " << e << endl;

    return 0;
}
