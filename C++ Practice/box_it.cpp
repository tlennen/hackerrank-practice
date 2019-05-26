#include<bits/stdc++.h>

using namespace std;

// https://www.hackerrank.com/challenges/box-it/problem

//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

class Box{
    private:
        int l,b,h;
    public:
    Box(){
        l=b=h=0;
    }
    Box(int len,int base, int height){
        l = len;
        b = base;
        h = height;
    }
    Box(Box &x){
        l = x.get_length();
        b = x.get_base();
        h = x.get_height();
    }
    int get_length(){
        return l;
    }
    int get_base() {
         return b;
    }
    int get_height() {
        return h;
    }
    long CalculateVolume(){
        return long(l)*long(b)*long(h);
    }

    friend bool operator < (Box &x, Box &y){
        if(x.get_length()<y.get_length())
            return true;
        else if(x.get_length()==y.get_length()){
            if(x.get_base()<y.get_base()){
                return true;
            } 
            else if (x.get_base() == y.get_base()&&x.get_height()<y.get_height()){
                return true;
            }
        }
        return false;
    }

    friend ostream& operator<<(ostream &os, Box& n){
        os << n.get_length() << " " <<n.get_base() <<" " <<n.get_height() << " ";
        return os;
    }
};


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}