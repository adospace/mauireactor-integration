using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SfIntApp.Models;

public record Employee(string Name, string Designation, string ImagePath, string Department);

public class EmployeeRepository
{
    private ObservableCollection<Employee> _employees;

    public ObservableCollection<Employee> Employees
    {
        get { return _employees; }
        set { this._employees = value; }
    }

    public EmployeeRepository()
    {
        GenerateEmployeeList();
    }

    internal void GenerateEmployeeList()
    {
        var departments = new[] { "HR", "IT", "Finance", "Marketing", "Sales", "Admin", "Support", "R&D" };
        var random = new Random();
        var names = new[] { "John Doe", "Jane Smith", "Michael Johnson", "Emily Davis", "David Wilson", "Sarah Brown", "Chris Lee", "Anna White", "James Harris", "Laura Martin" };
        var designations = new[] { "Manager", "Developer", "Analyst", "Consultant", "Specialist", "Coordinator", "Administrator", "Engineer" };
        _employees = new ObservableCollection<Employee>(
            Enumerable.Range(1, 100).Select(i => new Employee(
                names[random.Next(names.Length)],
                designations[random.Next(designations.Length)],
                $"ImagePath {i}.png",
                departments[random.Next(departments.Length)]
            )).ToList()
        );
    }
}
