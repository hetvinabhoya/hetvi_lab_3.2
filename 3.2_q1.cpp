#include<iostream>
using namespace std;

class Hotel{
	private:
		int h_id;
		string h_name;
		string h_type;
		int h_rating;
		static string h_location;
		int h_establish_year;
		int h_staff_quantity;
		int h_room_quantity;
		
	public:
		setData(){
			cout << "Enter Hotel Id : ";
			cin >> this->h_id;
			cout << "Enter Hotel Name : ";
			cin >> this->h_name;
			cout << "Enter Hotel Type : ";
			cin >> this->h_type;
			cout << "Enter Hotel Rating : ";
			cin >> this->h_rating;
			cout << "Enter Hotel Establish Year : ";
			cin >> this->h_establish_year;
			cout << "Enter Hotel Staff Quantity : ";
			cin >> this->h_staff_quantity;
			cout << "Enter Hotel Room Quantity : ";
			cin >> this->h_room_quantity;
			
			cout << "-----------------------------------------" << endl;
			
		}
		
		getData1(){
			cout << "Id : " << this->h_id << endl;
			cout << "Name : " << this->h_name << endl;
			cout << "Type : " << this->h_type << endl;
			cout << "Rating : " << this->h_rating << " - Star" << endl;	
			
		}
		
		getData2(){
			cout << "Establish year : " << this->h_establish_year << endl;
			cout << "Staff quantity : " << this->h_staff_quantity << endl;
			cout << "Room quantity : " << this->h_room_quantity << endl;
			
			cout << "-----------------------------------------" << endl;
		}
		
		static h_locationinfo(){
			cout << "Hotel location : " << h_location << endl;
		}
    
};

string Hotel::h_location = "Mumbai";

int main()
{
	int n,i;
	
	cout << "How many Hotels in your city : ";
	cin >> n;
	
	Hotel a[n];
	
	for(i=0;i<n;i++)
	{
		a[i].setData();
	}
	
	for(i=0;i<n;i++)
	{
		a[i].getData1();
		a[i].h_locationinfo();
		a[i].getData2();
	}
	
	
	return 0;
	
}
