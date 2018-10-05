
typedef struct
{
    int id;
    char name [51];
    char lastname[51];
    float salary ;
    int sector;
    int isEmpty;

} sEmployee;

int menu();
sEmployee altaempleado ();
void initEmployees ( sEmployee inicio [], int tam);

void printEmployeess (sEmployee empleados [], int tam);

int buscarLibre( sEmployee empleados [], int tam);
int findEmployeeById( sEmployee empleados [], int tam, int idAut );
int addEmployees ( sEmployee empleados [], int tam);














