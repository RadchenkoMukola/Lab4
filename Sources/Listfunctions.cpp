#include "Listfunctions.h"

Nodef* reversef(Nodef* list)
{
    Nodef* reversed_list = NULL;

    for (Nodef* node = list, *next_node; node != NULL; node = next_node)
    {
        next_node = node->next;
        node->next = reversed_list;
        reversed_list = node;
    }

    return reversed_list;
}
void printflist(Nodef* A)
{
    int counter = 1;
    double p, a;
    string t, v;
    vector<double> m;
    Nodef* B = A;
    while (B)
    {
        cout << "Figure №" << counter << endl;
        cout << "\nArea: ";
        a = (B->data)->calc_area();
        cout << a << endl;
        cout << "Perimetr: ";
        p = (B->data)->calc_perimeter();
        cout << p << endl;
        cout << "Type: ";
        t = (B->data)->calc_type();
        cout << t << endl;
        cout << "Special dot: ";
        m = (B->data)->calc_specdot();
        cout << "M( ";
        for (int i = 0; i < m.size(); i++)
        {
            cout << m[i] << " ";
        }
        cout << ")" << endl;
        cout << "Convexity: ";
        v = (B->data)->calc_vyp();
        cout << v << endl;
        B = B->next;
        counter = counter + 1;
    }
}
Nodef* Headf(int n)
{
    Nodef* p = NULL; Nodef* q = NULL;
    double x1, y1, x2, y2, x3, y3, x4, y4, x5, y5;
    Figure* figur = NULL;

    for (int i = 0; i < n; i++)
    {

        cout << "*======================*" << endl;
        cout << "*l Сhoose your figure l*" << endl;
        cout << "*======================*" << endl;
        cout << "*l 1.Triangle         l*" << endl;
        cout << "*l 2.Quadrangle       l*" << endl;
        cout << "*l 3.Pentagon         l*" << endl;
        cout << "*l 4.Circle           l*" << endl;
        cout << "*======================*" << endl;
        cout << "Choice - ";
        int x;
        cin >> x;

        if (x == 1)
        {
            cout << "Enter 3 coordinates" << endl;
            cout << "Enter x1 ="; cin >> x1; cout << endl;
            cout << "Enter y1 ="; cin >> y1; cout << endl;
            cout << "Enter x2 ="; cin >> x2; cout << endl;
            cout << "Enter y2 ="; cin >> y2; cout << endl;
            cout << "Enter x3 ="; cin >> x3; cout << endl;
            cout << "Enter y3 ="; cin >> y3; cout << endl;
            figur = new Triangle(x1, y1, x2, y2, x3, y3);
        }
        else if (x == 2)
        {
            cout << "Enter 4 coordinates" << endl;
            cout << "Enter x1 ="; cin >> x1; cout << endl;
            cout << "Enter y1 ="; cin >> y1; cout << endl;
            cout << "Enter x2 ="; cin >> x2; cout << endl;
            cout << "Enter y2 ="; cin >> y2; cout << endl;
            cout << "Enter x3 ="; cin >> x3; cout << endl;
            cout << "Enter y3 ="; cin >> y3; cout << endl;
            cout << "Enter x4 ="; cin >> x4; cout << endl;
            cout << "Enter y4 ="; cin >> y4; cout << endl;
            figur = new Parallelogram(x1, y1, x2, y2, x3, y3, x4, y4);

        }
        else if (x == 3)
        {
            cout << "Enter 5 coordinates" << endl;
            cout << "Enter x1 ="; cin >> x1; cout << endl;
            cout << "Enter y1 ="; cin >> y1; cout << endl;
            cout << "Enter x2 ="; cin >> x2; cout << endl;
            cout << "Enter y2 ="; cin >> y2; cout << endl;
            cout << "Enter x3 ="; cin >> x3; cout << endl;
            cout << "Enter y3 ="; cin >> y3; cout << endl;
            cout << "Enter x4 ="; cin >> x4; cout << endl;
            cout << "Enter y4 ="; cin >> y4; cout << endl;
            cout << "Enter x5 ="; cin >> x5; cout << endl;
            cout << "Enter y5 ="; cin >> y5; cout << endl;
            figur = new Pkutnuk(x1, y1, x2, y2, x3, y3, x4, y4, x5, y5);

        }
        else if (x == 4)
        {
            cout << "Enter coordinates of center and radius" << endl;
            cout << "Enter x ="; cin >> x1; cout << endl;
            cout << "Enter y ="; cin >> y1; cout << endl;
            cout << "Enter radius r ="; cin >> x2; cout << endl;
            figur = new Circle(x1, y1, x2);
        }

        p = new Nodef;
        p->data = figur;
        p->next = q;
        q = p;
    }
    return p;
}
void Npush_backf(struct Nodef** head_ref, Figure* new_data)
{
    struct Nodef* new_node
        = (struct Nodef*)malloc(sizeof(struct Nodef));

    new_node->data = new_data;
    new_node->next = (*head_ref);

    (*head_ref) = new_node;
}
