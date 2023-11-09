#include <Python.h>

void print_python_bytes(PyObject *p);
void print_python_list(PyObject *p);

void print_python_bytes(PyObject *p)
{
	PyBytesObject *bytes = (PyBytesObject *)p;
	Py_ssize_t size, i;

	printf("[.] bytes object info\n");
	printf("  size: %ld\n", PyBytes_Size(p));
	printf("  trying string: %s\n", bytes->ob_sval);
	printf("  first %ld bytes: ", PyBytes_Size(p) + 1 > 10 ? 10 : PyBytes_Size(p) + 1);
	for (i = 0, size = PyBytes_Size(p) + 1 > 10 ? 10 : PyBytes_Size(p) + 1; i < size; i++)
		printf("%02hhx%c", bytes->ob_sval[i], i + 1 == size ? '\n' : ' ');
}

void print_python_list(PyObject *p)
{
	PyListObject *list = (PyListObject *)p;
	Py_ssize_t size, i;

	printf("[*] Python list info\n");
	printf("[*] Size of the Python List = %ld\n", Py_SIZE(p));
	printf("[*] Allocated = %ld\n", list->allocated);
	for (i = 0, size = Py_SIZE(p); i < size; i++)
	{
		printf("Element %ld: %s\n", i, Py_TYPE(list->ob_item[i])->tp_name);
		if (strcmp(Py_TYPE(list->ob_item[i])->tp_name, "bytes") == 0)
			print_python_bytes(list->ob_item[i]);
	}
}
