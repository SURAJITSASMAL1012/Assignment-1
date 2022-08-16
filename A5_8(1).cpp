/*8. Program in C++ Using file handling to perform following operations on a text file:
    a)	Add new record
    b)	View all records
    c)	Delete particular record
    d)	Search record
    e)	Update record
*/

#include <iostream>
#include <cstdio>
#include <fstream>
#include <cstring>
using namespace std;

class Student
{
private:
    int roll_no;
    char name[20];
    char branch[20];
    int year;
    float marks[5];
    int recordid;

public:
    int allotRecordid();
    void getRecord();
    void showRecord();
    void addRecord();
    void viewRecord();
    void searchRecord();
    void deleteRecord();
    void modifyRecord();
};

int Student::allotRecordid()
{
    ifstream fin;
    Student temp;
    int id = 0;
    fin.open("records.txt", ios::in | ios::binary);
    if (!fin)
        return (id + 1);
    else
    {
        fin.read((char *)&temp, sizeof(temp));
        while (!fin.eof())
        {
            id = temp.recordid;
            fin.read((char *)&temp, sizeof(temp));
        }
        id++;
        return (id);
    }
}

void Student::getRecord()
{
    cout << "Enter Name: ";
    fflush(stdin);
    gets(name);
    cout << "Enter Roll No: ";
    cin >> roll_no;
    cout << "Enter Branch: ";
    cin >> branch;
    cout << "Enter Year: ";
    cin >> year;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Marks" << i + 1 << " : ";
        cin >> marks[i];
    }
    recordid = allotRecordid();
}
void Student::showRecord()
{
    cout << endl
         << "Record id: " << recordid << endl
         << "Name: " << name << endl
         << "Roll No.: " << roll_no << endl
         << "Branch: " << branch << endl
         << "Year: " << year << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Marks " << i + 1 << " : " << marks[i] << endl;
    }
}
void Student::addRecord()
{
    ofstream fout;
    fout.open("records.txt", ios::out | ios::app | ios::binary);
    if (!fout)
        cout << endl
             << "File can not open" << endl;
    else
        fout.write((char *)this, sizeof(*this));
    cout << "Add Record Successfully!" << endl;
    fout.close();
}
void Student::viewRecord()
{
    ifstream fin;
    fin.open("records.txt", ios::in | ios::binary);
    if (!fin)
        cout << "File not found";
    else
    {
        fin.read((char *)this, sizeof(*this));
        while (!fin.eof())
        {
            showRecord();
            fin.read((char *)this, sizeof(*this));
        }
    }
    fin.close();
}
void Student::searchRecord()
{
    ifstream fin;
    char str[20];
    fin.open("records.txt", ios::in | ios::binary);
    cout << "Enter the name of Student to search: ";
    fflush(stdin);
    gets(str);
    if (!fin)
        cout << endl
             << "File not found" << endl;
    else
    {
        fin.read((char *)this, sizeof(*this));
        while (!fin.eof())
        {

            if (!strcmp(this->name, str))
            {
                showRecord();
                break;
            }
            fin.read((char *)this, sizeof(*this));
        }
        if (fin.eof())
            cout << endl
                 << "Record not found";
    }
    fin.close();
}
void Student::modifyRecord()
{
    int id, r = 0;
    fstream file;
    file.open("records.txt", ios::in | ios::out | ios::ate | ios::binary);
    cout << endl
         << "Enter record number to modify : ";
    cin >> id;
    file.seekg(0);
    if (!file)
        cout << "File not found";
    else
    {
        file.read((char *)this, sizeof(*this));

        while (!file.eof())
        {
            r++;
            if (recordid == id)
            {
                showRecord();
                cout << "\nRe-enter Student details:\n";
                cout << "Enter Name:";
                fflush(stdin);
                gets(name);
                cout << "Enter Roll No: ";
                cin >> roll_no;
                cout << "Enter Branch: ";
                cin >> branch;
                cout << "Enter Year: ";
                cin >> year;
                for (int i = 0; i < 5; i++)
                {
                    cout << "Enter Marks" << i + 1 << " : ";
                    cin >> marks[i];
                }
                file.seekp((r - 1) * sizeof(Student), ios::beg);
                file.write((char *)this, sizeof(*this));
                break;
            }
            file.read((char *)this, sizeof(*this));
        }
        if (file.eof())
            cout << "Record not found!";
    }
    file.close();
}
void Student::deleteRecord()
{
    int x;
    ifstream infile;
    infile.open("records.txt", ios::binary);
    if (!infile)
    {
        cout << endl
             << "Error in opening! File Not Found!!" << endl;
        return;
    }
    cout << endl
         << "Enter record id to Delete: ";
    cin >> x;

    fstream tmpfile;
    tmpfile.open("temp.txt", ios::out | ios::binary);
    infile.seekg(0);

    int flag = 0;
    while (infile.read(reinterpret_cast<char *>(this), sizeof(*this)))
    {
        if (recordid != x)
        {
            tmpfile.write(reinterpret_cast<char *>(this), sizeof(*this));
        }
        else
            flag = 1;
    }
    if (flag == 0)
    {
        cout << endl
             << "Record not found!!!  Couldn't delete !!!" << endl;
        return;
    }

    cout << endl
         << "Record Deleted!!!" << endl
         << endl;
    infile.close();
    tmpfile.close();
    remove("records.txt");
    rename("temp.txt", "records.txt");
}

