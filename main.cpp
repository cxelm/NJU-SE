#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <ios>    //used to get stream size
#include <limits> //used to get numeric limits
using namespace std;

#include "./include/global.hh"
#include "./include/hospital.hh"
#include "./include/address.hh"
#include "./include/person.hh"
#include "./include/appointment.hh"
#include "./include/patient.hh"
#include "./include/doctor.hh"
#include "./include/nurse.hh"
#include "./include/driver.hh"
#include "./include/ambulance.hh"

extern int language = 0;
void appointmentsMenu();
void patientsMenu();
void doctorsMenu();
void nursesMenu();
void driversMenu();
void ambulancesMenu();

void appointmentsMenu()
{
    bool exit = false;
    while (!exit)
    {
        int purpose = 0;
        if (language == 0)
        {
            cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "\nSelect an option:\n\n";

            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "./HOME/APPOINTMENTS\n";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "[01] : Book an appointment\n";
            cout << "[02] : Get appointment details\n";
            cout << "[03] : Show all appointments\n\n";
            cout << "[-1] : Back\n";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
            cout << "Enter your choice: ";
        }
        else
        {
            cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "\n请选择一个选项：\n\n";

            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "./主菜单/预约管理\n";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "[01] : 预约\n";
            cout << "[02] : 确定预约细节\n";
            cout << "[03] : 展示所有预约\n\n";
            cout << "[-1] : 返回\n";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
            cout << "请输入您的选择：";
        }
        cin >> purpose;

        if (purpose == 1)
        {
            appointment a;
            a.book();
        }
        else if (purpose == 2)
        {
            appointment a;
            a.getDetails();
            a.printDetails();
        }
        else if (purpose == 3)
        {
            hospital::printAppointments();
        }
        else if (purpose == -1)
        {
            exit = true;
            break;
        }
        else
        {
            if (language == 0) cout << "\nInvalid Choice!\n";
            else cout << "\n无效的输入!\n";
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clearing cin buffer;

        cout << endl; 
        if (language == 0) cout << "\nPress ENTER to continue...\n";
        else cout << "\n请输入回车以继续...\n";
        cout << endl;

        getchar();
    }
    return;
}

void patientsMenu()
{
    bool exit = false;
    while (!exit)
    {
        int purpose = 0;
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        if (language == 0)
        {
            cout << "\nSelect an option:\n\n";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "./HOME/PATIENTS\n";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "[01] : Register a new patient\n";
            cout << "[02] : Get patient details\n";
            cout << "[03] : Hospitalize a registered patient\n";
            cout << "[04] : Report a patient's death\n";
            cout << "[05] : Discharge a patient or their body\n";
            cout << "[06] : Fetch patient details from history\n";
            cout << "[07] : Get details of all registered patients\n\n";
            cout << "[-1] : Back\n";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
            cout << "Enter your choice: ";
        }
        else
        {
            cout << "\n请选择一个选项:\n\n";

            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "./主菜单/患者\n";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "[01] : 注册新患者\n";
            cout << "[02] : 获得患者信息\n";
            cout << "[03] : 为已注册患者办理入院n";
            cout << "[04] : 宣布患者死亡\n";
            cout << "[05] : 注销患者或患者尸体\n";
            cout << "[06] : 从历史记录中查看患者\n";
            cout << "[07] : 查看所有已注册患者\n\n";
            cout << "[-1] : 返回\n";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
            cout << "请输入您的选择：";
        }
        cin >> purpose;

        if (purpose == 1)
        {
            patient p;
            p.addPerson();
        }
        else if (purpose == 2)
        {
            patient p;
            p.getDetails(1);
            p.printDetails();
        }
        else if (purpose == 3)
        {
            patient p;
            p.hospitalize();
        }
        else if (purpose == 4)
        {
            patient p;
            p.reportADeath();
        }
        else if (purpose == 5)
        {
            patient p;
            p.removePerson();
        }
        else if (purpose == 6)
        {
            patient p;
            p.getDetailsFromHistory();
        }
        else if (purpose == 7)
        {
            hospital::printPatients();
        }
        else if (purpose == -1)
        {
            exit = true;
            break;
        }
        else
        {
            if (language == 0) cout << "\nInvalid Choice!\n";
            else cout << "\n无效的输入!\n";
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clearing cin buffer;

        cout << endl;
        if (language == 0) cout << "\nPress ENTER to continue...\n";
        else cout << "\n请输入回车以继续...\n";
        cout << endl;

        getchar();
    }
    return;
}

void doctorsMenu()
{
    bool exit = false;
    while (!exit)
    {
        int purpose = 0;
        if (language == 0)
        {
            cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "\nSelect an option:\n\n";

            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "./HOME/DOCTORS\n";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "[01] : Register a new doctor\n";
            cout << "[02] : Get doctor details\n";
            cout << "[03] : Remove a doctor\n";
            cout << "[04] : Fetch doctor details from history\n";
            cout << "[05] : Get details of all registered doctors\n\n";
            cout << "[-1] : Back\n";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
            cout << "Enter your choice: ";
        }
        else
        {
            cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "\n请选择一个选项：\n\n";

            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "./主菜单/医生\n";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "[01] : 注册新的医生\n";
            cout << "[02] : 获得医生信息\n";
            cout << "[03] : 注销医生\n";
            cout << "[04] : 从历史记录里搜索医生\n";
            cout << "[05] : 获得所有注册医生信息\n\n";
            cout << "[-1] : 返回\n";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
            cout << "请输入您的选择：";
        }
        cin >> purpose;

        if (purpose == 1)
        {
            doctor d;
            d.addPerson();
        }
        else if (purpose == 2)
        {
            doctor d;
            d.getDetails(1);
            d.printDetails();
        }
        else if (purpose == 3)
        {
            doctor d;
            d.removePerson();
        }
        else if (purpose == 4)
        {
            doctor d;
            d.getDetailsFromHistory();
        }
        else if (purpose == 5)
        {
            hospital::printDoctors();
        }
        else if (purpose == -1)
        {
            exit = true;
            break;
        }
        else
        {
            if (language == 0) cout << "\nInvalid Choice!\n";
            else cout << "\n无效的输入!\n";
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clearing cin buffer;

        cout << endl;
        if (language == 0) cout << "\nPress ENTER to continue...\n";
        else cout << "\n请输入回车以继续...\n";
        cout << endl;

        getchar();
    }
    return;
}

void nursesMenu()
{
    bool exit = false;
    while (!exit)
    {
        int purpose = 0;
        if (language == 0)
        {
            cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "\nSelect an option:\n\n";

            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "./HOME/NURSES\n";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "[01] : Register a new nurse\n";
            cout << "[02] : Get nurse details\n";
            cout << "[03] : Remove a nurse\n";
            cout << "[04] : Fetch nurse details from history\n";
            cout << "[05] : Get details of all registered nurses\n\n";
            cout << "[-1] : Back\n";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
            cout << "Enter your choice: ";
        }
        else
        {
            cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "\n请选择一个选项:\n\n";

            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "./主菜单/护士\n";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "[01] : 注册新护士\n";
            cout << "[02] : 获得护士信息\n";
            cout << "[03] : 注销护士\n";
            cout << "[04] : 从历史记录搜索护士\n";
            cout << "[05] : 获得所有注册护士信息\n\n";
            cout << "[-1] : 返回\n";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
            cout << "请输入您的选择：";
        }
        cin >> purpose;

        if (purpose == 1)
        {
            nurse n;
            n.addPerson();
        }
        else if (purpose == 2)
        {
            nurse n;
            n.getDetails(1);
            n.printDetails();
        }
        else if (purpose == 3)
        {
            nurse n;
            n.removePerson();
        }
        else if (purpose == 4)
        {
            nurse n;
            n.getDetailsFromHistory();
        }
        else if (purpose == 5)
        {
            hospital::printNurses();
        }
        else if (purpose == -1)
        {
            exit = true;
            break;
        }
        else
        {
            if (language == 0) cout << "\nInvalid Choice!\n";
            else cout << "\n无效的输入!\n";
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clearing cin buffer;

        cout << endl;
        if (language == 0) cout << "\nPress ENTER to continue...\n";
        else cout << "\n请输入回车以继续...\n";
        cout << endl;

        getchar();
    }
    return;
}

void driversMenu()
{
    bool exit = false;
    while (!exit)
    {
        int purpose = 0;
        if (language == 0)
        {
            cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "\nSelect an option:\n\n";

            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "./HOME/DRIVERS\n";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "[01] : Register a new driver\n";
            cout << "[02] : Get driver details\n";
            cout << "[03] : Remove a driver\n";
            cout << "[04] : Fetch driver details from history\n";
            cout << "[05] : Get details of all registered drivers\n\n";
            cout << "[-1] : Back\n";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
            cout << "Enter your choice: ";
        }
        else
        {
            cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "\n请选择一个选项:\n\n";

            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "./主菜单/司机\n";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "[01] : 注册新司机\n";
            cout << "[02] : 获得司机信息\n";
            cout << "[03] : 注销司机\n";
            cout << "[04] : 从历史记录中查找司机\n";
            cout << "[05] : 获得所有注册司机信息\n\n";
            cout << "[-1] : 返回\n";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
            cout << "请输入您的选择 ";
        }
        cin >> purpose;

        if (purpose == 1)
        {
            driver d;
            d.addPerson();
        }
        else if (purpose == 2)
        {
            driver d;
            d.getDetails(1);
            d.printDetails();
        }
        else if (purpose == 3)
        {
            driver d;
            d.removePerson();
        }
        else if (purpose == 4)
        {
            driver d;
            d.getDetailsFromHistory();
        }
        else if (purpose == 5)
        {
            hospital::printDrivers();
        }
        else if (purpose == -1)
        {
            exit = true;
            break;
        }
        else
        {
            if (language == 0) cout << "\nInvalid Choice!\n";
            else cout << "\n无效的输入!\n";
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clearing cin buffer;

        cout << endl;
        if (language == 0) cout << "\nPress ENTER to continue...\n";
        else cout << "\n请输入回车以继续...\n";
        cout << endl;

        getchar();
    }
    return;
}

void ambulancesMenu()
{
    bool exit = false;
    while (!exit)
    {
        int purpose = 0;
        if (language == 0)
        {
            cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "\nSelect an option:\n\n";

            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "./HOME/AMBULANCES\n";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "[01] : Add an ambulance\n";
            cout << "[02] : Send an ambulance\n";
            cout << "[03] : Get ambulance details\n";
            cout << "[04] : Report ambulance arrival\n";
            cout << "[05] : Remove an ambulance\n";
            cout << "[06] : Fetch ambulance details from history\n";
            cout << "[07] : Get details of all registered ambulances\n\n";
            cout << "[-1] : Back\n";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
            cout << "Enter your choice: ";
        }
        else {
            cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "\n请选择一个选项:\n\n";

            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "./主菜单/救护车\n";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "[01] : 添加救护车\n";
            cout << "[02] : 发送救护车\n";
            cout << "[03] : 获得救护车信息\n";
            cout << "[04] : 声明救护车发出\n";
            cout << "[05] : 注销救护车\n";
            cout << "[06] : 从历史记录中查找救护车\n";
            cout << "[07] : 获得全部注册救护车信息\n\n";
            cout << "[-1] : 返回\n";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
            cout << "请输入您的选择： ";
        }
        cin >> purpose;

        if (purpose == 1)
        {
            ambulance a;
            a.addAmbulance();
        }
        else if (purpose == 2)
        {
            ambulance a;
            a.send();
        }
        else if (purpose == 3)
        {
            ambulance a;
            a.getDetails(1);
            a.printDetails();
        }
        else if (purpose == 4)
        {
            ambulance a;
            a.reportArrival();
        }
        else if (purpose == 5)
        {
            ambulance a;
            a.removeAmbulance();
        }
        else if (purpose == 6)
        {
            ambulance a;
            a.getDetailsFromHistory();
        }
        else if (purpose == 7)
        {
            hospital::printAmbulances();
        }
        else if (purpose == -1)
        {
            exit = true;
            break;
        }
        else
        {
            if (language == 0) cout << "\nInvalid Choice!\n";
            else cout << "\n无效的输入!\n";
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // clearing cin buffer;

        cout << endl;
        if (language == 0) cout << "\nPress ENTER to continue...\n";
        else cout << "\n请输入回车以继续...\n";
        cout << endl;

        getchar();
    }
    return;
}

int main()
{
    fstream f;
    f.open("./data/appointments.csv", ios::in);
    string temp, s, header;
    getline(f, header);
    getline(f, temp);
    f.close();
    stringstream str(temp);
    getline(str, s, ',');
    getline(str, s, ',');
    int dd, mm, yyyy;
    if (s != "")
        cout << "\n\n\nLast usage date (DD-MM-YYYY) : " << s.substr(6, 2) + "-" + s.substr(4, 2) + "-" + s.substr(0, 4) + "\n";
    cout << "\nPlease Enter Today's Date (DD-MM-YYYY) :\n\nEnter Day: ";
    cin >> dd;
    while (dd < 1 || dd > 31)
    {
        cout << "Invalid Day! Please enter a valid day: ";
        cin >> dd;
    }
    cout << "Enter Month: ";
    cin >> mm;
    while (mm < 1 || mm > 12)
    {
        cout << "Invalid Month! Please enter a valid month: ";
        cin >> mm;
    }
    cout << "Enter Year (YYYY): ";
    cin >> yyyy;
    yyyymmdd = yyyy * 10000 + mm * 100 + dd;
    if (stoi(((s == "") ? ("0") : (s))) < yyyymmdd)
    {
        f.open("./data/temp.csv", ios::out);
        f << header << "\n";
        f.close();
        remove("./data/appointments.csv");
        rename("./data/temp.csv", "./data/appointments.csv");
        fstream fout("./data/temp.csv", ios::out);
        f.open("./data/doctors.csv", ios::in);
        getline(f, temp);
        fout << temp << endl;
        while (getline(f, temp))
        {
            if (temp.size())
                temp[temp.size() - 1] = '0';
            fout << temp << endl;
        }
        f.close();
        fout.close();
        remove("./data/doctors.csv");
        rename("./data/temp.csv", "./data/doctors.csv");
    }
    else if (stoi(s) > yyyymmdd && s != "")
    {
        cout << "\nEntered date detected wrong!\nToday's date can't be older than the last usage date, which is : "
             << s.substr(6, 2) + "-" + s.substr(4, 2) + "-" + s.substr(0, 4) + "\n";
        return 0;
    }
    // filling maps with data from csv files;
    {
        doctor d1;
        patient p;
        nurse n;
        driver d2;
        ambulance a1;
        appointment a2;
        d1.fillMap();
        p.fillMap();
        n.fillMap();
        d2.fillMap();
        a1.fillMap();
        a2.fillMap();
        // NOTE:
        // fill drivers' Map before ambulances' Map;
        // fill doctors' and patients' Map before appointments' Map;
    }
    while (1)
    {
        cout << "\nSelect a language（请选择您的语言）:\n\n";
        cout << "[0] : English\n";
        cout << "[1] : Chinese\n";
        cin >> language;
        while (language != 0 && language != 1)
        {
            cout << "\nInvalid Choice!\n";
            cout << "\nSelect a language（请选择您的语言）:\n\n";
            cout << "[0] : English\n";
            cout << "[1] : Chinese\n";
            cin >> language;
        }
        int category = 0;
        if (language == 0)
        {
            cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "\nSelect a category:\n\n";

            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "./HOME\n";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "[01] : APPOINTMENTS\n";
            cout << "[02] : PATIENTS\n";
            cout << "[03] : DOCTORS\n";
            cout << "[04] : NURSES\n";
            cout << "[05] : DRIVERS\n";
            cout << "[06] : AMBULANCES\n\n";
            cout << "[-1] : EXIT\n";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
            cout << "Enter your choice: ";
        }
        else
        {
            cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "\n请选择分类:\n\n";

            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "./主菜单\n";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "[01] : 预约管理\n";
            cout << "[02] : 患者\n";
            cout << "[03] : 医生\n";
            cout << "[04] : 护士\n";
            cout << "[05] : 司机\n";
            cout << "[06] : 救护车\n\n";
            cout << "[-1] : 退出\n";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
            cout << "请输入您的选择： ";
        }
        cin >> category;
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout << "\n";
        if (category == -1)
        {
            if (language == 0)
            {
                cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                cout << "\nShutting Down System...\n";
                cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            }
            else
            {
                cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
                cout << "\n正在关闭系统...\n";
                cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            }
            break;
        }
        else if (category == 1)
        {
            appointmentsMenu();
        }
        else if (category == 2)
        {
            patientsMenu();
        }
        else if (category == 3)
        {
            doctorsMenu();
        }
        else if (category == 4)
        {
            nursesMenu();
        }
        else if (category == 5)
        {
            driversMenu();
        }
        else if (category == 6)
        {
            ambulancesMenu();
        }
        else
        {
            if (language == 0) cout << "\nInvalid Choice!\n";
            else cout << "\n无效的输入!\n";
        }

        cout << endl;
    }
    // saving data inside maps by overwriting it on the files
    {
        doctor d1;
        patient p;
        nurse n;
        driver d2;
        ambulance a1;
        appointment a2;
        d1.saveMap();
        p.saveMap();
        n.saveMap();
        d2.saveMap();
        a1.saveMap();
        a2.saveMap();
    }

    return 0;
}
