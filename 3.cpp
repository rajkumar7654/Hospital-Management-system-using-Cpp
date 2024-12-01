//project Hospital management system semester 3 by Raj
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct hospital
{
    int page, pid;
    long long aaa, pphone;
    string pgender, pname;
    string padress, pdisease, pblood;
}; // hospital

// doctor structure
struct doctor
{
    string dname, dspecialist, dblood, dgender;
    int did, dage;
    int loginchoice1;
};
// declaratio of variable of structure
hospital hospit;
doctor doc;
// declare vector with varibale
vector<hospital> vh;
vector<doctor> dr;

//Function Section__________________
//PATIENT
//fill the patient detail
void pateintinput()
{
	int choicee;
	// its is system clear methode use to not display the privious output
                system("cls");
                do
                {
                    cout << "\nEnter the Id number:";
                    cin >> hospit.pid;
                    cin.ignore();
                    cout << "\nEnter the Patient Name:";
                    cin >> hospit.pname;
                    cin.ignore();
                    cout << "\nEnter the Patient age:";
                    cin >> hospit.page;
                    cin.ignore();
                    cout << "\nEnter the Patient Gender:";
                    cin >> hospit.pgender;
                    cin.ignore();
                    cout << "\nEnter the Patient Contact number:";
                    cin >> hospit.pphone;
                    cin.ignore();
                    cout << "\nEnter the Patient Disease:";
                    cin >> hospit.pdisease;
                    cin.ignore();
                    cout << "\nEnter the patient blood group:";
                    cin >> hospit.pblood;
                    cin.ignore();
                    // its assgin the memory
                    vh.push_back(hospit);
                    // for continue for add patient detail
                    for (int i = 0; i < vh.size(); i++)
                    {
                        cout << i + 1 << "Patient admitted succesfully......" << endl;
                    }
                    cout << "\n1 for continuie & 0 for exit:";
                    cin >> choicee;

                } // do
                while (choicee != 0 && choicee == 1);
}

//
PatientSection()
{
	int iinum;
                cout << "\nEnter the id number:";
                cin >> iinum;
                for (int i = 0; i < vh.size(); i++)
                {
                	if (iinum == vh[i].pid)
                	{
                    cout << "Patient ID is:" << vh[i].pid << endl;
                    cout << "Name:" << vh[i].pname << endl;
                    cout << "age:" << vh[i].page << endl;
                    cout << "Gender:" << vh[i].pgender << endl;
                    cout << "contact number:" << vh[i].pphone << endl;
                    cout << "Disease:" << vh[i].pdisease << endl;
                    cout << "Blood group:" << vh[i].pblood << endl;
                    cout<<endl;
                    cout<<endl;
                    }
                    else
                    {
                    	cout<<"Sorry this "<<iinum<<"is not found in database"<<endl;
					}
                }
}

//Patient display detail
void PatientDisplay()
{
	for (int i = 0; i < vh.size(); i++)
                {
                    cout << "Patient ID is:" << vh[i].pid << endl;
                    cout << "Name:" << vh[i].pname << endl;
                    cout << "age:" << vh[i].page << endl;
                    cout << "Gender:" << vh[i].pgender << endl;
                    cout << "contact number:" << vh[i].pphone << endl;
                    cout << "Disease:" << vh[i].pdisease << endl;
                    cout << "Blood group:" << vh[i].pblood << endl;
                    cout << "-----------------------" << endl;
                }
}