int main()
{
    Student b;
    while (1)
    {
        cout << endl
             << "1. Add new Record";
        cout << endl
             << "2. View all Records";
        cout << endl
             << "3. Search Records";
        cout << endl
             << "4. modify Records";
        cout << endl
             << "5. delete Records";
        cout << endl
             << "6. Exit";
        cout << endl
             << "Enter your choice: ";
        int ch;
        cin >> ch;
        switch (ch)
        {
        case 1:
            b.getRecord();
            b.addRecord();
            break;
        case 2:
            b.viewRecord();
            break;
        case 3:
            b.searchRecord();
            break;
        case 4:
            b.modifyRecord();
            break;
        case 5:
            b.deleteRecord();
            break;
        case 6:
            exit(0);
        default:
            cout << "Enter Valid choice!";
        }
    }

    return 0;
}

/*#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    int n;
    cout << "Enter your choice: " << endl;
    cout << "1) Add new record" << endl
         << "2) View all records" << endl
         << "3) Delete particular record"
         << endl
         << "4) Search record" << endl
         << "5) Update record" << endl;
    cin >> n;
    if (n == 1)
    {
        string b, a;
        ifstream in;
        in.open("records.txt");
        while (in.eof() == 0)
            getline(in, b);
        in.close();
        ofstream out("records.txt");
        cout << "Enter new records: ";
        fflush(stdin);
        getline(cin, a);
        out << a << endl
            << b;
        cout << "Add new record Successfully!" << endl;
        out.close();
    }
    else if (n == 2)
    {
        string c;
        ifstream in1;
        in1.open("records.txt");
        while (in1.eof() == 0)
        {
            getline(in1, c);
            cout << c << endl;
        }
        in1.close();
    }
    else if (n == 3)
    {
        int k;
        ofstream out("records.txt");
        cout << "Press 1 to delete.";
        cin >> k;
        if (k == 1)
        {

            out << "";
            cout << "Records Successfully Deleted!" << endl;
        }
        else
            exit(1);
        out.close();
    }
    else if (n == 4)
    {
        string e, f;
        ifstream in1;
        in1.open("records.txt");
        while (in1.eof() == 0)
        {
            getline(in1, e);
        }
        cout << "Enter keyword to search: ";
        cin >> f;
        f.find(e.begin(), e.end());
        in1.close();
    }
    return 0;
}*/