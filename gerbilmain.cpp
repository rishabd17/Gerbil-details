#include <bits/stdc++.h>
using namespace std;

#include "Gerbil.h"

int main()
{
    string Breed;
    float Weight;
	string Name;
	char Gender;
	string Favorite_Food;
	string Color_Description;
	string Other_Comments;
	
	Gerbil *gerbilArray = new Gerbil[4];

   
    for (int i = 0; i < 4; i++)
    {
        
        cout << "FOR GERBIL : " << i + 1 << endl;

        cout << "Enter Breed" << endl;
        cin >> Breed;
        gerbilArray[i].setBreed(Breed);

        cout << "Enter Weight" << endl;
        cin >> Weight;
        gerbilArray[i].setWeight(Weight);

        cout << "Enter Name" << endl;
        cin >> Name;
        gerbilArray[i].setName(Name);

        cout << "Enter Gender" << endl;
        cin >> Gender;
        gerbilArray[i].setGender(Gender);
        cin.ignore();
        
		cout << "Enter Favorite Food" << endl;
		cin>> Favorite_Food;
        //getline(cin, Favorite_Food);
        gerbilArray[i].setFavorite_Food(Favorite_Food);

        cout << "Enter Color Description" << endl;
       // cin>> Color_Description;
        getline(cin, Color_Description);
        gerbilArray[i].setColor_Description(Color_Description);

        cout << "Enter Other Comments" << endl;
        getline(cin, Other_Comments);
        gerbilArray[i].setOther_Comments(Other_Comments);
    }

    
    for (int i = 0; i < 4; i++)
    {
        cout << endl
             << "************ GERBIL ==> " << i + 1 << " ************" << endl;
        gerbilArray[i].printInfo();
    }

    
    delete gerbilArray;

    return 0;
}