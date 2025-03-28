// Michelle A. Santiago
// Colaboraciones: Gabriela Guzmán

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const double pi = 3.14159265358979323846; 


// prototipos de funciones de volúmenes y areas

double volume (double, double); // cilindro
double volume (double); // esfera
double volume (double, double, double); // prisma rectangular


// prototipo de funciones de área 

double area (double, double); // cilindro
double area (double); // esfera 
double area (double, double, double); // prisma rectangular

// prototipo de funciones de buscar datos

double getrad(); // radio
double getwidth(); // ancho
double getheight(); // altura 
double getlength(); // largo


int main() {

    // desplegar propósito del código

    cout << "Este programa calcula el volumen y el área de la superficie de tres figuras." << endl;

    int option;

    // first menu

    char figure_choice;
    
    do {
        cout << "Escoja una figura: \n";
        cout << " a. Cilindro\n b. Esfera\n c. Prisma rectangular\n";
        cout << "Selección: ";
        cin >> figure_choice;
    } while ((figure_choice < 65 || figure_choice > 67) && (figure_choice < 97 || figure_choice > 99));
    

    if (figure_choice >= 65 && figure_choice <= 67) {
        figure_choice += 32;
    }

    switch (figure_choice)
    {
        case 'a':
        case 'A': cout << "Escogió el cilindro.\n";
                option = 1;
                break;
        case 'b':
        case 'B': cout << "Escogió la esfera.\n";
                option = 2;
                break;
        case 'c':
        case 'C': cout << "Escogió el prisma rectangular.\n";
                option = 3;
                break;
        default: cout << "No entraste A, B, o C!\n";
    }

    cout << endl;

    // hacer segundo menu

    char measure_choice;
    
    cout << "Escoja entre los siguientes opciones: \n";
    cout << " a. Volumen\n b. Área de la superficie\n";
    cout << "Selección: ";
    cin >> measure_choice;
    
    switch (measure_choice) {
        
        case 'a':
        case 'A': cout << "Escogió calcular el volumen.\n";
                break;
        case 'b':
        case 'B': cout << "Escogió calcular el área de la superficie.\n";
                option += 3;
                break;
                
        default: "No entraste A o B!\n";
    }
    
    switch (option) {
        
        case 1: 
            {
                double radio = getrad();
                double altura = getheight();
                double vol_1;
                vol_1 = volume (radio, altura);
                cout << "El volumen del cilindro es: " << fixed << setprecision (2) << vol_1;
                cout << endl;
                break;
            }
                
        case 2: 
            {
                double radio_2 = getrad();
                double vol_2;
                vol_2 = volume (radio_2);
                cout << "El volumen de la esfera es: " << fixed << setprecision (2) << vol_2;
                cout << endl;
                break;
            }
                
        case 3: 
            {
                double width_3 = getwidth();
                double length_3 = getlength();
                double height_3 = getheight();
                double vol_3;
                vol_3 = volume (width_3, length_3, height_3);
                cout << "El volumen del prisma rectangular es: " << fixed << setprecision(2) << vol_3;
                cout << endl;
                break;
            }
                
        case 4: 
            {
                double radio_4 = getrad();
                double altura_4 = getheight();
                double ar_4;
                ar_4 = area (radio_4, altura_4); 
                cout << "El área del cilindro es: " << fixed << setprecision(2) << ar_4;
                cout << endl;
                break;
            }
        
        case 5: 
            {
                double radio_5 = getrad();
                double ar_5;
                ar_5 = area (radio_5);
                cout << "El área de la esfera es: " << fixed << setprecision (2) << ar_5;
                cout << endl;
                break;
            }
                
        case 6:
            {
                double largo_6 = getlength();
                double ancho_6 = getwidth();
                double altura_6 = getheight();
                double ar_6;
                ar_6 = area (largo_6, ancho_6, altura_6);
                cout << "El área del prisma rectangular es: " << fixed << setprecision (2) << ar_6;
                cout << endl;
                break;
            }
                
        
    }
    
    cout << endl;
    
    return 0;
}

double getrad() {
    cout << "Entre el radio: ";
    double rad;
    rad = getvalue();
    return rad;
}

double getwidth() {
    cout << "Entre el ancho: ";
    double width;
    width = getvalue();
    return width;
}

double getheight() {
    cout << "Entre la altura: ";
    double height;
    height = getvalue();
    return height;
}

double getlength() {
    cout << "Entre el largo: ";
    double length;
    length = getvalue();
    return length;
}

double getvalue() {
    double value;
    do {
        cout << "No puede ingresar valores negativos.\n";
        cin >> value;
    } while (value < 0);
    return value;
}

// funciones 

// volúmenes 

// cilindro

double volume (double rad, double c_height) {
    double vol;
    vol = pi * c_height * (pow (rad, 2));
    return vol;
}

// esfera

double volume (double s_rad) {
    double vol;
    vol = (4.0/3.0) * pi * (pow (s_rad, 3));
    return vol;
}

// prisma rectangular 

double volume (double width, double length, double height) {
    double vol;
    vol = width * length * height;
    return vol;
}



// área 

// cilindro

double area (double c_rad, double height) {
    double ar;
    ar = (2.0 * pi * c_rad * height) + (2.0 * pi * (pow (c_rad, 2)));
    return ar;
}

// esfera

double area (double s_rad) {
    double ar;
    ar = 4.0 * pi * (pow (s_rad, 2));
    return ar;
}

// prisma rectangular 

double area (double length, double width, double height) {
    double ar;
    ar = 2.0 * ((width * length) + (height * length) + (height * width));
    return ar;
}