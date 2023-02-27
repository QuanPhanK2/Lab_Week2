#include <iostream>
#include <fstream>
using namespace std;

double totalCharge(int, double, double, double);
double totalCharge(double, double);

int main(){
    int patientType;
    int days;
    double rate; 
    double serviceCharges; 
    double medicationCharges; 
    double total;

    ofstream outputFile; // To write to a file

    cout << "Enter 1 if the patient was admitted as an in-patient.\n";
    cout << "Enter 2 if the patient was admitted as an out-patient.\n";
    cin >> patientType;

    while (patientType != 1 && patientType != 2) // Input validation for patient type
    {
        cout << "Invalid input. Please enter either 1 or 2.\n";
        cin >> patientType;
    }
    switch (patientType)
    {
    case 1: //In-patient
        cout << "Enter the number of days spent in the hospital: ";
        cin >> days;

        cout << "Enter the daily rate: ";
        cin >> rate;

        cout << "Enter the charges for hospital services: ";
        cin >> serviceCharges;

        cout << "Enter the charges for hospital medication: ";
        cin >> medicationCharges;

        total = totalCharge(days, rate, serviceCharges, medicationCharges); // Call overloaded function for in-patient
        break;
    
    case 2: //out-patient
        cout << "Enter the charges for hospital services: ";
        cin >> serviceCharges;

        cout << "Enter the charges for hospital medication: ";
        cin >> medicationCharges;

        total = totalCharge(serviceCharges, medicationCharges);
        break;
    }

    outputFile.open("report.txt"); // Open a file to write to

   if (outputFile) 
   {
     outputFile << "The total charges are $" << total << endl; 
     outputFile.close(); 
     cout << "The report has been written to report.txt\n"; 
   }
   else 
   {
     cout << "Error opening file.\n"; 
   }

   return 0;
}
double totalCharge(int days, double rate, double serviceCharges, double medicationCharges){
    return (days * rate) + serviceCharges + medicationCharges;
}
double totalcharge(double servicecharges, double medicatiocharges)
{   
 return servicecharges + medicatiocharges;
}