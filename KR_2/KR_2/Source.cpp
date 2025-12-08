#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct {
    char name[100];
    int days;  
} Project;


typedef struct {
    Project* projects;  
    int count;          
    int capacity;       
} ProjectList;


typedef struct {
    char name[50];
    char position[50];
    ProjectList projects;  
} Employee;


void init_project_list(ProjectList* pl);

void add_project(ProjectList* pl, const char* name, int days);

void free_project_list(ProjectList* pl);

Employee* create_employees(int n);

Employee* find_employee(Employee* employees, int n);
void print_employee(const Employee* employee);

void free_employees(Employee* employees, int n);

void clear_input_buffer();

void clear_last_linebreak(char* str);

int main(int argc, char** argv) {

    int n = 0;
    int project_count = 0;
    char project_name[100];
    int days;

    printf("number of employees: ");
    scanf_s("%d", &n);
    clear_input_buffer();

    Employee* employees = create_employees(n);

    
    for (int i = 0; i < n; i++) {
        printf("\nemployee %d:\n", i + 1);

        printf("name: ");
        fgets(employees[i].name, sizeof(employees[i].name), stdin);
        clear_last_linebreak(employees[i].name);

        printf("position: ");
        fgets(employees[i].position, sizeof(employees[i].position), stdin);
        clear_last_linebreak(employees[i].position);

        printf("number of projects: ");
        scanf_s("%d", &project_count);
        clear_input_buffer();

        for (int j = 0; j < project_count; j++) {
            printf("project %d:\n", j + 1);


            printf("project name: ");
            fgets(project_name, sizeof(project_name), stdin);
            clear_last_linebreak(project_name);

            printf("number of days to complete: ");
            scanf_s("%d", &days);
            clear_input_buffer();

            
            add_project(&employees[i].projects, project_name, days);
        }
    }

    
    printf("\nAll employees\n");
    for (int i = 0; i < n; i++) {
        printf("\n%d. ", i + 1);
        print_employee(&employees[i]);
    }

    
    Employee* b = find_employee(employees, n);
    if (b) {
        printf("the employee with the largest number of projects \n");
        print_employee(b);
    }

    
    free_employees(employees, n);

    return 0;
}

void init_project_list(ProjectList* pl) {
    pl->count = 0;
    pl->capacity = 5;
    pl->projects = (Project*)malloc(pl->capacity * sizeof(Project));
}

void add_project(ProjectList* pl, const char* name, int days) {
    if (pl->count >= pl->capacity) {
        pl->capacity *= 2;
        pl->projects = (Project*)realloc(pl->projects,
            pl->capacity * sizeof(Project));
    }

    strcpy_s(pl->projects[pl->count].name, name);
    pl->projects[pl->count].days = days;
    pl->count++;
}

void free_project_list(ProjectList* pl) {
    free(pl->projects);
    pl->projects = NULL;
    pl->count = 0;
    pl->capacity = 0;
}

Employee* create_employees(int n) {
    Employee* employees = (Employee*)malloc(n * sizeof(Employee));
    for (int i = 0; i < n; i++) {
        init_project_list(&employees[i].projects);
    }
    return employees;
}

Employee* find_employee(Employee* employees, int n) {
    if (n <= 0) return NULL;

    Employee* b = &employees[0];
    int max_projects = employees[0].projects.count;

    for (int i = 1; i < n; i++) {
        if (employees[i].projects.count > max_projects) {
            b = &employees[i];
            max_projects = employees[i].projects.count;
        }
    }
    return b;
}

void print_employee(const Employee* employee) {
    printf("employee: %s\n", employee->name);
    printf("position: %s\n", employee->position);
    printf("number of project: %d\n", employee->projects.count);

    if (employee->projects.count > 0) {
        printf("projects:\n");
        for (int i = 0; i < employee->projects.count; i++) {
            printf("  %d. %s (term: %d days)\n",
                i + 1,
                employee->projects.projects[i].name,
                employee->projects.projects[i].days);
        }
    }
    printf("\n");
}

void free_employees(Employee* employees, int n) {
    for (int i = 0; i < n; i++) {
        free_project_list(&employees[i].projects);
    }
    free(employees);
}

void clear_input_buffer() {
    int c = 0;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void clear_last_linebreak(char* str) {
    if (str != NULL) {
        size_t len = strlen(str);
        if (len > 0 && str[len - 1] == '\n') {
            str[len - 1] = '\0';
        }
    }
}