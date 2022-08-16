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
    void UpdateRecord();
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
        cout << "File can not open";
    else
        fout.write((char *)this, sizeof(*this));
        cout<<"Add Record Successfully!"<<endl;
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
    cout << "Enter the name of Student to search:";
    fflush(stdin);
    gets(str);
    if (!fin)
        cout << "File not found";
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
            cout << "\nRecord not found";
    }
    fin.close();
}
void Student::UpdateRecord()
{
    int id, r = 0;
    fstream file;
    file.open("records.txt", ios::in | ios::out | ios::ate | ios::binary);
    cout << "\nEnter record number to Update : ";
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
/*void Student::deleteRecord()
{
    ifstream fin;
    ofstream fout;
    int id;
    char x;
    fin.open("records.txt", ios::in | ios::binary);
    fout.open("records.txt", ios::out | ios::app | ios::binary);
    cout << "Enter recordid to delete record: ";
    cin >> id;
    if (!fin)
        cout << "File not found";
    else
    {
        fin.read((char *)this, sizeof(*this));
        while (!fin.eof())
        {
            if (this->recordid == id)
            {
                cout << "Record you want to delete is:\n\n";
                showRecord();
                cout << "\nAre you sure you want to delete this record(y/n): ";
                fflush(stdin);
                cin >> x;
                if (x == 'n')
                    fout.write((char *)this, sizeof(*this));
                else
                    cout << "\nRecord is deleted";
            }
            else
                fout.write((char *)this, sizeof(*this));
            fin.read((char *)this, sizeof(*this));
        }
        fin.close();
        fout.close();

        //system("erase record.txt");
        //system("rename record.txt");
    }
}*/
void Student::deleteRecord()
{
    int x;
    ifstream infile;
    infile.open("record.txt",ios::binary);
    if(!infile)
    {
        cout<<endl
            <<"Enter in opening! File not Found!"<<endl;
        return;
    }
    cout<<endl 
        <<"Enter the record id before delete: ";
    cin>>x;
    fstream tempfile;
    tempfile.open("temp.txt",ios::out|ios::binary);
    infile.seekg(0);

    int flag = 0;
    while(infile.read(reinterpret_cast<char*>(this),sizeof(*this)));
    {
        if(recordid != x)
        {
            tempfile.write(reinterpret_cast<char*>(this),sizeof(*this));
        }
        else
        flag = 1;
    }
    if(flag==0)
    {
        cout<<endl
            <<"Record id not found!!! couldn't delete!!!"<<endl;
        return;
    }
    else
    cout<<endl 
        <<"Record id deleted!!"<<endl;
    infile.close();
    tempfile.close();
    remove("records.txt");
    rename("temp.txt","records.txt");
}

int main()
{
    Student b;
    while (1)
    {
        cout << "\n1. Add new Record";
        cout << "\n2. View all Records";
        cout << "\n3. Search Records";
        cout << "\n4. Update Records";
        cout << "\n5. delete Records";
        cout << "\n6. Exit";
        cout << "\n\nEnter your choice: ";
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
            b.UpdateRecord();
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

