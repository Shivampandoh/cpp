#include<iostream>
using namespace std;
int main (){
    int carCount = 0, bikeCount=0, rickshawCount = 0;
    int choice;

    while(true){
        cout<<"Parking menu"<<endl;
        cout<<"--------------------"<<endl;
        cout<<"1. Car"<<endl;
        cout<<"2.Bike"<<endl;
        cout<<"3.Rickwhaw"<<endl;
        cout<<"4.Exit"<<endl;
        cin>>choice;

        switch(choice){
            case 1:
            carCount++;
            cout<<"Car Parked and Total car = "<<carCount<<endl;
            break;

            case 2:
            bikeCount++;
            cout<<"Bike PArked and Total  Bike = "<<bikeCount<<endl;
            break;

            case 3: 
            rickshawCount++;
            cout<<"Rickshaw parked and Total Rickshaw = "<<rickshawCount<<endl;

            case 4:
             cout << "Exiting the program.\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
            
    

        }
         char continueParking;
        cout << "Do you want to add another vehicle? (y/n): ";
        cin >> continueParking;

        if (continueParking == 'n' || continueParking == 'N') {
            cout << "Exiting the program.\n";
            break;
        }
    }
    return 0;
}