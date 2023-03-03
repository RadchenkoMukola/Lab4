#include "UI.h"

#include "UI.h"

using namespace std;

int start()
{
    int n = 0;
    cout << "Enter size of the List -";
    cin >> n;
    cout << endl;
    cout << "*====================*" << endl;
    cout << "*l     Menu         l*" << endl;
    cout << "*====================*" << endl;
    cout << "*l 1.int            l*" << endl;
    cout << "*l 2.double         l*" << endl;
    cout << "*l 3.string         l*" << endl;
    cout << "*l 4.vector<int>    l*" << endl;
    cout << "*l 5.vector<double> l*" << endl;
    cout << "*l 6.vector<string> l*" << endl;
    cout << "*l 7.Figure         l*"<< endl;
    cout << "*====================*" << endl;
    char x;
    char func;
    char func1;
    cout << "Choose type of data -";
    cin >> x;
    if (x == '1')
    {
        Node<int>* p = NULL;
        cout << "Enter the elements" << endl;
        p = Head<int>(n);

        cout << "*====================*" << endl;
        cout << "*l     Menu         l*" << endl;
        cout << "*====================*" << endl;
        cout << "*l 1.quicksort      l*" << endl;
        cout << "*l 2.mergesort      l*" << endl;
        cout << "*l 3.insertionsort  l*" << endl;
        cout << "*====================*" << endl;


        cout << "Choice -";
        cin >> func;
        cout << endl;

        if (func == '1')
        {
            cout << "*====================*" << endl;
            cout << "*l     Menu         l*" << endl;
            cout << "*====================*" << endl;
            cout << "*l 1.Growth         l*" << endl;
            cout << "*l 2.Decrease       l*" << endl;
            cout << "*====================*" << endl;
            cout << "Choice -";
            cin >> func1;
            cout << endl;
            if (func1 == '1')
            {
                quicksortel(p);
                Node<int>* a = reverse(p);
                printlist(a);
                return 0;
            }
            if (func1 == '2')
            {
                quicksortel(p);
                printlist(p);
                return 0;
            }
        }
        if (func == '2')
        {
            cout << "*====================*" << endl;
            cout << "*l     Menu         l*" << endl;
            cout << "*====================*" << endl;
            cout << "*l 1.Growth         l*" << endl;
            cout << "*l 2.Decrease       l*" << endl;
            cout << "*====================*" << endl;
            cout << "Choice -";
            cin >> func1;
            cout << endl;
            if (func1 == '1')
            {
                mergesortel(&p);
                printlist(p);
                return 0;
            }
            if (func1 == '2')
            {
                mergesortel(&p);
                Node<int>* a = reverse(p);
                printlist(a);
                return 0;
            }
        }
        if (func == '3')
        {
            cout << "*====================*" << endl;
            cout << "*l     Menu         l*" << endl;
            cout << "*====================*" << endl;
            cout << "*l 1.Growth         l*" << endl;
            cout << "*l 2.Decrease       l*" << endl;
            cout << "*====================*" << endl;
            cout << "Choice -";
            cin >> func1;
            cout << endl;
            if (func1 == '1')
            {
                insertionsortel(&p);
                printlist(p);
                return 0;
            }
            if (func1 == '2')
            {
                insertionsortel(&p);
                Node<int>* a = reverse(p);
                printlist(a);
                return 0;
            }
        }
    }
    if (x == '2')
    {
        Node<double>* p = NULL;
        cout << "Enter the elements" << endl;
        p = Head<double>(n);
        cout << "*====================*" << endl;
        cout << "*l     Menu         l*" << endl;
        cout << "*====================*" << endl;
        cout << "*l 1.quicksort      l*" << endl;
        cout << "*l 2.mergesort      l*" << endl;
        cout << "*l 3.insertionsort  l*" << endl;
        cout << "*====================*" << endl;


        cout << "Choice -";
        cin >> func;
        cout << endl;

        if (func == '1')
        {
            cout << "*====================*" << endl;
            cout << "*l     Menu         l*" << endl;
            cout << "*====================*" << endl;
            cout << "*l 1.Growth         l*" << endl;
            cout << "*l 2.Decrease       l*" << endl;
            cout << "*====================*" << endl;
            cout << "Choice -";
            cin >> func1;
            cout << endl;
            if (func1 == '1')
            {
                quicksortel(p);
                Node<double>* a = reverse(p);
                printlist(a);
                return 0;
            }
            if (func1 == '2')
            {
                quicksortel(p);
                printlist(p);
                return 0;
            }
        }
        if (func == '2')
        {
            cout << "*====================*" << endl;
            cout << "*l     Menu         l*" << endl;
            cout << "*====================*" << endl;
            cout << "*l 1.Growth         l*" << endl;
            cout << "*l 2.Decrease       l*" << endl;
            cout << "*====================*" << endl;
            cout << "Choice -";
            cin >> func1;
            cout << endl;
            if (func1 == '1')
            {
                mergesortel(&p);
                printlist(p);
                return 0;
            }
            if (func1 == '2')
            {
                mergesortel(&p);
                Node<double>* a = reverse(p);
                printlist(a);
                return 0;
            }
        }
        if (func == '3')
        {
            cout << "*====================*" << endl;
            cout << "*l     Menu         l*" << endl;
            cout << "*====================*" << endl;
            cout << "*l 1.Growth         l*" << endl;
            cout << "*l 2.Decrease       l*" << endl;
            cout << "*====================*" << endl;
            cout << "Choice -";
            cin >> func1;
            cout << endl;
            if (func1 == '1')
            {
                insertionsortel(&p);
                printlist(p);
                return 0;
            }
            if (func1 == '2')
            {
                insertionsortel(&p);
                Node<double>* a = reverse(p);
                printlist(a);
                return 0;
            }
        }
    }
    if (x == '3')
    {
        Node<string>* p = NULL;
        cout << "Enter the elements" << endl;
        p = Head<string>(n);
        cout << "*====================*" << endl;
        cout << "*l     Menu         l*" << endl;
        cout << "*====================*" << endl;
        cout << "*l 1.quicksort      l*" << endl;
        cout << "*l 2.mergesort      l*" << endl;
        cout << "*l 3.insertionsort  l*" << endl;
        cout << "*====================*" << endl;


        cout << "Choice -";
        cin >> func;
        cout << endl;

        if (func == '1')
        {
            cout << "*====================*" << endl;
            cout << "*l     Menu         l*" << endl;
            cout << "*====================*" << endl;
            cout << "*l 1.Growth         l*" << endl;
            cout << "*l 2.Decrease       l*" << endl;
            cout << "*====================*" << endl;
            cout << "Choice -";
            cin >> func1;
            cout << endl;
            if (func1 == '1')
            {
                quicksortel(p);
                Node<string>* a = reverse(p);
                printlist(a);
                return 0;
            }
            if (func1 == '2')
            {
                quicksortel(p);
                printlist(p);
                return 0;
            }
        }
        if (func == '2')
        {
            cout << "*====================*" << endl;
            cout << "*l     Menu         l*" << endl;
            cout << "*====================*" << endl;
            cout << "*l 1.Growth         l*" << endl;
            cout << "*l 2.Decrease       l*" << endl;
            cout << "*====================*" << endl;
            cout << "Choice -";
            cin >> func1;
            cout << endl;
            if (func1 == '1')
            {
                mergesortel(&p);
                printlist(p);
                return 0;
            }
            if (func1 == '2')
            {
                mergesortel(&p);
                Node<string>* a = reverse(p);
                printlist(a);
                return 0;
            }
        }
        if (func == '3')
        {
            cout << "*====================*" << endl;
            cout << "*l     Menu         l*" << endl;
            cout << "*====================*" << endl;
            cout << "*l 1.Growth         l*" << endl;
            cout << "*l 2.Decrease       l*" << endl;
            cout << "*====================*" << endl;
            cout << "Choice -";
            cin >> func1;
            cout << endl;
            if (func1 == '1')
            {
                insertionsortel(&p);
                printlist(p);
                return 0;
            }
            if (func1 == '2')
            {
                insertionsortel(&p);
                Node<string>* a = reverse(p);
                printlist(a);
                return 0;
            }
        }
    }
    if (x == '4')
    {
        Nodev<int>* p = NULL;
        cout << "Enter the elements" << endl;
        p = Headv<int>(n);
        cout << "*====================*" << endl;
        cout << "*l     Menu         l*" << endl;
        cout << "*====================*" << endl;
        cout << "*l 1.quicksort      l*" << endl;
        cout << "*l 2.mergesort      l*" << endl;
        cout << "*l 3.insertionsort  l*" << endl;
        cout << "*====================*" << endl;


        cout << "Choice -";
        cin >> func;
        cout << endl;

        if (func == '1')
        {
            cout << "*====================*" << endl;
            cout << "*l     Menu         l*" << endl;
            cout << "*====================*" << endl;
            cout << "*l 1.Growth         l*" << endl;
            cout << "*l 2.Decrease       l*" << endl;
            cout << "*====================*" << endl;
            cout << "Choice -";
            cin >> func1;
            cout << endl;
            if (func1 == '1')
            {
                quicksortelvec(p);
                Nodev<int>* a = reversev(p);
                printvlist(a);
                return 0;
            }
            if (func1 == '2')
            {
                quicksortelvec(p);
                printvlist(p);
                return 0;
            }
        }
        if (func == '2')
        {
            cout << "*====================*" << endl;
            cout << "*l     Menu         l*" << endl;
            cout << "*====================*" << endl;
            cout << "*l 1.Growth         l*" << endl;
            cout << "*l 2.Decrease       l*" << endl;
            cout << "*====================*" << endl;
            cout << "Choice -";
            cin >> func1;
            cout << endl;
            if (func1 == '1')
            {
                mergesortelvec(&p);
                printvlist(p);
                return 0;
            }
            if (func1 == '2')
            {
                mergesortelvec(&p);
                Nodev<int>* a = reversev(p);
                printvlist(a);
                return 0;
            }
        }
        if (func == '3')
        {
            cout << "*====================*" << endl;
            cout << "*l     Menu         l*" << endl;
            cout << "*====================*" << endl;
            cout << "*l 1.Growth         l*" << endl;
            cout << "*l 2.Decrease       l*" << endl;
            cout << "*====================*" << endl;
            cout << "Choice -";
            cin >> func1;
            cout << endl;
            if (func1 == '1')
            {
                insertionsortelvec(&p);
                printvlist(p);
                return 0;
            }
            if (func1 == '2')
            {
                insertionsortelvec(&p);
                Nodev<int>* a = reversev(p);
                printvlist(a);
                return 0;
            }
        }
    }
    if (x == '5')
    {
        Nodev<double>* p = NULL;
        cout << "Enter the elements" << endl;
        p = Headv<double>(n);
        cout << "*====================*" << endl;
        cout << "*l     Menu         l*" << endl;
        cout << "*====================*" << endl;
        cout << "*l 1.quicksort      l*" << endl;
        cout << "*l 2.mergesort      l*" << endl;
        cout << "*l 3.insertionsort  l*" << endl;
        cout << "*====================*" << endl;


        cout << "Choice -";
        cin >> func;
        cout << endl;

        if (func == '1')
        {
            cout << "*====================*" << endl;
            cout << "*l     Menu         l*" << endl;
            cout << "*====================*" << endl;
            cout << "*l 1.Growth         l*" << endl;
            cout << "*l 2.Decrease       l*" << endl;
            cout << "*====================*" << endl;
            cout << "Choice -";
            cin >> func1;
            cout << endl;
            if (func1 == '1')
            {
                quicksortelvec(p);
                Nodev<double>* a = reversev(p);
                printvlist(a);
                return 0;
            }
            if (func1 == '2')
            {
                quicksortelvec(p);
                printvlist(p);
                return 0;
            }
        }
        if (func == '2')
        {
            cout << "*====================*" << endl;
            cout << "*l     Menu         l*" << endl;
            cout << "*====================*" << endl;
            cout << "*l 1.Growth         l*" << endl;
            cout << "*l 2.Decrease       l*" << endl;
            cout << "*====================*" << endl;
            cout << "Choice -";
            cin >> func1;
            cout << endl;
            if (func1 == '1')
            {
                mergesortelvec(&p);
                printvlist(p);
                return 0;
            }
            if (func1 == '2')
            {
                mergesortelvec(&p);
                Nodev<double>* a = reversev(p);
                printvlist(a);
                return 0;
            }
        }
        if (func == '3')
        {
            cout << "*====================*" << endl;
            cout << "*l     Menu         l*" << endl;
            cout << "*====================*" << endl;
            cout << "*l 1.Growth         l*" << endl;
            cout << "*l 2.Decrease       l*" << endl;
            cout << "*====================*" << endl;
            cout << "Choice -";
            cin >> func1;
            cout << endl;
            if (func1 == '1')
            {
                insertionsortelvec(&p);
                printvlist(p);
                return 0;
            }
            if (func1 == '2')
            {
                insertionsortelvec(&p);
                Nodev<double>* a = reversev(p);
                printvlist(a);
                return 0;
            }
        }
    }
    if (x == '6')
    {
        Nodev<string>* p = NULL;
        cout << "Enter the elements" << endl;
        p = Headv<string>(n);
        cout << "*====================*" << endl;
        cout << "*l     Menu         l*" << endl;
        cout << "*====================*" << endl;
        cout << "*l 1.quicksort      l*" << endl;
        cout << "*l 2.mergesort      l*" << endl;
        cout << "*l 3.insertionsort  l*" << endl;
        cout << "*====================*" << endl;


        cout << "Choice -";
        cin >> func;
        cout << endl;

        if (func == '1')
        {
            cout << "*====================*" << endl;
            cout << "*l     Menu         l*" << endl;
            cout << "*====================*" << endl;
            cout << "*l 1.Growth         l*" << endl;
            cout << "*l 2.Decrease       l*" << endl;
            cout << "*====================*" << endl;
            cout << "Choice -";
            cin >> func1;
            cout << endl;
            if (func1 == '1')
            {
                quicksortelvec(p);
                Nodev<string>* a = reversev(p);
                printvlist(a);
                return 0;
            }
            if (func1 == '2')
            {
                quicksortelvec(p);
                printvlist(p);
                return 0;
            }
        }
        if (func == '2')
        {
            cout << "*====================*" << endl;
            cout << "*l     Menu         l*" << endl;
            cout << "*====================*" << endl;
            cout << "*l 1.Growth         l*" << endl;
            cout << "*l 2.Decrease       l*" << endl;
            cout << "*====================*" << endl;
            cout << "Choice -";
            cin >> func1;
            cout << endl;
            if (func1 == '1')
            {
                mergesortelvec(&p);
                printvlist(p);
                return 0;
            }
            if (func1 == '2')
            {
                mergesortelvec(&p);
                Nodev<string>* a = reversev(p);
                printvlist(a);
                return 0;
            }
        }
        if (func == '3')
        {
            cout << "*====================*" << endl;
            cout << "*l     Menu         l*" << endl;
            cout << "*====================*" << endl;
            cout << "*l 1.Growth         l*" << endl;
            cout << "*l 2.Decrease       l*" << endl;
            cout << "*====================*" << endl;
            cout << "Choice -";
            cin >> func1;
            cout << endl;
            if (func1 == '1')
            {
                insertionsortelvec(&p);
                printvlist(p);
                return 0;
            }
            if (func1 == '2')
            {
                insertionsortelvec(&p);
                Nodev<string>* a = reversev(p);
                printvlist(a);
                return 0;
            }
        }
    }
    if (x == '7')
    {
        Nodef* p = NULL;
        cout << "Enter the elements" << endl;
        p = Headf(n);
        cout << "*======================*" << endl;
        cout << "*l       Menu         l*" << endl;
        cout << "*======================*" << endl;
        cout << "*l 1.Sort by area     l*" << endl;
        cout << "*l 2.Sort by perimeterl*" << endl;
        cout << "*======================*" << endl;
        cout << "Choice -";
        int b; cin >> b;
        if (b == 1)
        {
            cout << "*====================*" << endl;
            cout << "*l     Menu         l*" << endl;
            cout << "*====================*" << endl;
            cout << "*l 1.quicksort      l*" << endl;
            cout << "*l 2.mergesort      l*" << endl;
            cout << "*l 3.insertionsort  l*" << endl;
            cout << "*====================*" << endl;


            cout << "Choice -";
            cin >> func;
            cout << endl;

            if (func == '1')
            {
                cout << "*====================*" << endl;
                cout << "*l     Menu         l*" << endl;
                cout << "*====================*" << endl;
                cout << "*l 1.Growth         l*" << endl;
                cout << "*l 2.Decrease       l*" << endl;
                cout << "*====================*" << endl;
                cout << "Choice -";
                cin >> func1;
                cout << endl;
                if (func1 == '1')
                {
                    quicksortelf(p,1);
                    Nodef* a = reversef(p);
                    printflist(a);
                    return 0;
                }
                if (func1 == '2')
                {
                    quicksortelf(p,1);
                    printflist(p);
                    return 0;
                }
            }
            if (func == '2')
            {
                cout << "*====================*" << endl;
                cout << "*l     Menu         l*" << endl;
                cout << "*====================*" << endl;
                cout << "*l 1.Growth         l*" << endl;
                cout << "*l 2.Decrease       l*" << endl;
                cout << "*====================*" << endl;
                cout << "Choice -";
                cin >> func1;
                cout << endl;
                if (func1 == '1')
                {
                    mergesortelf(&p,1);
                    printflist(p);
                    return 0;
                }
                if (func1 == '2')
                {
                    mergesortelf(&p,1);
                    Nodef* a = reversef(p);
                    printflist(a);
                    return 0;
                }
            }
            if (func == '3')
            {
                cout << "*====================*" << endl;
                cout << "*l     Menu         l*" << endl;
                cout << "*====================*" << endl;
                cout << "*l 1.Growth         l*" << endl;
                cout << "*l 2.Decrease       l*" << endl;
                cout << "*====================*" << endl;
                cout << "Choice -";
                cin >> func1;
                cout << endl;
                if (func1 == '1')
                {
                    insertionsortelf(&p,1);
                    printflist(p);
                    return 0;
                }
                if (func1 == '2')
                {
                    insertionsortelf(&p,1);
                    Nodef* a = reversef(p);
                    printflist(a);
                    return 0;
                }
            }
        }
        if (b == 2)
        {
            cout << "*====================*" << endl;
            cout << "*l     Menu         l*" << endl;
            cout << "*====================*" << endl;
            cout << "*l 1.quicksort      l*" << endl;
            cout << "*l 2.mergesort      l*" << endl;
            cout << "*l 3.insertionsort  l*" << endl;
            cout << "*====================*" << endl;


            cout << "Choice -";
            cin >> func;
            cout << endl;

            if (func == '1')
            {
                cout << "*====================*" << endl;
                cout << "*l     Menu         l*" << endl;
                cout << "*====================*" << endl;
                cout << "*l 1.Growth         l*" << endl;
                cout << "*l 2.Decrease       l*" << endl;
                cout << "*====================*" << endl;
                cout << "Choice -";
                cin >> func1;
                cout << endl;
                if (func1 == '1')
                {
                    quicksortelf(p,2);
                    Nodef* a = reversef(p);
                    printflist(a);
                    return 0;
                }
                if (func1 == '2')
                {
                    quicksortelf(p,2);
                    printflist(p);
                    return 0;
                }
            }
            if (func == '2')
            {
                cout << "*====================*" << endl;
                cout << "*l     Menu         l*" << endl;
                cout << "*====================*" << endl;
                cout << "*l 1.Growth         l*" << endl;
                cout << "*l 2.Decrease       l*" << endl;
                cout << "*====================*" << endl;
                cout << "Choice -";
                cin >> func1;
                cout << endl;
                if (func1 == '1')
                {
                    mergesortelf(&p,2);
                    printflist(p);
                    return 0;
                }
                if (func1 == '2')
                {
                    mergesortelf(&p,2);
                    Nodef* a = reversef(p);
                    printflist(a);
                    return 0;
                }
            }
            if (func == '3')
            {
                cout << "*====================*" << endl;
                cout << "*l     Menu         l*" << endl;
                cout << "*====================*" << endl;
                cout << "*l 1.Growth         l*" << endl;
                cout << "*l 2.Decrease       l*" << endl;
                cout << "*====================*" << endl;
                cout << "Choice -";
                cin >> func1;
                cout << endl;
                if (func1 == '1')
                {
                    insertionsortelf(&p,2);
                    printflist(p);
                    return 0;
                }
                if (func1 == '2')
                {
                    insertionsortelf(&p,2);
                    Nodef* a = reversef(p);
                    printflist(a);
                    return 0;
                }
            }
        }
    }

    return 0;
}