//Emergency ward
void EmergencyWard()
{
	system("cls");
                int time,choice;
                cout << "\nEnter the Current time:";
                cin >> time;

                do
                {

                    if (time <= 6)
                    {
                        cout << "Dr. available..." << endl;
                        cout << "-:General Physicain:-" << endl;
                        cout << "Dr. Ritesh Pandey        ,  Room no:45" << endl;
                        cout << "Dr. Dhananjay kr. yadav  ,  Room no:11" << endl;
                        cout << "Dr. Ram singh            ,  Room no:19" << endl;
                        cout << "Dr. Divya bharti         ,  Room no:16" << endl;
                        cout << endl;
                        cout << "-:Diagnosis Specialist:-" << endl;
                        cout << "Dr. Nandkishor kumar     ,  Room no:13" << endl;
                        cout << "Dr. Anjali pandey        ,  Room no:21" << endl;
                        cout << "Dr. Rashmika ojha        ,  Room no:22" << endl;
                        cout << "Dr. Vijay saw            ,  Room no:09" << endl;
                    }
                    else
                    {
                        cout << "Dr. available..." << endl;
                        cout << "-:General Physicain:-" << endl;
                        cout << "Dr. Yash ojha            ,  Room no:45" << endl;
                        cout << "Dr. Abhijeet kr.saw      ,  Room no:11" << endl;
                        cout << "Dr. Krish raj            ,  Room no:19" << endl;
                        cout << "Dr. Pappu kumar          ,  Room no:16" << endl;
                        cout << endl;
                        cout << "-:Diagnosis Specialist:-" << endl;
                        cout << "Dr. Nandkishor kumar     ,  Room no:13" << endl;
                        cout << "Dr. Anjali pandey        ,  Room no:21" << endl;
                        cout << "Dr. Rashmika ojha        ,  Room no:22" << endl;
                        cout << "Dr. Preety sinha         ,  Room no:09" << endl;
                    }

                    cout << "\n1 for continuie & 0 for exit:";
                    cin >> choice;

                } // do
                while (choice != 0 && choice == 1);
}

//Delete Patient Detail in database
void DeletePatient()
{
	  int dismiss;
                cout << "\nEnter the Patient number for dismiss..." << endl;
                cin >> dismiss;
                for (int i = 0; i, vh.size(); i++)
                {
                    if (dismiss == vh[i].pid)
                    {
                        cout << "Patient ID is:" << vh[i].pid << endl;
                        cout << "Name:" << vh[i].pname << endl;
                        cout << "age:" << vh[i].page << endl;
                        cout << "Gender:" << vh[i].pgender << endl;
                        cout << "contact number:" << vh[i].pphone << endl;
                        cout << "Disease:" << vh[i].pdisease << endl;
                        cout << "Blood group:" << vh[i].pblood << endl;
                        // this is method that use to erase the paticullar data
                        vh.erase(vh.begin() + i);
                    }
                    cout << "\nPatient dismissed sucessfully...." << endl;
                    cout << "No. of Patient admitted:" << vh.size();
                }
}
//Doctor Fucntion
//fill the Doctor detail
//FIll the Doctor detail
void DoctorInput()
{
	int choice1;
	system("cls"); // its is system clear methode use to not display the privious output
                do
                {
                    cout << "\nEnter the Id number:";
                    cin >> doc.did;
                    cin.ignore();
                    cout << "\nEnter the Doctor Name:";
                    cin >> doc.dname;
                    cin.ignore();
                    cout << "\nEnter the Doctor age:";
                    cin >> doc.dage;
                    cin.ignore();
                    cout << "\nEnter the Doctor Gender:";
                    cout << "Male or Female" << endl;
                    cin >> doc.dgender;
                    cin.ignore();
                    cout << "\nEnter the patient blood group:";
                    cin >> doc.dblood;
                    cin.ignore();
                    // its assgin the memory
                    dr.push_back(doc);
                    // for continue for add patient detail
                    for (int i = 0; i < dr.size(); i++)
                    {
                        cout << i + 1 << "Doctor admitted succesfully......" << endl;
                    }
                    cout << "\n1 for continuie & 0 for exit:";
                    cin >> choice1;

                } // do
                while (choice1 != 0 && choice1 == 1);
}

//Search Doctor By ID
void DoctorSearch()
{
	int inum;
                cout << "Enter your Id for search:" << endl;
                cin >> inum;
                for (int i = 0; i <= dr.size(); i++)
                {
                    if (inum == dr[i].did)
                    {
                        cout << "Doctor ID is:" << dr[i].did << endl;
                        cout << "Name:" << dr[i].dname << endl;
                        cout << "age:" << dr[i].dage << endl;
                        cout << "Gender:" << dr[i].dgender << endl;
                        cout << "Blood group:" << dr[i].dblood << endl;
                        cout << "-----------------------" << endl;
                    }
                    else
                    {
                    	cout<<"Sorry this "<<inum<<"is not found in database"<<endl;
					}
                }
}

