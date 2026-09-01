#include <iostream>
#include <string>
using namespace std;

class Patient
{
private:
    int patientId;
    string name;
    int age;
    string ward;
    const string bloodGroup;

public:

    // Constructor 1: Default
    Patient()
        : patientId(0),
          name("Unknown"),
          age(0),
          ward("General"),
          bloodGroup("O+")
    {
        cout << "[Constructor] Default patient registered." << endl;
    }

    // Constructor 2: Emergency admission
    Patient(int id, const string& name)
        : patientId(id),
          name(name),
          age(0),
          ward("Emergency"),
          bloodGroup("O+")
    {
        cout << "[Constructor] Emergency: " << name << endl;
    }

    //Constructor 3: Full admission
    Patient(int id, const string& name, int age,
            const string& ward, const string& bg)
        : patientId(id),
          name(name),
          age(age),
          ward(ward),
          bloodGroup(bg)
    {
        cout << "[Constructor] Full admission: " << name << endl;
    }

    ~Patient()                         //destructor
    {
        cout << "[Destructor] Patient " << name
             << " discharged." << endl;
    }

    // Display patient record
    void displayRecord() const
    {
        cout << "\nPatient Record:" << endl;
        cout << "ID        : " << patientId << endl;
        cout << "Name      : " << name << endl;
        cout << "Age       : " << age << endl;
        cout << "Ward      : " << ward << endl;
        cout << "Blood Grp : " << bloodGroup << endl;
    }

    // Transfer patient to another ward
    void transferWard(const string& newWard)
    {
        cout << "Ward Transfer: " << name
             << " -> " << newWard << endl;

        ward = newWard;
    }
};

int main()
{
    {
        Patient p1(1001, "Meera Joshi", 34, "Cardiology", "B+");         // 1. Three stack objects
        Patient p2(1002, "Raj Patel");
        Patient p3;

        cout << "\n--- Patient Records ---" << endl;

        p1.displayRecord();
        p2.displayRecord();
        p3.displayRecord();

        cout << "\n--- Creating Dynamic Array ---" << endl;                 // 2. Created Dynamic array for 4 patients

        Patient* patients = new Patient[4];

        cout << "\n--- Dynamic Patient Records ---" << endl;                 // 3. Display all 4 patients from array

        for (int i = 0; i < 4; i++)
        {
            patients[i].displayRecord();
        }

        cout << "\n--- Ward Transfer ---" << endl;                            // 4. Transfer one patient's ward

        patients[1].transferWard("ICU");

        cout << "\n--- Deleting Dynamic Array ---" << endl;                   // 5.Dynamic array Deleted

        delete[] patients;

        cout << "\n--- End of Block ---" << endl;
    }

    return 0;
}