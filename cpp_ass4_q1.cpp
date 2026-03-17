#include <iostream>
using namespace std;
class Time
{

private:
    int h;
    int m;
    int s;

public:
    Time() : h(0), m(0), s(0)
    {
    }
    Time(int h, int m, int s) : h(h), m(m), s(s)
    {
    }
    int getHour(void)
    {
        return this->h;
    }
    int getMinute(void)
    {
        return this->m;
    }
    int getSeconds(void)
    {
        return this->s;
    }
    void setHour(int h)
    {
        this->h = h;
    }
    void setMinute(int m)
    {
        this->m = m;
    }
    void setSeconds(int s)
    {
        this->s = s;
    }
    void printTime()
    {
        cout << h << ":" << m << ":" << s << endl;
    }
    void addTime()
    {
        cout << "enter hour: ";
        cin >> h;
        cout << "enter minute: ";
        cin >> m;
        cout << "enter second: ";
        cin >> s;
    }
    void timeFormat( void )
    {
        this->s++; 
        if(this->s== 60)
        {
            this->s = 0; 
            this->m++; 
            if(this->m == 60)
            {
                this->m = 0; 
                this->h++; 
                if(this->h == 24)
                {
                    this->h = 0; 
                }
            }
        }
    }
};
int main()
{
    Time *arr = new Time[2];

    int choice;
    do
    {
        cout << "Enter choice: " << endl;
        cout << "1.Add Time: " << endl;
        cout << "2.Display All Time: " << endl;
        cout << "3.Display only hrs of all time objects: " << endl;
        cout << "0.Exit" << endl;
        cin >> choice;

        switch (choice)
        {

        case 1:
        {

            for (int i = 0; i < 2; i++)
            {
                arr[i].addTime();
            }
            break;
        }
        case 2:
        {
            for (int i = 0; i < 2; i++)
            {
                arr[i].timeFormat();
                arr[i].printTime();
            }
            break;
        }
        case 3:
        {
            for (int i = 0; i < 2; i++)
            {
                cout << arr[i].getHour() << " " << endl;
            }
            break;
        }
        
        }
    } while (choice != 0);
    delete[] arr;
    arr = NULL;
    return 0;
}