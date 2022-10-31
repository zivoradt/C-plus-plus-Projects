#include <iostream>
using namespace std;

int main()
{
    int quant;
    int choise;

    // Qantity
    int Qrooms = 0, Qpasta = 0, Qnoodles = 0, Qshake = 0, Qchicken = 0;
    // food item sold
    int Srooms = 0, Spasta = 0, Snoodles = 0, Sshake = 0, Schicken = 0;
    // Total procced items
    int Trooms = 0, Tpasta = 0, Tnoodles = 0, Tshake = 0, Tchicken = 0;

    cout << "\n\t Quantity of items we have";
    cout << "\n Rooms avaliable:";
    cin >> Qrooms;
    cout << "\n Pasta avaliable:";
    cin >> Qpasta;
    cout << "\n Noodles avaliable:";
    cin >> Qnoodles;
    cout << "\n Shake avaliable:";
    cin >> Qshake;
    cout << "\n Chicken avaliable:";
    cin >> Qchicken;

    m:
    cout << "\n\t\t\t Please select from the menu options; ";
    cout << "\n\n1) Rooms";
    cout << "\n2) Pasta";
    cout << "\n3) Noodles";
    cout << "\n4) Shake";
    cout << "\n5) Chicken";
    cout << "\n6) Information regarding sales and collection ";
    cout << "\n7) Exit";

    cout << "\n\n Please enter your choise! ";
    cin >> choise;

    switch (choise)
    {
    case 1:
        cout << "\n\n Enter the number of room you need: ";
        cin >> quant;
        if (Qrooms - Srooms >= quant)
        {
            Srooms = Srooms + quant;
            cout << "\n\n\t\t You have reserved " << quant << " succesfully!";
            Trooms = Trooms + quant * 1200;
        }
        else
        {
            cout << "\n\t Only " << Qrooms - Srooms << " are left";
        }
        break;
    case 2:
        cout << "\n\n Enter the number of pasta you need: ";
        cin >> quant;
        if (Qpasta - Spasta >= quant)
        {
            Spasta = Spasta + quant;
            cout << "\n\n\t\t You have reserved " << quant << " succesfully!";
            Tpasta = Tpasta + quant * 120;
        }
        else
        {
            cout << "\n\t Only " << Qpasta - Spasta << " are left";
        }
        break;
    case 3:
        cout << "\n\n Enter the number of noodle you need: ";
        cin >> quant;
        if (Qnoodles - Snoodles >= quant)
        {
            Snoodles = Snoodles + quant;
            cout << "\n\n\t\t You have reserved " << quant << " succesfully!";
            Tnoodles = Tnoodles + quant * 1200;
        }
        else
        {
            cout << "\n\t Only " << Qnoodles - Snoodles << " are left";
        }
        break;
    case 4:
        cout << "\n\n Enter the number of shake you need: ";
        cin >> quant;
        if (Qshake - Sshake >= quant)
        {
            Sshake = Sshake + quant;
            cout << "\n\n\t\t You have reserved " << quant << " succesfully!";
            Tshake = Tshake + quant * 140;
        }
        else
        {
            cout << "\n\t Only " << Qrooms - Srooms << " are left";
        }
        break;
    case 5:
        cout << "\n\n Enter the number of chicken you need: ";
        cin >> quant;
        if (Qchicken - Schicken >= quant)
        {
            Schicken = Schicken + quant;
            cout << "\n\n\t\t You have reserved " << quant << " succesfully!";
            Tchicken = Tchicken + quant * 160;
        }
        else
        {
            cout << "\n\t Only " << Qchicken - Schicken << " are left";
        }
        break;
    case 6:
        cout << "\n\n Details of selase and collection ";
        cout << "\n\n The number of rooms that we have: " << Qrooms;
        cout << "\n\n The number of rooms that we have rent: " << Srooms;
        cout << "\n\n The number of rooms that we have left: " << Qrooms -Srooms;
        cout << "\n\n Total rooms collection for the day: " << Trooms;

        cout << "\n\n The number of pasta that we have: " << Qpasta;
        cout << "\n\n The number of pasta that we have sold: " << Spasta;
        cout << "\n\n The number of pasta that we have left: " << Qpasta -Spasta;
        cout << "\n\n Total pasta collection for the day: " << Tpasta;

        cout << "\n\n The number of noodles that we have: " << Qnoodles;
        cout << "\n\n The number of noodles that we have sold: " << Snoodles;
        cout << "\n\n The number of noodles that we have left: " << Qnoodles -Snoodles;
        cout << "\n\n Total noodles collection for the day: " << Tnoodles;

        cout << "\n\n The number of shake that we have: " << Qshake;
        cout << "\n\n The number of shake that we have sold: " << Sshake;
        cout << "\n\n The number of shake that we have left: " << Qshake -Sshake;
        cout << "\n\n Total shake collection for the day: " << Tshake;

        cout << "\n\n The number of chicken that we have: " << Qchicken;
        cout << "\n\n The number of chicken that we have sold: " << Schicken;
        cout << "\n\n The number of chicken that we have left: " << Qchicken -Schicken;
        cout << "\n\n Total chicken collection for the day: " << Tchicken;

        break;
    case 7:
        exit(0);
    
    default:
        cout << "\n Plese select numbers mentioned above!";
        break;
    }
    goto m;

}