//Display Doctor Detail
void DoctorDisplay()
{
	 for (int i = 0; i < dr.size(); i++)
                {
                    cout << "Patient ID is:" << dr[i].did << endl;
                    cout << "Name:" << dr[i].dname << endl;
                    cout << "age:" << dr[i].dage << endl;
                    cout << "Gender:" << dr[i].dgender << endl;
                    cout << "Blood group:" << dr[i].dblood << endl;
                    cout << endl;
                }
}

//Delete Doctor data from database
void DoctorDelete()
{
	int dismiss1;
                cout << "\nEnter the doctor number for dismiss..." << endl;
                cin >> dismiss1;
                for (int i = 0; i, dr.size(); i++)
                {
                    if (dismiss1 == dr[i].did)
                    {
                        cout << "Patient ID is:" << dr[i].did << endl;
                        cout << "Name:" << dr[i].dname << endl;
                        cout << "age:" << dr[i].dage << endl;
                        cout << "Gender:" << dr[i].dgender << endl;
                        cout << "Blood group:" << dr[i].dblood << endl;
                        // this is method that use to erase the paticullar data
                        dr.erase(dr.begin() + i);
                    }
                    cout << "\nPatient dismissed sucessfully...." << endl;
                    cout << "No. of Patient admitted:" << dr.size();
                }
}
// main body
int main()
{
    int value, section, loginchoice;
    string ulogin;
    long loginp;

    cout << "Admin Login" << endl;
    cout << "\nEnter username:";
    cin >> ulogin;
    cout << "\nPassword:";
    cin >> loginp;
    cout << "\n1.Patient Section";
    cout << "\n2.Doctor Section" << endl;
    cout << "Enter your choice:";
    cin >> section;
    switch (section)
    {
    case 1:
    {
        cout << "-:Welcome to Dasboard:-" << endl;
        while (true)
        {
            // detail chhose by user to perform work

            cout << "1.Add Patient detail    :" << endl;
            cout << "2.Search Patient by id  :" << endl;
            cout << "3.Display all Patient   :" << endl;
            cout << "4.Emergency ward        :" << endl;
            cout << "5.Delete Patient detail :" << endl;
            cout << "6.Exit                  :" << endl;
            cout << "Enter the choice:" << endl;
            cin >> value;

            switch (value)
            {

            case 1:
            {
                pateintinput();
                break;
            } // case2

            // for Search Patient by id
            case 2:
            {
                PatientSection();

                break;
            }

            // for display all patient
            case 3:
            {
                PatientDisplay();
                break;
            }

            // Emergency ward
            case 4:
            {
                EmergencyWard();
                break;
            } // case5

            // delete patient
            case 5:
            {
              DeletePatient();
                break;
            }
            case 6:
            {
                exit(0);
                cout << endl;
                cout << endl;
                break;
            }
            default:
            {
                system("cls");
                cout << "Please press valid key......" << endl;
                break;
            } // default

            } // switch
        } // while
        break;
    } // case 1
    case 2:
    {
        int value1;
        char g;
        cout << "-:Welcome to Patient Dasboard:-" << endl;
        while (true)
        {

            // detail chhose by user to perform work

            cout << "1.Add Doctor detail     :" << endl; // done
            cout << "2.Search doctor  by id  :" << endl;
            cout << "3.Display all Doctor    :" << endl; // done
            cout << "4.Delete Doctor detail  :" << endl; // done
            cout << "5.Exit                  :" << endl; // done
            cout << "Enter the choice:" << endl;
            cin >> value1;

            switch (value1)
            {
            case 1:
            {
                DoctorInput();
                break;
            } // case1

            case 2:
            {
                DoctorSearch();

                break;
            }
            case 3:
            {
               DoctorDisplay();
                break;
            }
            case 4:
            {
                DoctorDelete();
                break;
            }
            case 5:
            {
                exit(0);
                cout << endl;
                cout << endl;
                break;
            }
            default:
            {
                system("cls");
                cout << "Please press valid key......" << endl;
                break;
            } // default
            } // switch
        } // while

        break;
    } // case 2

    } // switch section
    return 0;
} // main body
