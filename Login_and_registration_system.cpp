 #include <iostream>
 #include <fstream>
 #include <string.h>
 using namespace std;


 void login();
 void registration();
 void forgot();

 int main()
 {
    int c;

    cout << "\t\t\t_______________________________________________\n\n\n";
    cout << "\t\t\t          Welcome to the login page             \n\n\n";
    cout << "\t\t\t                    Menu                        \n\n\n";
    cout << "\t| Press 1 to LOGIN             |" << endl;
    cout << "\t| Press 2 to REGISTERED        |" << endl;
    cout << "\t| Press 3 to RESET PASSWORD    |" << endl;
    cout << "\t| Press 4 to EXIT    |" << endl;

    cin >> c;

    switch (c)
    {
    case 1:
            login();
        break;
    case 2:
            registration();
        break;
    case 3:
            forgot();
        break;
    case 4:
            cout << "\t\t\t Thank you! \n\n";
        break;
    
    default:
        system("cls");
        cout << "\n\n Please make selection given above \n" << endl;
        main();
    }
}

void login()
{
    int count;
    string userId, password, id, pass;
    system("cls");
    
    cout << "\t\t\t Please enter username and password: " << endl;
    cout << "\t\t\t USERNAME ";
    cin >> userId;
    cout << "\t\t\t PASSWORD ";
    cin >> password;

    ifstream input("record.txt");

    while(input>>id>>pass)
    {
        if (userId == id && password == pass)
        {
            count = 1;
            system("cls");     
        }
          
    }
    input.close(); 
    if (count == 1 )
    {
        cout << userId << "\n You are succesfully login!" << endl;
        main();
    }
    else
    {
        cout << "\n Login ERROR \n Please check your username and password";
        main();
    }

}

void registration()
{
    string rName, ruserId, rPass;
    system("cls");

    cout << "\t\t\t Please enter your username: ";
    cin >> ruserId;
    cout << "\t\t\t Please enter your password: ";
    cin >> rPass;
    ofstream f1("records.txt", ios::app);
    f1 << ruserId << " " << rPass << endl;
    system("cls");
    cout << "\n\t\t\t Registration is succesfull! \n";
    main();

};

void forgot()
{
    int option;
    system("cls");
    
    cout << "\t\t\t You forgot the password? No worries! \n";
    cout << "Press 1 to search your id by username " << endl;
    cout << "Press 2 to go back to main menu. " << endl;
    cin >> option;

    switch (option)
    {
    case 1:
    {
        int count = 0;
        string suserId, spass, sId;
        cout << "\n\t\t Enter the username which you remember: ";
        cin >> suserId;

        ifstream f2("records.txt");
        while (f2>> sId >> spass)
        {
            if (sId == suserId)
            {
                count = 1;
            }
            f2.close();
            if (count == 1)
            {
                cout << "\n\n Your account is found \n";
                cout << "\n\n Your password is: " << spass;
                main();
            }
            else
            {
                cout << "\n\t Sorry your account is not found! \n";
                main();
            }
            
        }
        break;
    }
        
    case 2:
        {
            main();
        }
        break;
    default:
        cout << "\t\t\t Wrong choise! Please try again " << endl;
        forgot();
}

}



 