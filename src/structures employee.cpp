#include <bits/stdc++.h>
using namespace std;
/*          " external declarition "
struct empolyee
{
    string name;
    double salary ;
    string address;
    string email;
};
int main ()
{
    empolyee medhat;
    medhat.name = "Mohamed Medhat";
    medhat.salary = 10000.50;
    medhat.address = "sadat city";
    medhat.email = "mohamedmedhateltlawy@gmail.com";
    return 0;
}*/
/*int main ()
{
    //     " internal declarition "
    struct employe {
    string name ;
    double salary ;
    };
    employe IBM_emp[10];
    for (int i=0;i<10;i++)
        cin>>IBM_emp.name>>IBM_emp.salary;
}*/
/*struct employe      // with functions and prametares:)
{
    string name;
    double salary;
    int lucky_numbers[3];
};
void print (employe &emp)
{
    cout<<emp.name<<"  his salary is "<<emp.salary<<"k. ";
    cout<<"his lucky numbers are :";
    for (int i=0;i<3;i++)
        cout<<emp.lucky_numbers[i]<<" ";
}
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    employe ali = {"ali ahmed",120.23,{10,2,5}};
    print (ali);
    return 0;
}*/
/*struct employee             // Dealing with Pointers
{
    string name;
    int salary ;
};
int main ()
{
    employee* pemp = NULL;
    pemp = new employee ;

    pemp->name = "mostafa";
    pemp->salary = 140;
    delete pemp ;
}*/
// sorting
/*struct employee
{
    string name ;
    int salary ;
    int position ;
};

// writing wrong function may case RTE
// when return true , means first object must come before second one
// if we called cmp(a,b) and return true, never have cmp(a,b) = true
// if a==b, then both cmp(a,b) and cmp(b,a) must give false

bool cmp (const employee &first , const employee &second)
{
    // the right comparision should be field by field based by your priority


    // if first field NOT equal, then it determines the answer
    if (first.salary != second.salary)
    // let bigger salary by preferred
        return first.salary>second.salary ;

    // now same salary, name to nameatributes
    if (first.name != second.name)
        return first.name < second.name;

        // now the remaining is the position. directily compare here. no if condition needed.
        return first.position < second.position;
}
int main ()
{
    employee emp[5] = {
    {"baher",70,5},{"zyad",99,10},{"ali",70,2},{"baher",70,5},{"baher",70,3} };
// cmp function let sorting based on bigger salary,
// if tie smaller name , if tie smaller position ,, (tie = equavelance )
sort (emp,emp+5,cmp );
for (int i=0;i<5;i++)
    {employee &emps = emp[i];
cout<<emps.salary<<"   "<<emps.name<<"   "<<emps.position<<endl;
}
}*/
// size of struct
/*struct test1 // how to it matters when we order things will,man
{
    short x;
    int y;
    char t;
};
struct test2
{
    int y;
    short x;
    char t;
};
int main ()
{
    test1 t1;
    test2 t2;
    cout<<"size of first structure is "<<sizeof(t1)<<endl;
    cout<<"size of second structure is "<<sizeof(t2)<<endl;
    return 0;
}*/
// struct :: method
/*struct employe
{
        string name ;
        int salary;
        void setsalary(int value)
        {
            salary = value;
        }
        void addsalary(int value);
};
void employe::addsalary(int value)
{
    salary +=value;
}
int main ()
{
    employe emp;
    cout<<emp.salary<<"\n"; // garbage, you may be lucky and get zero.
    emp.setsalary(100);
    cout<<emp.salary<<endl;     // 100

    emp.addsalary(35);
    cout<<emp.salary<<endl;     // 135
}*/
// constructor and  destractor
/*struct employe
{
    string name;
    int salary;
employe(int my_salary , string my_name)
{        // constractor
    cout<<"creaing new object "<<endl;
        salary  = my_salary ;
        name = my_name;
}
~employe ()
{       // destractor
    cout<<"destroying the object"<<endl;
}
void print();

};
void employe::print()
{
    cout<<name<<" his salary "<<salary<<endl;
}
void print ()
{
    cout<<"function to say hallo"<<endl;
}
int main ()
{
    print();
    employe emp(2000,"ali");
    emp.print();
    //cout<<"salam"<<endl;
}*/
