#include "libs.h"

class Student
{
private:
	string s_n_p, birth_date, phone, city, country, 
		institute_name, institute_city, institute_country;
	float group_number;
public:
    Student(
        const string& s_n_p, const string& birth_date, const string& phone,
        const string& city, const string& country,
        const string& institute_name, const string& institute_city,
        const string& institute_country, float group_number)
        : s_n_p(s_n_p),
        birth_date(birth_date),
        phone(phone),
        city(city),
        country(country),
        institute_name(institute_name),
        institute_city(institute_city),
        institute_country(institute_country),
        group_number(group_number) {
    }
    void printFunc() const
    {
        cout << "Student Info:" << endl;
        cout << "Name: " << s_n_p << endl;
        cout << "Birth Date: " << birth_date << endl;
        cout << "Phone: " << phone << endl;
        cout << "City: " << city << ", Country: " << country << endl;
        cout << "Institute: " << institute_name
            << " (" << institute_city << ", " << institute_country << ")" << endl;
        cout << "Group Number: " << group_number << endl;
    }
    string getSNP() const { return s_n_p; }
    string getBDate() const { return birth_date; }
    string getPhone() const { return phone; }
    string getCity() const { return city; }
    string getCountry() const { return country; }
    string getIName() const { return institute_name; }
    string getICity() const { return institute_city; }
    string getICountry() const { return institute_country; }
    float getGNumber() const { return group_number; }

    void setSNP(const string& u_snp) { s_n_p = u_snp; }
    void setBDate(const string& u_birth_date) { birth_date = u_birth_date; }
    void setPhone(const string& u_phone) { phone = u_phone; }
    void setCity(const string& u_city) { city = u_city; }
    void setCountry(const string& u_country) { country = u_country; }
    void setIName(const string& u_iname) { institute_name = u_iname; }
    void setICity(const string& u_icity) { institute_city = u_icity; }
    void setICountry(const string& u_icountry) { institute_country = u_icountry; }
    void setGNumber(float u_gnumber) { group_number = u_gnumber; }
};