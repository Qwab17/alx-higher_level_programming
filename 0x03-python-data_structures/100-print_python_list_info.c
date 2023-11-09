#include <Python.h>
#include <stdio.h>

void print_python_list_info(PyObject *p)
{
    PyListObject *list;
    Py_ssize_t size, alloc, i;

    printf("[*] Size of the Python List = %ld\n", Py_SIZE(p));
    list = (PyListObject *)p;
    size = Py_SIZE(p);
    alloc = list->allocated;

    printf("[*] Allocated = %ld\n", alloc);
    for (i = 0; i < size; i++)
    {
        printf("Element %ld: %s\n", i, Py_TYPE(list->ob_item[i])->tp_name);
    }
}
