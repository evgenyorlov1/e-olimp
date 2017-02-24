/* Задача 4. Две окружности
 * Определить количество точек пересечения двух окружностей.
 * Входные данные
 * Шесть чисел x1, y1, r1, x2, y2, r2, где x1, y1, x2, y2 - координаты центров окружностей, 
 * а r1, r2 – их радиусы. Все числа - действительные, не превышают по модулю 109, заданы не 
 * более чем с тремя знаками после запятой.
 * Выходные данные
 * Количество точек пересечения. Если точек пересечения бесконечно много, то вывести -1.
*/

#include <iostream>
#include <cmath>

using namespace std;


bool compare_equals(double a, double b, double EPSILON);


int main(int argc, char** argv) {
    const double EPSILON = 0.0001;
    double x1, y1, r1, x2, y2, r2;
    scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &r1, &x2, &y2, &r2);
    double dist = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    
    if(r2 > r1) {
        double tmp = r2;        
        r2 = r1;
        r1 = tmp;
    }
    
    if (dist < EPSILON) {
        if (r1 - r2 < EPSILON)
            cout << -1;
        else
            cout << 0;
    }
    else
        if (abs(dist - r1 - r2) < EPSILON || abs(dist - r1 + r2) < EPSILON)
            cout << 1;
        else
            if (dist > r1 + r2 || dist + r2 < r1)
                cout << 0;
            else
                cout << 2;
        
    return 0;
}