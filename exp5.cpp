#include <iostream>
#include <string>

class User
{
private:
    std::string name;
    int birth_year;
    int birth_month;
    int birth_day;
    double salary;

public:
    // Constructor to initialize member variables
    User(const std::string &name, int birth_year, int birth_month, int birth_day, double salary)
        : name(name), birth_year(birth_year), birth_month(birth_month), birth_day(birth_day), salary(salary) {}

    // Overload the '==' operator to compare users by age
    bool operator==(const User &other) const
    {
        // Calculate age of this user
        int this_age = 2024 - birth_year;
        if (birth_month > 3)
            this_age--; // Adjust for leap years

        // Calculate age of the other user
        int other_age = 2024 - other.birth_year;
        if (other.birth_month > 3)
            other_age--; // Adjust for leap years

        // Compare ages
        return this_age == other_age;
    }

    // Overload the '+' operator to compute the average salary
    double operator+(const User &other) const
    {
        return (salary + other.salary) / 2.0;
    }

    // Overload the '+' operator to add an annual increment in percentage
    User operator+(double percentage) const
    {
        User newUser = *this;
        newUser.salary += newUser.salary * (percentage / 100.0);
        return newUser;
    }

    // Method to display user details
    void display() const
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Birth Year: " << birth_year << std::endl;
        std::cout << "Birth Month: " << birth_month << std::endl;
        std::cout << "Birth Day: " << birth_day << std::endl;
        std::cout << "Salary: " << salary << std::endl;
    }
};

int main()
{
    // Initialize User objects
    User User1Obj("Alice", 1990, 1, 1, 50000.0);
    User User2Obj("Bob", 1992, 1, 1, 60000.0);

    // Compare users by age
    bool result = User1Obj == User2Obj;
    std::cout << "Comparison result: " << std::boolalpha << result << std::endl;

    // Compute average salary
    double average_sal = User1Obj + User2Obj;
    std::cout << "Average salary: " << average_sal << std::endl;

    // Add 5% increment to User1's salary
    User1Obj = User1Obj + 5;
    User1Obj.display();

    // Add 10% increment to User2's salary
    User2Obj = User2Obj + 10;
    User2Obj.display();

    return 0;
}