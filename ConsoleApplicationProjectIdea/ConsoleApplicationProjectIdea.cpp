#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>


using namespace std;

class FileOperation
{
public:
    void LoadFromFile()
    {
        int rasa;
        string linia;
        fstream file2;
        fstream pvp;
        fstream pvt;
        fstream pvz;
        fstream tvt;
        fstream tvp;
        fstream tvz;
        fstream zvt;
        fstream zvz;
        fstream zvp;
        
                      
        
        cout << "Podaj rase w Starcraft II" << endl;
        cout << "1 - Terran" << endl;
        cout << "2 - Zerg" << endl;
        cout << "3 - Protoss" << endl;
        cin >> rasa;
        switch(rasa)
        {
        case 1 :
            int rasa21;
            cout << "Wybrales : terrana " << endl;
            cout << "Na jaka rase grasz" << endl;
            cin >> rasa21;
            switch (rasa21)
            {
            case 1:
                cout << "Grasz na terrana polecany build to :" << endl;
                tvt.open("tvt.txt", ios::in);
                while (getline(tvt,linia))
                {
                    cout << linia << endl;
                }
                break;
            case 2:
                cout << "Grasz na zerga polecany build to :" << endl;
                tvz.open("tvz.txt", ios::in);
                while (getline(tvz, linia))
                {
                    cout << linia << endl;
                }
                break;
            case 3:
                cout << "Grasz na protossa polecany build to :" << endl;
                tvp.open("tvp.txt", ios::in);
                while (getline(tvp, linia))
                {
                    cout << linia << endl;
                }
                break;
            default:
                cout << "Podales nieprawidlowa liczbe" << endl;
                break;
            }
           
        case 2:
            int rasa22;
            cout << "Wybrales : zerga" << endl;
            cout << "Na jaka rase grasz" << endl;
            cin >> rasa22;
            switch (rasa22)
            {
            case 1:
                cout << "Grasz na terrana polecany build to :" << endl;
                zvt.open("zvt.txt", ios::in);
                if (zvt.is_open())
                {

                
                    while (getline(zvt, linia))
                    {
                        cout << linia << endl;
                    }
                }
                else
                {
                    cout << "zvt nie otwarte" << endl;
                }
                break;
            case 2:
                cout << "Grasz na zerga polecany build to :" << endl;
                zvz.open("zvz.txt", ios::in);
                while (getline(zvz, linia))
                {
                    cout << linia << endl;
                }
                break;
            case 3:
                cout << "Grasz na protossa polecany build to :" << endl;
                zvp.open("zvp.txt", ios::in);
                while (getline(zvp, linia))
                {
                    cout << linia << endl;
                }
                break;
            default:
                cout << "Podales nieprawidlowa liczbe" << endl;
                break;
            }
           
        case 3:
            int rasa23;
            cout << "Wybrales : protossa" << endl;
            cout << "Na jaka rase grasz" << endl;
            cin >> rasa23;
            switch (rasa23)
            {
            case 1:
                cout << "Grasz na terrana polecany build to :" << endl;
                pvt.open("pvt.txt", ios::in);
                while (getline(pvt, linia))
                {
                    cout << linia << endl;
                }
                break;
            case 2:
                cout << "Grasz na zerga polecany build to :" << endl;
                pvz.open("pvz.txt", ios::in);
                while (getline(pvz, linia))
                {
                    cout << linia << endl;
                }
                break;
            case 3:
                cout << "Grasz na protossa polecany build to :" << endl;
                pvp.open("pvp.txt", ios::in);
                while (getline(pvp, linia))
                {
                    cout << linia << endl;
                }
                break;
            default:
                cout << "Podales nieprawidlowa liczbe" << endl;
                break;
            }
            
        default:
            cout << "Podales nieprawidlowa liczbe" << endl;
            break;

        }
        

        
        
        /*
        * file2.open("odczyt.txt", ios::in);
        if (file2.is_open())
        {
            while (getline(file2, linia))
            {
                cout << linia << endl;
            }
            file2.close();
        }
       
       
        else {
            cout << "Plik nie otwarty !!!!!!!!" << endl;
        }
        
        
        */
    }

    


    void SaveToFile()
    {
        fstream file;
        int opinia;
        cout << "Podaj opinie o aplikacji od 1 - 5" << endl;
        cin >> opinia;
        file.open("zapis.txt", ios::app);
        file << opinia << endl;
        file.close();
    }
    void createFile() {
        fstream file;
        file.open("testcik.txt", std::ios::out);
        file << fflush;
        file.close();
    }
};
int main()
{
    FileOperation f;
    //f.createFile();
    f.LoadFromFile();
    f.SaveToFile();
}

 
