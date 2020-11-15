#include<iostream>
#include<cstdlib>
#include<cstdio>

using namespace std;
class biggest
{
                public:
                int a,b;
                void input();



};
void biggest::input()
{
        cout<<"Enter 2 nos.:";
        cin>>a>>b;
}
class derived: public biggest
{
    public:
        int compare_display()
        {
        if(a>=b) {cout<<"Biggest no.:"<<a;}
        else {cout<<"Biggest no.:"<<b;}
        }
};
int main()
{
        derived b;
        b.input();
        b.compare_display();
        return 0;

}
